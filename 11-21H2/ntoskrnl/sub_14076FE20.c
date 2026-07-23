/*
 * XREFs of sub_14076FE20 @ 0x14076FE20
 * Callers:
 *     sub_1406C7604 @ 0x1406C7604 (sub_1406C7604.c)
 *     sub_1406E5574 @ 0x1406E5574 (sub_1406E5574.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_14076DFF0 @ 0x14076DFF0 (sub_14076DFF0.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076FC68 @ 0x14076FC68 (sub_14076FC68.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_1409496C0 @ 0x1409496C0 (sub_1409496C0.c)
 *     sub_140957F9C @ 0x140957F9C (sub_140957F9C.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B4FB90 @ 0x140B4FB90 (sub_140B4FB90.c)
 *     sub_140B4FCB0 @ 0x140B4FCB0 (sub_140B4FCB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 */

__int64 __fastcall sub_14076FE20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v20[11]; // [rsp+40h] [rbp-69h] BYREF

  memset(v20, 0, sizeof(v20));
  v12 = *(_QWORD *)(a1 + 504);
  v20[5] = __PAIR64__(a8, a7);
  v20[2] = a3;
  v20[3] = __PAIR64__(a5, a4);
  v20[4] = a6;
  if ( v12 )
  {
    v13 = sub_14042A5E0(a1, a2);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = sub_14076FF88(a1, a2, v20[2], LODWORD(v20[3]), HIDWORD(v20[3]), v20[4], v20[5], HIDWORD(v20[5]));
  v14 = v16;
  if ( v12 )
  {
    LODWORD(v20[0]) = v16;
    v17 = sub_14042A5E0(a1, a2);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 == -1073741536 )
        return LODWORD(v20[0]);
      v19 = v14;
      if ( v18 )
        return (unsigned int)-1073741595;
      return v19;
    }
  }
  return v14;
}
