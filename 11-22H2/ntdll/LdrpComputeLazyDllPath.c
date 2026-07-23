/*
 * XREFs of LdrpComputeLazyDllPath @ 0x18007A914
 * Callers:
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpGetDllPath @ 0x180031CCC (LdrpGetDllPath.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1)
{
  unsigned int v2; // edi
  int DllPath; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(PCWSTR *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                &v7,
                &v8,
                (_DWORD *)(a1 + 120),
                (_OWORD *)(a1 + 40),
                &v9);
    v2 = DllPath;
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
      v4 = v7;
      *(_QWORD *)(a1 + 8) = v8;
      v5 = v9;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 16) = v5;
      if ( v5 )
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1497,
          (__int64)"LdrpComputeLazyDllPath",
          2u,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v5,
          v4);
      else
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1491,
          (__int64)"LdrpComputeLazyDllPath",
          2u,
          "DLL search path computed: %ws\n",
          v4);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
