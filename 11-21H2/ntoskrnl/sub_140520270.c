/*
 * XREFs of sub_140520270 @ 0x140520270
 * Callers:
 *     <none>
 * Callees:
 *     sub_140399A14 @ 0x140399A14 (sub_140399A14.c)
 *     sub_1403BEC24 @ 0x1403BEC24 (sub_1403BEC24.c)
 */

__int64 __fastcall sub_140520270(int a1, unsigned int *a2)
{
  int LockArray_high; // r8d
  __int64 result; // rax
  unsigned int i; // ebx

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  result = qword_140C4D0A8;
  if ( off_140C02520 != &off_1400032A0 )
    result = qword_140C4D0A8 + 8LL * (unsigned int)(LockArray_high * dword_140C4D044);
  if ( a2 )
  {
    i = *a2;
    if ( (*a2 & 0x40000000) != 0 )
      i = dword_140C4A418 + (i & 0xBFFFFFFF);
LABEL_11:
    sub_140399A14(i, 0, 0LL, 0, 0);
    sub_1403BEC24(i);
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)KeGetCurrentPrcb() + 22, 0xFFFFFFFE);
  }
  for ( i = 0; i < dword_140C4A404; result += 8LL )
  {
    if ( !*(_DWORD *)(*(_QWORD *)result + 24LL) && *(_DWORD *)(*(_QWORD *)result + 32LL) == a1 )
      break;
    ++i;
  }
  if ( i != dword_140C4A404 )
    goto LABEL_11;
  return result;
}
