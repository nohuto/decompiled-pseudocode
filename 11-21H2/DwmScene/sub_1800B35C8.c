/*
 * XREFs of sub_1800B35C8 @ 0x1800B35C8
 * Callers:
 *     sub_1800B3608 @ 0x1800B3608 (sub_1800B3608.c)
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 */

char __fastcall sub_1800B35C8(__int64 a1)
{
  _QWORD *v1; // r8
  __int64 v2; // r10

  if ( *(_BYTE *)sub_1800441D8(a1 + 184) )
    return sub_1800B3504(v2, *(_QWORD *)(v2 + 192), (__int64)v1, v1);
  else
    return 0;
}
