/*
 * XREFs of sub_140B2D6B4 @ 0x140B2D6B4
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 */

__int64 sub_140B2D6B4()
{
  __int64 result; // rax
  __int64 i; // rcx

  result = (__int64)qword_140C46278;
  for ( i = *((_QWORD *)qword_140C46278 + 1); i; i = *(_QWORD *)i )
  {
    result = (unsigned int)(*(_DWORD *)(i + 300) - 777);
    if ( (unsigned int)result <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      qword_140D686A0 = i;
      return sub_14076FB70(i, 4);
    }
  }
  return result;
}
