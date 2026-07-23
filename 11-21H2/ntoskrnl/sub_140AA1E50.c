/*
 * XREFs of sub_140AA1E50 @ 0x140AA1E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140AA1B9C @ 0x140AA1B9C (sub_140AA1B9C.c)
 *     sub_140AA1C3C @ 0x140AA1C3C (sub_140AA1C3C.c)
 */

char __fastcall sub_140AA1E50(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v5; // rsi
  char v6; // bl
  __int64 v7; // r8

  v5 = sub_140AA1B9C(a1, a2, a3);
  v6 = sub_14042A5E0(a1, *(_QWORD *)(a2 + 8));
  if ( v5 )
    sub_140AA1C3C((__int64)v5, *(const void **)a2, v7);
  return v6;
}
