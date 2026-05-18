/*
 * XREFs of ?UpdateScenes@ViewerEngine@Engine@Spectre@@MEAAXXZ @ 0x18006DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18006EC88 (-clear@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 */

void __fastcall Spectre::Engine::ViewerEngine::UpdateScenes(Spectre::Engine::ViewerEngine *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9

  Spectre::Engine::Engine::UpdateScenes(this);
  std::atomic<bool>::operator=((__int64)this + 1464, 0LL, v2, v3);
  std::atomic<bool>::operator=((__int64)this + 1465, 0LL, v4, v5);
  std::atomic<bool>::operator=((__int64)this + 1467, 0LL, v6, v7);
  std::atomic<bool>::operator=((__int64)this + 1468, 0LL, v8, v9);
  std::atomic<bool>::operator=((__int64)this + 1466, 0LL, v10, v11);
  std::_Mutex_base::lock((Spectre::Engine::ViewerEngine *)((char *)this + 1552));
  std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::clear((char *)this + 1488);
  _Mtx_unlock((Spectre::Engine::ViewerEngine *)((char *)this + 1552));
}
