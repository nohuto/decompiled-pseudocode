/*
 * XREFs of ??$make_shared@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YA?AV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@0@$$QEAU_Creator@_Dir_enum_impl@filesystem@0@AEBW4directory_options@40@@Z @ 0x180641E10
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1806416A0 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0_Dir_enum_impl@filesystem@std@@QEAA@$$QEAU_Creator@012@W4directory_options@12@@Z @ 0x1806425C4 (--0_Dir_enum_impl@filesystem@std@@QEAA@$$QEAU_Creator@012@W4directory_options@12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<std::filesystem::_Dir_enum_impl,std::filesystem::_Dir_enum_impl::_Creator,enum std::filesystem::directory_options const &>(
        _QWORD *a1)
{
  _DWORD *v3; // [rsp+50h] [rbp+18h]

  v3 = operator new(0x58uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::`vftable';
  std::filesystem::_Dir_enum_impl::_Dir_enum_impl((std::filesystem::_Dir_enum_impl *)(v3 + 4));
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
