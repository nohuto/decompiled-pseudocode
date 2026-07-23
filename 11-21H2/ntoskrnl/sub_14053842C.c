/*
 * XREFs of sub_14053842C @ 0x14053842C
 * Callers:
 *     sub_140537044 @ 0x140537044 (sub_140537044.c)
 *     sub_14053802C @ 0x14053802C (sub_14053802C.c)
 *     sub_140538278 @ 0x140538278 (sub_140538278.c)
 *     sub_140538480 @ 0x140538480 (sub_140538480.c)
 *     sub_140538580 @ 0x140538580 (sub_140538580.c)
 *     sub_14090B300 @ 0x14090B300 (sub_14090B300.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14053842C(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v2 = 0LL;
  v3 = a1 + *(unsigned int *)(a1 + 4);
  if ( v3 <= a1 )
    return 0LL;
  if ( a2 )
    v5 = a2 + *(unsigned __int16 *)(a2 + 2);
  else
    v5 = a1 + 48;
  if ( v5 + 4 >= v5 && v5 + 4 <= v3 )
  {
    v6 = v5 + *(unsigned __int16 *)(v5 + 2);
    if ( v6 > v5 && v6 <= v3 )
      return v5;
  }
  return v2;
}
