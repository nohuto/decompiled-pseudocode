/*
 * XREFs of sub_140515358 @ 0x140515358
 * Callers:
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 */

bool __fastcall sub_140515358(__int64 *BugCheckParameter3)
{
  char v2; // di
  __int64 v3; // rbx

  v2 = 0;
  if ( (int)sub_1403B2A28((__int64)BugCheckParameter3) >= 0 )
  {
    v3 = BugCheckParameter3[7];
    sub_140514E28(BugCheckParameter3);
    return v3 != 0;
  }
  return v2;
}
