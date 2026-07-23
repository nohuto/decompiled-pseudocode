/*
 * XREFs of sub_1405B60A0 @ 0x1405B60A0
 * Callers:
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 * Callees:
 *     sub_1402341A4 @ 0x1402341A4 (sub_1402341A4.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 */

__int64 __fastcall sub_1405B60A0(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  if ( v1[1] )
  {
    sub_1402341A4(a1);
    sub_1406F2C30(
      v1[3],
      v1[4],
      v1[1],
      *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 192) + 138LL));
    v1[1] = 0LL;
  }
  return 0LL;
}
