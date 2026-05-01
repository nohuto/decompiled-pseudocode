/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V12@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x18069D158
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18069D78C (--$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_a.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x18069D390 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_18069D390.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r10
  _QWORD *v9; // rbx
  __int64 v10; // rsi

  v7 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v7;
  v9 = *(_QWORD **)(a2 + 16);
  v10 = v9[2];
  if ( v10 )
  {
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
  }
  else
  {
    v9 = 0LL;
  }
  if ( tson::output_archive::write_type(this, v9 == 0LL, 24) )
    tson::output_archive::write_string_bytes(this, v10, v9, 2 * v10);
  return tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
           this,
           a6,
           a7);
}
