/*
 * XREFs of ?DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z @ 0x1800EC9B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x180066F70 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800AF130 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::CommonHelper::SettingsContainer::DeleteContainer(
        CreativeFramework::CommonHelper::SettingsContainer *this,
        HSTRING a2)
{
  char *StringRawBuffer; // rax
  unsigned __int64 v5; // r8
  void ***v6; // rax
  bool v7; // bl
  void **v8[2]; // [rsp+20h] [rbp-40h] BYREF
  void **v9; // [rsp+30h] [rbp-30h] BYREF
  void *v10[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-10h]

  (*(void (__fastcall **)(CreativeFramework::CommonHelper::SettingsContainer *, void ***))(*(_QWORD *)this + 16LL))(
    this,
    v8);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
  v11 = 7LL;
  v10[2] = 0LL;
  LOWORD(v10[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&StringRawBuffer[2 * v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v10, StringRawBuffer, v5);
  v6 = std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::find(
         v8,
         &v9,
         v10);
  v7 = *v6 == v8[0];
  if ( v11 >= 8 )
    operator delete(v10[0]);
  if ( !v7 )
  {
    (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 1) + 88LL))(*((_QWORD *)this + 1), a2);
    *((_BYTE *)this + 32) = 1;
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Erase(
    (__int64)v8,
    *((__int64 **)v8[0] + 1));
  *((void ***)v8[0] + 1) = v8[0];
  *v8[0] = v8[0];
  *((void ***)v8[0] + 2) = v8[0];
  v8[1] = 0LL;
  operator delete(v8[0]);
}
