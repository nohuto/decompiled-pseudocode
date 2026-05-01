/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x1803E2EFC
 * Callers:
 *     ??$?5GU?$char_traits@G@std@@G@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x1803E19EC (--$-5GU-$char_traits@G@std@@G@std@@YAAEAV-$basic_istream@GU-$char_traits@G@std@@@0@AEAV10@AEBU-$.c)
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short__unsigned_short__::_1_::dtor$1 @ 0x1803E1B6D (_std--operator___unsigned_short_std--char_traits_unsigned_short__unsigned_short__--_1_--dtor$1.c)
 *     ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x18064B998 (-open@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z.c)
 *     _std::basic_filebuf_char_std::char_traits_char___::open_::_1_::dtor$0 @ 0x18064BA1F (_std--basic_filebuf_char_std--char_traits_char___--open_--_1_--dtor$0.c)
 *     ??0?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAA@PEBGHH@Z @ 0x1806E1274 (--0-$basic_ifstream@GU-$char_traits@G@std@@@std@@QEAA@PEBGHH@Z.c)
 *     _std::basic_ifstream_unsigned_short_std::char_traits_unsigned_short___::basic_ifstream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$4 @ 0x1806E1437 (_std--basic_ifstream_unsigned_short_std--char_traits_unsigned_short___--basic_ifstr_ea_1806E1437.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
