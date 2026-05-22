/*
 * XREFs of ??$make_shared@VSystemCursorShape2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursorShape2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEA_K@Z @ 0x18011291C
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1801139D0 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@?$_Ref_count_obj2@VSystemCursorShape2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEA_K@Z @ 0x180111E70 (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEA_K@-$_Ref_count_obj2@VSystemCursorShape2@@@st.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<SystemCursorShape2,std::shared_ptr<SystemCursorService2>,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+8h]

  v8 = operator new(0x68uLL);
  v6 = std::_Ref_count_obj2<SystemCursorShape2>::_Ref_count_obj2<SystemCursorShape2>((__int64)v8, a2, a3);
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
