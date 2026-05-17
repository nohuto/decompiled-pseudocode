/*
 * XREFs of LdrGetDllHandleEx @ 0x18002A220
 * Callers:
 *     LdrGetDllHandle @ 0x18002B0C0 (LdrGetDllHandle.c)
 *     CsrClientConnectToServer @ 0x18004B480 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x1801286EC (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpFindLoadedDll @ 0x180016164 (LdrpFindLoadedDll.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A380 (LdrpIncrementModuleLoadCount.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     LdrpPinModule @ 0x180079978 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v8; // edi
  int LoadedDll; // ebx
  __int64 v10; // rsi
  int Count; // eax
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v14[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+BCh] [rbp-2Ch]

  v13 = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1516LL,
    (__int64)"LdrGetDllHandleEx",
    3LL,
    "DLL name: %wZ\n",
    a4);
  LdrpInitializeDllPath(*(_QWORD *)(a4 + 8), a2, v14);
  if ( (a1 & 0xFFFFFFF8) == 0 && (a1 & 3) != 3 )
  {
    if ( a5 )
    {
      v8 = a1 & 2;
      goto LABEL_5;
    }
    v8 = a1 & 2;
    if ( (a1 & 2) != 0 )
    {
LABEL_5:
      LoadedDll = LdrpFindLoadedDll(a4, (int)v14, &v13);
      if ( LoadedDll < 0 )
        goto LABEL_14;
      v10 = v13;
      if ( v8 )
      {
        Count = LdrpPinModule(v13);
      }
      else
      {
        if ( (a1 & 1) != 0 )
          goto LABEL_10;
        Count = LdrpIncrementModuleLoadCount(v13);
      }
      LoadedDll = Count;
      if ( Count < 0 )
      {
LABEL_12:
        LdrpDereferenceModule(v10);
        goto LABEL_14;
      }
LABEL_10:
      if ( a5 )
        *a5 = *(_QWORD *)(v10 + 48);
      goto LABEL_12;
    }
  }
  LoadedDll = -1073741811;
LABEL_14:
  if ( v15 )
    RtlReleasePath(v14[0]);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1566LL,
    (__int64)"LdrGetDllHandleEx",
    4LL,
    "Status: 0x%08lx\n",
    LoadedDll);
  return (unsigned int)LoadedDll;
}
