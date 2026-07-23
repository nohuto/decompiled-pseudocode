/*
 * XREFs of sub_14077CD90 @ 0x14077CD90
 * Callers:
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_140697EF0 @ 0x140697EF0 (sub_140697EF0.c)
 *     sub_1406BCC20 @ 0x1406BCC20 (sub_1406BCC20.c)
 *     sub_1406BD17C @ 0x1406BD17C (sub_1406BD17C.c)
 *     sub_1406C7604 @ 0x1406C7604 (sub_1406C7604.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_1406E5574 @ 0x1406E5574 (sub_1406E5574.c)
 *     sub_1406E84C0 @ 0x1406E84C0 (sub_1406E84C0.c)
 *     sub_1407452A0 @ 0x1407452A0 (sub_1407452A0.c)
 *     sub_14074761C @ 0x14074761C (sub_14074761C.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140763C50 @ 0x140763C50 (sub_140763C50.c)
 *     sub_14076AD40 @ 0x14076AD40 (sub_14076AD40.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076B438 @ 0x14076B438 (sub_14076B438.c)
 *     sub_14076B5DC @ 0x14076B5DC (sub_14076B5DC.c)
 *     sub_14076B788 @ 0x14076B788 (sub_14076B788.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076C544 @ 0x14076C544 (sub_14076C544.c)
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_14077386C @ 0x14077386C (sub_14077386C.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     sub_1407741A4 @ 0x1407741A4 (sub_1407741A4.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 *     sub_140778DA4 @ 0x140778DA4 (sub_140778DA4.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 *     sub_140785B98 @ 0x140785B98 (sub_140785B98.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_140789210 @ 0x140789210 (sub_140789210.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     sub_14081EFBC @ 0x14081EFBC (sub_14081EFBC.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 *     sub_1409486E4 @ 0x1409486E4 (sub_1409486E4.c)
 *     sub_140948B70 @ 0x140948B70 (sub_140948B70.c)
 *     sub_140949470 @ 0x140949470 (sub_140949470.c)
 *     sub_1409496C0 @ 0x1409496C0 (sub_1409496C0.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094C2D0 @ 0x14094C2D0 (sub_14094C2D0.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140A27060 @ 0x140A27060 (sub_140A27060.c)
 *     sub_140A27340 @ 0x140A27340 (sub_140A27340.c)
 *     sub_140B4FB90 @ 0x140B4FB90 (sub_140B4FB90.c)
 *     sub_140B4FCB0 @ 0x140B4FCB0 (sub_140B4FCB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 */

__int64 __fastcall sub_14077CD90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v11; // r12
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD v20[11]; // [rsp+50h] [rbp-71h] BYREF

  memset(v20, 0, sizeof(v20));
  v11 = *(_QWORD *)(a1 + 504);
  v20[2] = a3;
  LODWORD(v20[3]) = a4;
  v20[5] = a6;
  v20[6] = a7;
  v20[4] = a5;
  LODWORD(v20[7]) = a8;
  if ( v11 )
  {
    v12 = sub_14042A5E0(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = sub_14077CF10(a1, a2, v20[2], LODWORD(v20[3]), v20[4], v20[5], v20[6], v20[7]);
  v14 = v13;
  if ( !v11 )
    return v14;
  LODWORD(v20[0]) = v13;
  v15 = sub_14042A5E0(a1, a2);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(v20[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
