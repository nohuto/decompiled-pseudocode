/*
 * XREFs of sub_1406B8920 @ 0x1406B8920
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1406B8920(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  char v3; // r10

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  if ( v2 < 5 && qword_140007150[3 * v2] )
    return sub_14042A5E0(a1, a2);
  return v3;
}
