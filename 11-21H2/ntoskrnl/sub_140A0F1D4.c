/*
 * XREFs of sub_140A0F1D4 @ 0x140A0F1D4
 * Callers:
 *     sub_1406D5C1C @ 0x1406D5C1C (sub_1406D5C1C.c)
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 *     sub_140A0F140 @ 0x140A0F140 (sub_140A0F140.c)
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 *     sub_140A0FAB0 @ 0x140A0FAB0 (sub_140A0FAB0.c)
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 * Callees:
 *     sub_140A0F8CC @ 0x140A0F8CC (sub_140A0F8CC.c)
 */

signed __int64 __fastcall sub_140A0F1D4(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_140A0F8CC((PVOID)a1);
  }
  return v1;
}
