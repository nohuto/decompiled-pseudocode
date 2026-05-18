/*
 * XREFs of sub_1800F9070 @ 0x1800F9070
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F7060 @ 0x1800F7060 (sub_1800F7060.c)
 */

__int64 __fastcall sub_1800F9070(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)sub_1800F7060(a1, a2, &v5) )
    return v5;
  return a3;
}
