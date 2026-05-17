/*
 * XREFs of LdrpComputeLazyDllPath @ 0x180051BAC
 * Callers:
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrpGetDllPath @ 0x18001DBFC (LdrpGetDllPath.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  int DllPath; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpPathLock, a2, a3, a4);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                &v10,
                &v11,
                (_DWORD *)(a1 + 120),
                (_OWORD *)(a1 + 40),
                &v12);
    v5 = DllPath;
    if ( DllPath < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1480,
        (__int64)"LdrpComputeLazyDllPath",
        0,
        "Lazy DLL search path computation failed with status: 0x%08lx.\n",
        DllPath);
    }
    else
    {
      v7 = v10;
      *(_QWORD *)(a1 + 8) = v11;
      v8 = v12;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v8;
      if ( v8 )
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1497,
          (__int64)"LdrpComputeLazyDllPath",
          2u,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v8,
          v7);
      else
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1491,
          (__int64)"LdrpComputeLazyDllPath",
          2u,
          "DLL search path computed: %ws\n",
          v7);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v5;
}
