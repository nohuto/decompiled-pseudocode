/*
 * XREFs of RtlOemStringToUnicodeString @ 0x18000C250
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18000B300 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     RtlxOemStringToUnicodeSize @ 0x18000C320 (RtlxOemStringToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x18000DCD0 (RtlOemToUnicodeN.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000F37C (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlOemStringToUnicodeString(_WORD *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  _WORD *v8; // r15
  _QWORD *v9; // rdi
  __int64 result; // rax
  int v11; // ebx
  __int16 v12; // dx
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(a2);
  v13 = v6;
  if ( v6 > 0xFFFE )
    return 3221225712LL;
  v8 = a1 + 1;
  v9 = a1 + 4;
  LOBYTE(v7) = a3;
  result = AllocateOrValidateUnicodeStringBuffer(v7, v6, a1 + 4, a1 + 1);
  if ( (int)result >= 0 )
  {
    v11 = RtlOemToUnicodeN(*v9, (unsigned __int16)*v8, (unsigned int)&v13, *((_QWORD *)a2 + 1), *a2);
    if ( v11 >= 0 )
    {
      v12 = v13;
      *(_WORD *)(*v9 + 2 * ((unsigned __int64)v13 >> 1)) = 0;
      *a1 = v12;
      v11 = 0;
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
