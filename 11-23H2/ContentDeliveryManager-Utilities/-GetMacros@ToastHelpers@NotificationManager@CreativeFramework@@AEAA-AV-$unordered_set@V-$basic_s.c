/*
 * XREFs of ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800C0688
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800BF958 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?find@?$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x18006457C (-find@-$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006492C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180071000 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18009FED0 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??0?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x1800AC4CC (--0-$unordered_set@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U-$hash@V-$b.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800B044C (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x1800BF3A4 (--$_Insert@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U_Nil@2@@-$_Hash@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall CreativeFramework::NotificationManager::ToastHelpers::GetMacros(__int64 *a1, __int64 **a2)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 *v6; // rcx
  char *i; // rsi
  char *v8; // rax
  char *v9; // rax
  unsigned __int64 v10; // rsi
  const char *v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 *v13; // rcx
  unsigned __int64 v14; // rdi
  size_t v15; // rax
  unsigned __int64 v16; // r15
  __int64 *v17; // rax
  _BYTE v19[16]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  std::unordered_set<std::wstring>::unordered_set<std::wstring>((__int64)a2);
  v4 = std::char_traits<wchar_t>::length(L"}");
  if ( v4 && (v5 = a1[2]) != 0 )
  {
    if ( (unsigned __int64)a1[3] < 8 )
      v6 = a1;
    else
      v6 = (__int64 *)*a1;
    for ( i = (char *)v6 + 2 * v5 - 2; !std::char_traits<unsigned short>::find(L"}", v4, i); i -= 2 )
    {
      if ( (unsigned __int64)a1[3] < 8 )
        v8 = (char *)a1;
      else
        v8 = (char *)*a1;
      if ( i == v8 )
        goto LABEL_17;
    }
    if ( (unsigned __int64)a1[3] < 8 )
      v9 = (char *)a1;
    else
      v9 = (char *)*a1;
    v10 = (i - v9) >> 1;
  }
  else
  {
LABEL_17:
    v10 = -1LL;
  }
  if ( (unsigned __int64)a1[3] < 8 )
    v11 = (const char *)a1;
  else
    v11 = (const char *)*a1;
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    (void *)0xF1,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
    (const char *)0x80070057LL,
    v10 == -1LL,
    (__int64)"%ls",
    v11);
  v12 = 0LL;
  do
  {
    if ( (unsigned __int64)a1[3] < 8 )
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xF6,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        *((_WORD *)a1 + v12) == asc_180175D88[0],
        (__int64)"%ls",
        (const char *)a1);
    else
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xF6,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        *(_WORD *)(*a1 + 2 * v12) == asc_180175D88[0],
        (__int64)"%ls",
        (const char *)*a1);
    if ( (unsigned __int64)a1[3] < 8 )
      v13 = a1;
    else
      v13 = (__int64 *)*a1;
    if ( *((_WORD *)v13 + v12) == asc_180175D84[0] )
    {
      v14 = v12 + 1;
      v15 = std::char_traits<wchar_t>::length(L"}");
      v16 = std::wstring::find(a1, L"}", v14, v15);
      if ( (unsigned __int64)a1[3] < 8 )
        wil::details::in1diag3::Throw_HrIfMsg(
          retaddr,
          (void *)0xFB,
          (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
          (const char *)0x80070057LL,
          v16 == -1LL,
          (__int64)"%ls",
          (const char *)a1);
      else
        wil::details::in1diag3::Throw_HrIfMsg(
          retaddr,
          (void *)0xFB,
          (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
          (const char *)0x80070057LL,
          v16 == -1LL,
          (__int64)"%ls",
          (const char *)*a1);
      v20[3] = 7LL;
      v20[2] = 0LL;
      for ( LOWORD(v20[0]) = 0; v14 < v16; ++v14 )
      {
        if ( (unsigned __int64)a1[3] < 8 )
          wil::details::in1diag3::Throw_HrIfMsg(
            retaddr,
            (void *)0x101,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
            (const char *)0x80070057LL,
            *((_WORD *)a1 + v14) == asc_180175D84[0],
            (__int64)"%ls",
            (const char *)a1);
        else
          wil::details::in1diag3::Throw_HrIfMsg(
            retaddr,
            (void *)0x101,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
            (const char *)0x80070057LL,
            *(_WORD *)(*a1 + 2 * v14) == asc_180175D84[0],
            (__int64)"%ls",
            (const char *)*a1);
        if ( (unsigned __int64)a1[3] < 8 )
          v17 = a1;
        else
          v17 = (__int64 *)*a1;
        std::wstring::append(v20, (_BYTE *)v17 + 2 * v14, 1uLL);
      }
      std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_Nil>(
        a2,
        (__int64)v19,
        (unsigned __int8 *)v20);
      v12 = v14 + 1;
      std::wstring::_Tidy(v20, 1, 0LL);
    }
    ++v12;
  }
  while ( v12 <= v10 );
  return a2;
}
