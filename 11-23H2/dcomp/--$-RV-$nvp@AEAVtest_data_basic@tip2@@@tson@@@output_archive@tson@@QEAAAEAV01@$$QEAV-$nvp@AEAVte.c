/*
 * XREFs of ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x18009C8B0
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18009F320 (-serialize@-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextur.c)
 * Callees:
 *     ??$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18009D550 (--$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archi.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x18009E47C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x18009F7E4 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tip2::test_data_basic &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rdi

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 12LL) & 0x40000) != 0 )
    tip2::details::stored_flag_requirements::serialize<tson::output_archive>(v4 + 8, this);
  tson::output_archive::finishNode(this);
  return this;
}
