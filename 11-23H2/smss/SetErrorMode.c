/*
 * XREFs of SetErrorMode @ 0x1400138C0
 * Callers:
 *     GetLongPathNameW @ 0x140013BCC (GetLongPathNameW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x1400149C0 (BaseSetLastNTError.c)
 */

__int64 __fastcall SetErrorMode(int a1)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  char v4; // r10
  int v5; // r8d
  unsigned int v6; // edi
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessDefaultHardErrorMode,
         &ProcessInformation,
         4u,
         0LL);
  if ( v2 >= 0 )
  {
    if ( (ProcessInformation & 1) != 0 )
      v3 = ProcessInformation & 0xFFFFFFFE;
    else
      v3 = ProcessInformation | 1;
  }
  else
  {
    BaseSetLastNTError((unsigned int)v2);
    v3 = 0;
  }
  v4 = a1;
  v5 = a1 | 1;
  v6 = a1 & 0xFFFFFFFE;
  if ( (v4 & 1) == 0 )
    v6 = v5;
  v9 = v3 & 4 | v6;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &v9, 4u);
  return v3;
}
