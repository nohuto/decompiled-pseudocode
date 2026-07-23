/*
 * XREFs of sub_14080BEDC @ 0x14080BEDC
 * Callers:
 *     sub_140811574 @ 0x140811574 (sub_140811574.c)
 *     sub_1409583B0 @ 0x1409583B0 (sub_1409583B0.c)
 *     sub_140958430 @ 0x140958430 (sub_140958430.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14080BEDC(unsigned int *a1, unsigned int a2)
{
  PVOID *v4; // rsi
  unsigned int v5; // edx

  if ( a2 >= *a1 )
    return 3221225612LL;
  v4 = (PVOID *)&a1[6 * a2];
  ObfDereferenceObjectWithTag(v4[2], 0x4C706E50u);
  if ( ((_DWORD)v4[4] & 1) != 0 )
    --a1[2];
  v5 = *a1;
  if ( a2 < *a1 - 1 )
  {
    memmove(v4 + 2, &a1[4 * a2 + 10 + 2 * a2], 24LL * (v5 - a2 - 1));
    v5 = *a1;
  }
  *a1 = v5 - 1;
  return 0LL;
}
