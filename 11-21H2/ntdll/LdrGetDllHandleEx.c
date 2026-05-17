/*
 * XREFs of LdrGetDllHandleEx @ 0x180042DE0
 * Callers:
 *     CsrClientConnectToServer @ 0x1800794A0 (CsrClientConnectToServer.c)
 *     LdrGetDllHandle @ 0x18007ECF0 (LdrGetDllHandle.c)
 *     SbpResolveBasedOnName @ 0x1801257CC (SbpResolveBasedOnName.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDll @ 0x18004F750 (LdrpFindLoadedDll.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // edi
  int LoadedDll; // ebx
  __int64 v13; // rsi
  int Count; // eax
  __int64 v16; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v17[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v18; // [rsp+BCh] [rbp-2Ch]

  v16 = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1516,
    (__int64)"LdrGetDllHandleEx",
    3u,
    "DLL name: %wZ\n",
    a4);
  LdrpInitializeDllPath(*(void **)(a4 + 8), a2, v17);
  if ( (a1 & 0xFFFFFFF8) == 0 && (a1 & 3) != 3 )
  {
    if ( a5 )
    {
      v11 = a1 & 2;
      goto LABEL_5;
    }
    v11 = a1 & 2;
    if ( (a1 & 2) != 0 )
    {
LABEL_5:
      LoadedDll = LdrpFindLoadedDll(a4, v17, &v16);
      if ( LoadedDll < 0 )
        goto LABEL_14;
      v13 = v16;
      if ( v11 )
      {
        Count = LdrpPinModule(v16, v8, v9, v10);
      }
      else
      {
        if ( (a1 & 1) != 0 )
          goto LABEL_10;
        Count = LdrpIncrementModuleLoadCount(v16, v8, v9, v10);
      }
      LoadedDll = Count;
      if ( Count < 0 )
      {
LABEL_12:
        LdrpDereferenceModule(v13, v8, v9, v10);
        goto LABEL_14;
      }
LABEL_10:
      if ( a5 )
        *a5 = *(_QWORD *)(v13 + 48);
      goto LABEL_12;
    }
  }
  LoadedDll = -1073741811;
LABEL_14:
  if ( v18 )
    RtlReleasePath(v17[0], v8, v9, v10);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1566,
    (__int64)"LdrGetDllHandleEx",
    4u,
    "Status: 0x%08lx\n",
    LoadedDll);
  return (unsigned int)LoadedDll;
}
