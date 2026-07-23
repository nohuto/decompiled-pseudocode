/*
 * XREFs of sub_1407ED710 @ 0x1407ED710
 * Callers:
 *     <none>
 * Callees:
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140995F04 @ 0x140995F04 (sub_140995F04.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407ED710(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  sub_140A48330(a1);
  do
  {
    v3 = byte_140C4EF1C;
    sub_140A47CF8(v2, v1);
    if ( qword_140C5AE08 )
    {
      LOBYTE(v5) = v3;
      sub_14042A5E0(v5, v4);
    }
    if ( byte_140C5AC3C )
      sub_140995F04();
    sub_140A48330(v5);
  }
  while ( v3 != byte_140C4EF1C );
  sub_140368A78((__int64)&unk_140C20B80);
  return sub_140A47CF8(v7, v6);
}
