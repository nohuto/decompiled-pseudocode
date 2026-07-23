/*
 * XREFs of sub_1407F274C @ 0x1407F274C
 * Callers:
 *     sub_1407F2558 @ 0x1407F2558 (sub_1407F2558.c)
 *     sub_1407FFBAC @ 0x1407FFBAC (sub_1407FFBAC.c)
 *     sub_140808DA0 @ 0x140808DA0 (sub_140808DA0.c)
 *     sub_140808E28 @ 0x140808E28 (sub_140808E28.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_140996F70 @ 0x140996F70 (sub_140996F70.c)
 *     sub_1409A0730 @ 0x1409A0730 (sub_1409A0730.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

void __fastcall sub_1407F274C(PCEVENT_DESCRIPTOR EventDescriptor, ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v6; // rdi

  if ( byte_140C5AE14 )
  {
    v6 = RegHandle;
    if ( EtwEventEnabled(RegHandle, EventDescriptor) )
      EtwWrite(v6, EventDescriptor, 0LL, UserDataCount, UserData);
  }
}
