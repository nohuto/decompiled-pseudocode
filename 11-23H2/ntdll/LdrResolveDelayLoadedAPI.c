/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x18002BE90
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x18002BE04 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800DA310 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021AD0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002BFFC (LdrpFindLoadedDllByHandle.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DA610 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E15E4 (LdrpUnsuppressAddressTakenIat.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  int v8; // ebx
  void *ForwarderString; // rsi
  char v10; // al
  int LoadedDllByHandle; // ecx
  char *v12; // rdi
  int v13; // eax
  int v14; // eax
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0;
  ForwarderString = 0LL;
  if ( (Flags & 0xFFFFDFFF) == 8 || (v10 = 0, (~((LdrpPolicyBits & 4 | 0x7B) << 8) & Flags) == 0) )
    v10 = 1;
  if ( v10 && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(ParentModuleBase, BaseAddress, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrdload.c",
        1256,
        (__int64)"LdrResolveDelayLoadedAPI",
        0,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        ParentModuleBase,
        LoadedDllByHandle);
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v12 = (char *)BaseAddress[0];
      if ( ThunkAddress->u1.ForwarderString - (unsigned __int64)ParentModuleBase < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
        {
          ForwarderString = (void *)LdrpHandleProtectedDelayload(
                                      (__int64)BaseAddress[0],
                                      (__int64)DelayloadDescriptor,
                                      (__int64)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
        }
        else
        {
          ForwarderString = (void *)LdrpHandleUnprotectedDelayLoad(
                                      (int)BaseAddress[0],
                                      (int)DelayloadDescriptor,
                                      (int)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            LOBYTE(v13) = LdrControlFlowGuardEnforcedWithExportSuppression();
            if ( v13 )
            {
              v14 = LdrpUnsuppressAddressTakenIat(ParentModuleBase);
              LOBYTE(v8) = v14 >= 0;
              if ( v8 != 1 )
                LdrpLogInternal(
                  (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                  1235,
                  (__int64)"LdrResolveDelayLoadedAPI",
                  0,
                  "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the"
                  " DLL based at 0x%p.Status = 0x%x\n",
                  ParentModuleBase,
                  v14);
            }
          }
        }
      }
      LdrpDereferenceModule(v12);
    }
  }
  return ForwarderString;
}
