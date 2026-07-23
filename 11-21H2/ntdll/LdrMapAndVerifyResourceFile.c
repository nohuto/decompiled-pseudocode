/*
 * XREFs of LdrMapAndVerifyResourceFile @ 0x180050748
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpMapResourceFile @ 0x18004E164 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180050DFC (LdrpVerifyAlternateResourceModuleEx.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrMapAndVerifyResourceFile(
        __int64 a1,
        const WCHAR **a2,
        char a3,
        int a4,
        __int64 a5,
        int a6,
        HANDLE *a7,
        _QWORD *a8,
        unsigned __int64 *a9)
{
  __int64 v13; // rcx
  int v14; // ebx
  unsigned __int64 v15; // rdi
  __int64 v17; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v20[2]; // [rsp+40h] [rbp-38h] BYREF

  Handle = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  BaseAddress = 0LL;
  v20[0] = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v17 = 2147353476LL;
    LdrpTraceLoadMUIDll(a2, *(unsigned __int8 *)v17);
  }
  v14 = LdrpMapResourceFile(a1, a2, a3, &Handle, &BaseAddress, v20);
  if ( v14 >= 0 )
  {
    v15 = (unsigned __int64)BaseAddress | 1;
    if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, (unsigned __int64)BaseAddress | 1, a2, a5, a4, a6) )
    {
      *a7 = Handle;
      *a8 = v20[0];
      *a9 = v15;
    }
    else
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      NtClose(Handle);
      return (unsigned int)-1073020926;
    }
  }
  return (unsigned int)v14;
}
