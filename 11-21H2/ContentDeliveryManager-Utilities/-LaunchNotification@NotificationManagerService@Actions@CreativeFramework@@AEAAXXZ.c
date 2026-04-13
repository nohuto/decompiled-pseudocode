/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CA7CC
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CA7C0 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x1800C2F50 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800CDD00 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_1800CDD00.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800D6A60 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(
        const WCHAR **this,
        __int64 a2,
        unsigned int a3)
{
  bool v4; // si
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, PVOID, __int64); // r14
  const WCHAR *v9; // rax
  unsigned int v10; // r8d
  const WCHAR *v11; // r12
  const WCHAR *v12; // rax
  PVOID Reserved1; // r13
  __int64 ToastContentXML; // rax
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r9
  int v18; // eax
  int v19; // [rsp+28h] [rbp-89h]
  const WCHAR *v20; // [rsp+48h] [rbp-69h] BYREF
  __int64 v21; // [rsp+50h] [rbp-61h] BYREF
  __int64 v22; // [rsp+58h] [rbp-59h] BYREF
  void *v23[3]; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-39h]
  HSTRING_HEADER v25; // [rsp+80h] [rbp-31h] BYREF
  __int64 v26; // [rsp+98h] [rbp-19h]
  HSTRING_HEADER v27; // [rsp+A0h] [rbp-11h] BYREF
  HSTRING_HEADER v28; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v22, a2, a3);
  v4 = 0;
  v21 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 72LL))(v22, &v21);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      113LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v5,
      v19);
  v24 = 7LL;
  v23[2] = 0LL;
  LOWORD(v23[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v23, (char *)L"isGhost", aIsghost[0] != 0 ? 7 : 0);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    this + 15,
    &v20,
    v23);
  if ( v24 >= 8 )
    operator delete(v23[0]);
  if ( v20 != this[15] )
    v4 = std::operator==<wchar_t>((_QWORD *)v20 + 8, L"true");
  v7 = v21;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64))(*(_QWORD *)v21 + 56LL);
  v9 = (const WCHAR *)(this + 10);
  if ( (unsigned __int64)this[13] >= 8 )
    v9 = *(const WCHAR **)v9;
  v20 = v9;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, &v20, v6);
  v11 = this[14];
  v12 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v12 = *(const WCHAR **)v12;
  v20 = v12;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, &v20, v10)[1].Reserved.Reserved1;
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[17], v23);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v20 = (const WCHAR *)ToastContentXML;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v20, v15);
  LOBYTE(v17) = v4;
  v18 = v8(v7, v16[1].Reserved.Reserved1, Reserved1, v17);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      117LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v18,
      (int)v11);
  v26 = 0LL;
  if ( v24 >= 8 )
    operator delete(v23[0]);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
}
