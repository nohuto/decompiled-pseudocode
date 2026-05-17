/*
 * XREFs of RtlOemStringToUnicodeString @ 0x180058FD0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18008C140 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180010258 (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800590A0 (RtlxOemStringToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x180059110 (RtlOemToUnicodeN.c)
 */

__int64 __fastcall RtlOemStringToUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  _WORD *v7; // r15
  __int64 *v8; // rdi
  __int64 result; // rax
  int v10; // ebx
  __int16 v11; // dx
  unsigned int v12; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(a2);
  v12 = v6;
  if ( v6 > 0xFFFE )
    return 3221225712LL;
  v7 = (_WORD *)(a1 + 2);
  v8 = (__int64 *)(a1 + 8);
  result = AllocateOrValidateUnicodeStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v10 = RtlOemToUnicodeN(*v8, (unsigned __int16)*v7, (unsigned int)&v12, *((_QWORD *)a2 + 1), *a2);
    if ( v10 >= 0 )
    {
      v11 = v12;
      *(_WORD *)(*v8 + 2 * ((unsigned __int64)v12 >> 1)) = 0;
      *(_WORD *)a1 = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*v8);
        *v8 = 0LL;
        *v7 = 0;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
