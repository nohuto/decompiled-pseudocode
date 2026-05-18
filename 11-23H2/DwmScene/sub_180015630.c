/*
 * XREFs of sub_180015630 @ 0x180015630
 * Callers:
 *     sub_180017544 @ 0x180017544 (sub_180017544.c)
 *     sub_180055CE8 @ 0x180055CE8 (sub_180055CE8.c)
 *     sub_1800843C8 @ 0x1800843C8 (sub_1800843C8.c)
 *     sub_180084C14 @ 0x180084C14 (sub_180084C14.c)
 *     sub_18008B0A8 @ 0x18008B0A8 (sub_18008B0A8.c)
 *     sub_18008C230 @ 0x18008C230 (sub_18008C230.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

_QWORD *__fastcall sub_180015630(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx

  v2 = a2[1];
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    v4 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v5 = v2;
  }
  *a1 = v4;
  v6 = (volatile signed __int32 *)a1[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010574(v6);
  return a1;
}
