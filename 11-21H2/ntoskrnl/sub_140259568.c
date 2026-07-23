/*
 * XREFs of sub_140259568 @ 0x140259568
 * Callers:
 *     sub_1402DE5C0 @ 0x1402DE5C0 (sub_1402DE5C0.c)
 *     sub_1403A5020 @ 0x1403A5020 (sub_1403A5020.c)
 *     sub_1403A51D0 @ 0x1403A51D0 (sub_1403A51D0.c)
 *     sub_140564940 @ 0x140564940 (sub_140564940.c)
 *     sub_140A50A10 @ 0x140A50A10 (sub_140A50A10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140259568(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v1 = *(char *)(a1 + 66);
  v2 = 0;
  if ( *(int *)(a1 + 48) >= 0 )
    return 0LL;
  v3 = a1 + 72LL * (v1 - 1) + 208;
  if ( !v1 )
    return 0LL;
  while ( (*(_BYTE *)(v3 + 3) & 2) == 0 )
  {
    ++v2;
    v3 -= 72LL;
    if ( v2 >= v1 )
      return 0LL;
  }
  return *(_QWORD *)(v3 + 40);
}
