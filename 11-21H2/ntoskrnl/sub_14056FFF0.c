/*
 * XREFs of sub_14056FFF0 @ 0x14056FFF0
 * Callers:
 *     sub_14056FF20 @ 0x14056FF20 (sub_14056FF20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056FFF0(unsigned int a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // rax
  __int64 v5; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u || CurrentIrql < 0xFu && !byte_140C22260 )
    return 3221225473LL;
  if ( a1 >= (unsigned int)dword_140D06884 )
    return 3221225485LL;
  _mm_lfence();
  v4 = qword_140D088C0[a1];
  if ( !v4 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v4 + 1728);
  if ( !v5 )
    return 3221225473LL;
  *a2 = v5;
  return 0LL;
}
