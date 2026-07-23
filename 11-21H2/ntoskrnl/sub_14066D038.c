/*
 * XREFs of sub_14066D038 @ 0x14066D038
 * Callers:
 *     sub_14066CFE4 @ 0x14066CFE4 (sub_14066CFE4.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 * Callees:
 *     sub_14066D068 @ 0x14066D068 (sub_14066D068.c)
 */

bool __fastcall sub_14066D038(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  char v4; // al

  v3 = 0;
  v4 = a2;
  if ( (_BYTE)a1 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = v4;
    return (unsigned __int8)sub_14066D068(a1, a2) == 0;
  }
  return v3;
}
