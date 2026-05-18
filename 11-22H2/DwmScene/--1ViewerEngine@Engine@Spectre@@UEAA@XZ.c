/*
 * XREFs of ??1ViewerEngine@Engine@Spectre@@UEAA@XZ @ 0x1800640C8
 * Callers:
 *     ??_GViewerEngine@Engine@Spectre@@UEAAPEAXI@Z @ 0x180064A60 (--_GViewerEngine@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180063FDC (--1-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$_.c)
 */

void __fastcall Spectre::Engine::ViewerEngine::~ViewerEngine(Spectre::Engine::ViewerEngine *this)
{
  *(_QWORD *)this = &Spectre::Engine::ViewerEngine::`vftable';
  _Mtx_destroy_in_situ((Spectre::Engine::ViewerEngine *)((char *)this + 1552));
  std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::~_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>((__int64)this + 1488);
  Spectre::Engine::Engine::~Engine(this);
}
