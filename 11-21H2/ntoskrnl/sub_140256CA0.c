/*
 * XREFs of sub_140256CA0 @ 0x140256CA0
 * Callers:
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     sub_1405D0668 @ 0x1405D0668 (sub_1405D0668.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407FE600 @ 0x1407FE600 (sub_1407FE600.c)
 *     sub_1407FE61C @ 0x1407FE61C (sub_1407FE61C.c)
 *     sub_1407FFCB0 @ 0x1407FFCB0 (sub_1407FFCB0.c)
 *     sub_1407FFD04 @ 0x1407FFD04 (sub_1407FFD04.c)
 *     sub_1407FFD64 @ 0x1407FFD64 (sub_1407FFD64.c)
 *     sub_1407FFDDC @ 0x1407FFDDC (sub_1407FFDDC.c)
 *     sub_1407FFE58 @ 0x1407FFE58 (sub_1407FFE58.c)
 *     sub_1407FFEBC @ 0x1407FFEBC (sub_1407FFEBC.c)
 *     sub_140808C74 @ 0x140808C74 (sub_140808C74.c)
 *     sub_14098F180 @ 0x14098F180 (sub_14098F180.c)
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 *     sub_1409927E0 @ 0x1409927E0 (sub_1409927E0.c)
 *     sub_1409932A0 @ 0x1409932A0 (sub_1409932A0.c)
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 *     sub_140A51CA4 @ 0x140A51CA4 (sub_140A51CA4.c)
 *     sub_140A52F10 @ 0x140A52F10 (sub_140A52F10.c)
 *     sub_140A52F2C @ 0x140A52F2C (sub_140A52F2C.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 *     sub_140A6BCB0 @ 0x140A6BCB0 (sub_140A6BCB0.c)
 *     sub_140A6BCCC @ 0x140A6BCCC (sub_140A6BCCC.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

void __fastcall sub_140256CA0(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, EventDescriptor) )
      EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
