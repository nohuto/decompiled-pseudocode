/*
 * XREFs of ??$_Sort_heap_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0P6A_NAEBV10@1@Z@Z @ 0x18007194C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0_JP6A_NAEBV10@2@Z@Z @ 0x180071A1C (--$_Sort_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@_J1$$QEAV10@P6A_NAEBV10@3@Z@Z @ 0x18007181C (--$_Pop_heap_hole_by_index@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std.c)
 */

// Hidden C++ exception states: #wind=1
signed __int64 __fastcall std::_Sort_heap_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  signed __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = a2 - 16;
    v7 = -8LL - (_QWORD)a1;
    v8 = 16LL - (_QWORD)a1;
    do
    {
      v9 = *(_QWORD *)v6;
      v10 = *(std::_Ref_count_base **)(v6 + 8);
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)v6, a1);
      std::_Pop_heap_hole_by_index<std::shared_ptr<Spectre::Engine::Light> *,std::shared_ptr<Spectre::Engine::Light>,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        (__int64)a1,
        0LL,
        (v6 + v7 + 8) >> 4,
        &v9,
        a3);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      v6 -= 16LL;
      result = (v8 + v6) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
