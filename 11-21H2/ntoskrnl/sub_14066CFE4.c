/*
 * XREFs of sub_14066CFE4 @ 0x14066CFE4
 * Callers:
 *     sub_14066CE40 @ 0x14066CE40 (sub_14066CE40.c)
 *     sub_14066CF00 @ 0x14066CF00 (sub_14066CF00.c)
 *     sub_14066D440 @ 0x14066D440 (sub_14066D440.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_1409272A0 @ 0x1409272A0 (sub_1409272A0.c)
 *     sub_140928C60 @ 0x140928C60 (sub_140928C60.c)
 *     sub_140929080 @ 0x140929080 (sub_140929080.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14066D038 @ 0x14066D038 (sub_14066D038.c)
 */

bool __fastcall sub_14066CFE4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  bool result; // al

  result = 0;
  if ( a2 != a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 2170);
    LOBYTE(a3) = *(_BYTE *)(a3 + 2170);
    if ( (unsigned __int8)sub_14066D038(a1, a2, a3) )
    {
      if ( !qword_140C1B960 || !(unsigned __int8)sub_14042A5E0(v4, v3) )
        return 1;
    }
  }
  return result;
}
