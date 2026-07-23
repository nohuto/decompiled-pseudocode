/*
 * XREFs of sub_14077198C @ 0x14077198C
 * Callers:
 *     sub_1406E9E7C @ 0x1406E9E7C (sub_1406E9E7C.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_14076B24C @ 0x14076B24C (sub_14076B24C.c)
 *     sub_14076B308 @ 0x14076B308 (sub_14076B308.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076DAF0 @ 0x14076DAF0 (sub_14076DAF0.c)
 *     sub_14076DC84 @ 0x14076DC84 (sub_14076DC84.c)
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_1407F3CF0 @ 0x1407F3CF0 (sub_1407F3CF0.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_1408260F8 @ 0x1408260F8 (sub_1408260F8.c)
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_140845D74 @ 0x140845D74 (sub_140845D74.c)
 *     sub_14085531C @ 0x14085531C (sub_14085531C.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     sub_140947274 @ 0x140947274 (sub_140947274.c)
 *     sub_140957044 @ 0x140957044 (sub_140957044.c)
 *     sub_14095A5E8 @ 0x14095A5E8 (sub_14095A5E8.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140A297B0 @ 0x140A297B0 (sub_140A297B0.c)
 *     sub_140A2A0E4 @ 0x140A2A0E4 (sub_140A2A0E4.c)
 *     sub_140A2AAB0 @ 0x140A2AAB0 (sub_140A2AAB0.c)
 *     sub_140A2B388 @ 0x140A2B388 (sub_140A2B388.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B4FB90 @ 0x140B4FB90 (sub_140B4FB90.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140771B04 @ 0x140771B04 (sub_140771B04.c)
 */

__int64 __fastcall sub_14077198C(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(SecurityDescriptorLength, 0, sizeof(SecurityDescriptorLength));
  v14 = *(_QWORD *)(a1 + 488);
  SecurityDescriptorLength[3] = a5;
  SecurityDescriptorLength[4] = a6;
  LODWORD(SecurityDescriptorLength[5]) = a7;
  SecurityDescriptorLength[6] = a8;
  SecurityDescriptorLength[7] = __PAIR64__(a10, a9);
  SecurityDescriptorLength[2] = a4;
  if ( v14 )
  {
    v15 = sub_14042A5E0(a1, a2);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = sub_140771B04(
          a1,
          a2,
          a3,
          SecurityDescriptorLength[2],
          SecurityDescriptorLength[3],
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SecurityDescriptorLength[6],
          SecurityDescriptorLength[7],
          SHIDWORD(SecurityDescriptorLength[7]));
  v17 = v16;
  if ( !v14 )
    return v17;
  LODWORD(SecurityDescriptorLength[0]) = v16;
  v18 = sub_14042A5E0(a1, a2);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(SecurityDescriptorLength[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
