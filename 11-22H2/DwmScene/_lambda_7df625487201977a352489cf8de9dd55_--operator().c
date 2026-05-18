/*
 * XREFs of _lambda_7df625487201977a352489cf8de9dd55_::operator() @ 0x180064414
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7df625487201977a352489cf8de9dd55__void_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_::_Do_call @ 0x18006E6E0 (std--_Func_impl_no_alloc__lambda_7df625487201977a352489cf8de9dd55__void_std--basic__ea_18006E6E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 *     ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x18001FA7C (-substr@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_7df625487201977a352489cf8de9dd55_::operator()(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  char v5; // bl
  _WORD *v6; // rdx
  __int64 v7; // r8
  _WORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  char v12; // di
  _QWORD v14[2]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-31h]
  unsigned __int64 v16; // [rsp+40h] [rbp-29h]
  _QWORD v17[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-11h]
  unsigned __int64 v19; // [rsp+60h] [rbp-9h]
  _BYTE v20[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v21[32]; // [rsp+88h] [rbp+1Fh] BYREF

  std::wstring::wstring(v17, (__int64)L"Lighting.");
  std::wstring::wstring(v14, (__int64)L"/Internal/Lighting.");
  v4 = (_QWORD *)std::wstring::substr(a2, (__int64)v21, 0LL, v18);
  v5 = 1;
  v6 = v17;
  if ( v19 >= 8 )
    v6 = (_WORD *)v17[0];
  v7 = v4[2];
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  if ( v7 == v18 && !(unsigned int)std::_WChar_traits<wchar_t>::compare((__int64)v4, v6, v7) )
    goto LABEL_13;
  v11 = (_QWORD *)std::wstring::substr(a2, (__int64)v20, 0LL, v15);
  v5 = 3;
  v8 = v14;
  if ( v16 >= 8 )
    v8 = (_WORD *)v14[0];
  v9 = v11[2];
  if ( v11[3] >= 8uLL )
    v11 = (_QWORD *)*v11;
  if ( v9 != v15 || (unsigned int)std::_WChar_traits<wchar_t>::compare((__int64)v11, v8, v9) )
    v12 = 0;
  else
LABEL_13:
    v12 = 1;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::wstring::_Tidy_deallocate((__int64)v20);
  }
  if ( (v5 & 1) != 0 )
    std::wstring::_Tidy_deallocate((__int64)v21);
  if ( v12 )
  {
    LOBYTE(v8) = 1;
    std::atomic<bool>::operator=(*a1 + 1464LL, (__int64)v8, v9, v10);
  }
  std::wstring::_Tidy_deallocate((__int64)v14);
  return std::wstring::_Tidy_deallocate((__int64)v17);
}
