/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180035FF0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180035DB0 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800DA870 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DAB70 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E1AA4 (LdrpUnsuppressAddressTakenIat.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(const void *a1, _BYTE *a2, int a3, int a4, __int64 *a5, int a6)
{
  int v7; // r12d
  __int64 v9; // rsi
  int LoadedDllByHandle; // eax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF

  v7 = (int)a2;
  v9 = 0LL;
  if ( ((a6 & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0) && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v14, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrdload.c",
        1256,
        (unsigned int)"LdrResolveDelayLoadedAPI",
        0,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        a1,
        LoadedDllByHandle);
    }
    else
    {
      v9 = *a5;
      v11 = v14;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v14 + 64) )
      {
        if ( (*(_DWORD *)(v14 + 104) & 0x8000) != 0 )
        {
          v9 = LdrpHandleProtectedDelayload(v14, v7, a3, a4, (__int64)a5, a6);
        }
        else
        {
          v9 = LdrpHandleUnprotectedDelayLoad(v14, v7, a3, a4, (__int64)a5, a6);
          if ( v9 )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v12 = LdrpUnsuppressAddressTakenIat(
                      a1,
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1),
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1));
              if ( v12 < 0 )
                LdrpLogInternal(
                  (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                  1235,
                  (unsigned int)"LdrResolveDelayLoadedAPI",
                  0,
                  "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the"
                  " DLL based at 0x%p.Status = 0x%x\n",
                  a1,
                  v12);
            }
          }
        }
      }
      LdrpDereferenceModule(v11);
    }
  }
  return v9;
}
