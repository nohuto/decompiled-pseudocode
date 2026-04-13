/*
 * XREFs of ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800D672C
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D5364 (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18007B148 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800AF020 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Buynode0@?$_List_alloc@$0A@U?$_List_base_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@2@PEAU32@0@Z @ 0x1800C20D4 (-_Buynode0@-$_List_alloc@$0A@U-$_List_base_types@V-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 *     ?_Init@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800C2298 (-_Init@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x1800D4CC8 (--$_Insert@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U_Nil@2@@-$_Hash@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::NotificationManager::ToastHelpers::GetMacros(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  const char *v6; // rcx
  const char *v7; // rsi
  __int64 v8; // rdx
  const wchar_t *v9; // rcx
  const char *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  const char *v13; // rdx
  unsigned __int64 v14; // rdi
  const char *v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r15
  const char *v18; // rax
  char v20[16]; // [rsp+60h] [rbp-9h] BYREF
  void *v21[3]; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = std::_List_alloc<0,std::_List_base_types<std::wstring>>::_Buynode0(a1, 0LL, 0LL);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 56) = 1065353216;
  std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Init(
    (__int64 *)a2,
    8LL);
  if ( asc_18018CD64[0] )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 24);
      if ( v5 < 8 )
        v6 = (const char *)a1;
      else
        v6 = *(const char **)a1;
      v7 = &v6[2 * v4 - 2];
      while ( 2 )
      {
        v8 = 1LL;
        v9 = L"}";
        while ( *v9 != *(_WORD *)v7 )
        {
          ++v9;
          if ( !--v8 )
            goto LABEL_12;
        }
        if ( v9 )
        {
          if ( v5 < 8 )
            v11 = a1;
          else
            v11 = *(_QWORD *)a1;
          v12 = (__int64)&v7[-v11] >> 1;
          goto LABEL_22;
        }
LABEL_12:
        if ( v5 < 8 )
          v10 = (const char *)a1;
        else
          v10 = *(const char **)a1;
        if ( v7 != v10 )
        {
          v7 -= 2;
          continue;
        }
        break;
      }
    }
  }
  v12 = -1LL;
  v5 = *(_QWORD *)(a1 + 24);
LABEL_22:
  if ( v5 < 8 )
    v13 = (const char *)a1;
  else
    v13 = *(const char **)a1;
  wil::details::in1diag3::Throw_HrIfMsg(
    retaddr,
    241LL,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
    (const char *)0x80070057LL,
    v12 == -1LL,
    (unsigned __int64)"%ls",
    v13);
  v14 = 0LL;
  do
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        246LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        *(_WORD *)(a1 + 2 * v14) == asc_18018CD64[0],
        (unsigned __int64)"%ls",
        (const char *)a1);
    else
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        246LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        *(_WORD *)(*(_QWORD *)a1 + 2 * v14) == asc_18018CD64[0],
        (unsigned __int64)"%ls",
        *(const char **)a1);
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v15 = (const char *)a1;
    else
      v15 = *(const char **)a1;
    if ( *(_WORD *)&v15[2 * v14] == asc_18018CD68[0] )
    {
      v16 = v14 + 1;
      v17 = std::wstring::find((char *)a1, L"}", v16, asc_18018CD64[0] != 0);
      if ( *(_QWORD *)(a1 + 24) < 8uLL )
        wil::details::in1diag3::Throw_HrIfMsg(
          retaddr,
          251LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
          (const char *)0x80070057LL,
          v17 == -1LL,
          (unsigned __int64)"%ls",
          (const char *)a1);
      else
        wil::details::in1diag3::Throw_HrIfMsg(
          retaddr,
          251LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
          (const char *)0x80070057LL,
          v17 == -1LL,
          (unsigned __int64)"%ls",
          *(const char **)a1);
      v22 = 7LL;
      v21[2] = 0LL;
      for ( LOWORD(v21[0]) = 0; v16 < v17; ++v16 )
      {
        if ( *(_QWORD *)(a1 + 24) < 8uLL )
          wil::details::in1diag3::Throw_HrIfMsg(
            retaddr,
            257LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
            (const char *)0x80070057LL,
            *(_WORD *)(a1 + 2 * v16) == asc_18018CD68[0],
            (unsigned __int64)"%ls",
            (const char *)a1);
        else
          wil::details::in1diag3::Throw_HrIfMsg(
            retaddr,
            257LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
            (const char *)0x80070057LL,
            *(_WORD *)(*(_QWORD *)a1 + 2 * v16) == asc_18018CD68[0],
            (unsigned __int64)"%ls",
            *(const char **)a1);
        if ( *(_QWORD *)(a1 + 24) < 8uLL )
          v18 = (const char *)a1;
        else
          v18 = *(const char **)a1;
        std::wstring::append((char *)v21, (char *)&v18[2 * v16], 1uLL);
      }
      std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_Nil>(
        (_QWORD *)a2,
        (__int64)v20,
        v21);
      v14 = v16 + 1;
      if ( v22 >= 8 )
        operator delete(v21[0]);
    }
    ++v14;
  }
  while ( v14 <= v12 );
  return a2;
}
