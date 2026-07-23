/*
 * XREFs of sub_14039F05C @ 0x14039F05C
 * Callers:
 *     sub_14022F150 @ 0x14022F150 (sub_14022F150.c)
 * Callees:
 *     sub_1403A493C @ 0x1403A493C (sub_1403A493C.c)
 *     sub_1403A4A60 @ 0x1403A4A60 (sub_1403A4A60.c)
 */

__int64 __fastcall sub_14039F05C(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0;
  if ( a1 == qword_140D06DB8 )
    return 0LL;
  if ( !a1 )
    return 3221225620LL;
  if ( (unsigned __int64)(a1 - 2) <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v3 = sub_1403A4A60((unsigned int)a1, &v4);
    BYTE8(v3) = v4;
    qword_140D06DB8 = a1;
    sub_1403A493C(0LL, &v3, 0LL);
    return 0LL;
  }
  return 3221225621LL;
}
