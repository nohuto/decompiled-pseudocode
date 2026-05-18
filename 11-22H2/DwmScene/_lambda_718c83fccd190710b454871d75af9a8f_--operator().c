/*
 * XREFs of _lambda_718c83fccd190710b454871d75af9a8f_::operator() @ 0x180064288
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_718c83fccd190710b454871d75af9a8f__void_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_::_Do_call @ 0x18006E640 (std--_Func_impl_no_alloc__lambda_718c83fccd190710b454871d75af9a8f__void_std--basic__ea_18006E640.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 *     ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x18001FA7C (-substr@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??$emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180063210 (--$emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_Hash@V-$_Uset.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_718c83fccd190710b454871d75af9a8f_::operator()(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  char v5; // bl
  _WORD *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  _WORD *v9; // rdx
  __int64 v10; // r8
  char v11; // di
  __int64 v12; // rdi
  std::_Mutex_base *v13; // rbx
  _QWORD v15[2]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-31h]
  unsigned __int64 v17; // [rsp+40h] [rbp-29h]
  _QWORD v18[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-11h]
  unsigned __int64 v20; // [rsp+60h] [rbp-9h]
  _BYTE v21[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp+1Fh] BYREF

  std::wstring::wstring(v18, (__int64)L"Camera.");
  std::wstring::wstring(v15, (__int64)L"/Internal/Camera.");
  v4 = (_QWORD *)std::wstring::substr((__int64)a2, (__int64)v22, 0LL, v19);
  v5 = 1;
  v6 = v18;
  if ( v20 >= 8 )
    v6 = (_WORD *)v18[0];
  v7 = v4[2];
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  if ( v7 == v19 && !(unsigned int)std::_WChar_traits<wchar_t>::compare((__int64)v4, v6, v7) )
    goto LABEL_13;
  v8 = (_QWORD *)std::wstring::substr((__int64)a2, (__int64)v21, 0LL, v16);
  v5 = 3;
  v9 = v15;
  if ( v17 >= 8 )
    v9 = (_WORD *)v15[0];
  v10 = v8[2];
  if ( v8[3] >= 8uLL )
    v8 = (_QWORD *)*v8;
  if ( v10 != v16 || (unsigned int)std::_WChar_traits<wchar_t>::compare((__int64)v8, v9, v10) )
    v11 = 0;
  else
LABEL_13:
    v11 = 1;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::wstring::_Tidy_deallocate((__int64)v21);
  }
  if ( (v5 & 1) != 0 )
    std::wstring::_Tidy_deallocate((__int64)v22);
  if ( v11 )
  {
    v12 = *a1;
    v13 = (std::_Mutex_base *)(*a1 + 1552LL);
    std::_Mutex_base::lock(v13);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::emplace<std::wstring const &>(
      (_QWORD *)(v12 + 1488),
      (__int64)v21,
      a2);
    _Mtx_unlock(v13);
  }
  std::wstring::_Tidy_deallocate((__int64)v15);
  return std::wstring::_Tidy_deallocate((__int64)v18);
}
