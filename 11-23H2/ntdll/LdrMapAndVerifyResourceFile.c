/*
 * XREFs of LdrMapAndVerifyResourceFile @ 0x18002E7F0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180008020 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x18002EA70 (LdrpMapResourceFile.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrMapAndVerifyResourceFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const wchar_t *a5,
        int a6,
        HANDLE *a7,
        _QWORD *a8,
        __int64 *a9)
{
  int v9; // r13d
  char v10; // bl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdi
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF

  v9 = a4;
  v10 = a3;
  Handle = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v16 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v16 = 2147353477LL;
  if ( (*(_BYTE *)v16 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v13, v14, v15) )
      v20 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v20 = 2147353476LL;
    LdrpTraceLoadMUIDll(a2, *(unsigned __int8 *)v20);
  }
  LOBYTE(v14) = v10;
  v17 = LdrpMapResourceFile(a1, a2, v14, (unsigned int)&Handle, (__int64)&v21, (__int64)&v23);
  if ( v17 >= 0 )
  {
    v18 = v21 | 1;
    if ( LdrpVerifyAlternateResourceModuleEx(a1, v21 | 1, a2, a5, v9, a6) )
    {
      *a7 = Handle;
      *a8 = v23;
      *a9 = v18;
    }
    else
    {
      NtUnmapViewOfSection(-1LL);
      NtClose(Handle);
      return (unsigned int)-1073020926;
    }
  }
  return (unsigned int)v17;
}
