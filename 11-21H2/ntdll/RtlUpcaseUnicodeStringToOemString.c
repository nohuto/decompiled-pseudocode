/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x18000C380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDidUnicodeToOemWork @ 0x18000C458 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18000C590 (RtlxUnicodeStringToOemSize.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000E2C0 (AllocateOrValidateCharStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToOemString(_WORD *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  _WORD *v8; // r12
  _QWORD *v9; // rdi
  __int64 result; // rax
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(a2);
  v13 = v6;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  v8 = a1 + 1;
  v9 = a1 + 4;
  LOBYTE(v7) = a3;
  result = AllocateOrValidateCharStringBuffer(v7, v6, a1 + 4, a1 + 1);
  if ( (int)result >= 0 )
  {
    v11 = RtlUpcaseUnicodeToOemN(*v9, (unsigned __int16)*v8, (unsigned int)&v13, *((_QWORD *)a2 + 1), *a2);
    if ( v11 >= 0 )
    {
      v12 = v13;
      *a1 = v13;
      *(_BYTE *)(v12 + *v9) = 0;
      if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(a1, a2) )
        v11 = -1073741470;
    }
    if ( v11 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*v9);
        *v9 = 0LL;
        *v8 = 0;
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
