/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x18058C4B0
 * Callers:
 *     ??0?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAA@PEBGHH@Z @ 0x1805DCFA8 (--0-$basic_ifstream@GU-$char_traits@G@std@@@std@@QEAA@PEBGHH@Z.c)
 *     _std::basic_ifstream_unsigned_short_std::char_traits_unsigned_short___::basic_ifstream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$4 @ 0x1805DD16B (_std--basic_ifstream_unsigned_short_std--char_traits_unsigned_short___--basic_ifstr_ea_1805DD16B.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
