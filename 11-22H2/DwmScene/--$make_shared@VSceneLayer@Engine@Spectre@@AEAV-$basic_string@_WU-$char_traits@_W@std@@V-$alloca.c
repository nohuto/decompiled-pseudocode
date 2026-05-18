/*
 * XREFs of ??$make_shared@VSceneLayer@Engine@Spectre@@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@std@@YA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@0@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x18003F944
 * Callers:
 *     ?CreateLayer@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800408BC (-CreateLayer@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basi.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0SceneLayer@Engine@Spectre@@QEAA@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x18003FCA4 (--0SceneLayer@Engine@Spectre@@QEAA@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::SceneLayer,std::wstring &,std::shared_ptr<Spectre::Engine::SceneNode> &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD v10[5]; // [rsp+28h] [rbp-40h] BYREF

  v6 = operator new(0x78uLL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::SceneLayer>::`vftable';
    v8 = std::wstring::wstring(v10, a2);
    Spectre::Engine::SceneLayer::SceneLayer(v7 + 4, v8, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
