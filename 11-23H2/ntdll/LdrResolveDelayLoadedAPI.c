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

__int64 __fastcall LdrResolveDelayLoadedAPI(
        const void *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6)
{
  int v8; // ebx
  __int64 v9; // rsi
  char v10; // al
  int LoadedDllByHandle; // ecx
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0;
  v9 = 0LL;
  if ( (a6 & 0xFFFFDFFF) == 8 || (v10 = 0, (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0) )
    v10 = 1;
  if ( v10 && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v16, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrdload.c",
        1256LL,
        (__int64)"LdrResolveDelayLoadedAPI",
        0LL,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        a1,
        LoadedDllByHandle);
    }
    else
    {
      v9 = *a5;
      v12 = v16;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v16 + 64) )
      {
        if ( (*(_DWORD *)(v16 + 104) & 0x8000) != 0 )
        {
          v9 = LdrpHandleProtectedDelayload(v16, (__int64)a2, a3, a4, a5, a6);
        }
        else
        {
          v9 = LdrpHandleUnprotectedDelayLoad(v16, (_DWORD)a2, a3, a4, (__int64)a5, a6);
          if ( v9 )
          {
            LOBYTE(v13) = LdrControlFlowGuardEnforcedWithExportSuppression();
            if ( v13 )
            {
              v14 = LdrpUnsuppressAddressTakenIat(
                      a1,
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1),
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1));
              LOBYTE(v8) = v14 >= 0;
              if ( v8 != 1 )
                LdrpLogInternal(
                  (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                  1235LL,
                  (__int64)"LdrResolveDelayLoadedAPI",
                  0LL,
                  "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the"
                  " DLL based at 0x%p.Status = 0x%x\n",
                  a1,
                  v14);
            }
          }
        }
      }
      LdrpDereferenceModule(v12);
    }
  }
  return v9;
}
