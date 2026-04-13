/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D6E58
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800C9C1C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18007B148 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x1800C2F50 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800CDD00 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_1800CDD00.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800D5228 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(void **this)
{
  unsigned __int64 v2; // rbx
  void **v3; // rax
  __int64 v4; // rsi
  char *v5; // rdi
  const char *v6; // rdx
  int v7; // eax
  void **v8; // rax
  char *v9; // rdx
  int v10; // [rsp+20h] [rbp-59h]
  __int64 *v11; // [rsp+40h] [rbp-39h] BYREF
  void *v12[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v13; // [rsp+58h] [rbp-21h]
  unsigned __int64 v14; // [rsp+60h] [rbp-19h]
  void *v15[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v16; // [rsp+78h] [rbp-1h]
  unsigned __int64 v17; // [rsp+80h] [rbp+7h]
  char *v18[3]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v19; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v14 = 7LL;
  v2 = 0LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v12, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  if ( *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
          (__int64)(this + 4),
          &v11,
          v12) == this[4] )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      173LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL,
      v10);
  if ( v14 >= 8 )
    operator delete(v12[0]);
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v12, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v3 = (void **)std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v12);
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  v4 = -1LL;
  std::wstring::assign((void **)v18, v3, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v14 >= 8 )
    operator delete(v12[0]);
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  v5 = (char *)&unk_18011A1A0;
  while ( !std::operator==<wchar_t>(v18, *((_WORD **)v5 + 1)) )
  {
    v5 += 24;
    if ( v5 == (char *)&off_18011A230 )
    {
      v6 = (const char *)v18;
      if ( v19 >= 8 )
        v6 = v18[0];
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        195LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        this[2] == 0LL,
        (unsigned __int64)"%ls",
        v6);
      goto LABEL_24;
    }
  }
  v7 = *(_DWORD *)v5;
  *((_DWORD *)this + 12) = *(_DWORD *)v5;
  if ( v7 == 6 )
  {
    v17 = 7LL;
    v16 = 0LL;
    LOWORD(v15[0]) = 0;
    std::wstring::assign((unsigned __int64 *)v15, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    if ( *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
            (__int64)(this + 4),
            &v11,
            v15) == this[4] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        184LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        v10);
    if ( v17 >= 8 )
      operator delete(v15[0]);
    v17 = 7LL;
    v16 = 0LL;
    LOWORD(v15[0]) = 0;
    std::wstring::assign((unsigned __int64 *)v15, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    v8 = (void **)std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v15);
    if ( this != v8 )
      std::wstring::assign(this, v8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v17 >= 8 )
      operator delete(v15[0]);
  }
  else
  {
    v9 = (char *)*((_QWORD *)v5 + 2);
    if ( *(_WORD *)v9 )
    {
      do
        ++v4;
      while ( *(_WORD *)&v9[2 * v4] );
      v2 = v4;
    }
    std::wstring::assign((unsigned __int64 *)this, v9, v2);
  }
LABEL_24:
  if ( v19 >= 8 )
    operator delete(v18[0]);
}
