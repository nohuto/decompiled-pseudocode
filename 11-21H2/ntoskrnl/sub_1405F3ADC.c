/*
 * XREFs of sub_1405F3ADC @ 0x1405F3ADC
 * Callers:
 *     sub_1409C56F0 @ 0x1409C56F0 (sub_1409C56F0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405F3ADC(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = a1 + 1;
  if ( sub_140347810(a1 + 1) )
  {
    *(_DWORD *)(a2 + 44) = 5;
    v5 = sub_14042A5E0(a1[3].Count, a2);
    sub_1402AD030(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
