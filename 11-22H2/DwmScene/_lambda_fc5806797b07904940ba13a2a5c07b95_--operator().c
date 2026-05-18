/*
 * XREFs of _lambda_fc5806797b07904940ba13a2a5c07b95_::operator() @ 0x18006456C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fc5806797b07904940ba13a2a5c07b95__void_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_::_Do_call @ 0x18006E790 (std--_Func_impl_no_alloc__lambda_fc5806797b07904940ba13a2a5c07b95__void_std--basic__ea_18006E790.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 *     ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x18001FA7C (-substr@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fc5806797b07904940ba13a2a5c07b95_::operator()(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  _WORD *v5; // rdx
  __int64 v6; // r8
  bool v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rdx
  _QWORD v40[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-48h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]
  _BYTE v43[32]; // [rsp+40h] [rbp-38h] BYREF

  std::wstring::wstring(v40, (__int64)L"Model.");
  v4 = (_QWORD *)std::wstring::substr((__int64)a2, (__int64)v43, 0LL, v41);
  v5 = v40;
  if ( v42 >= 8 )
    v5 = (_WORD *)v40[0];
  v6 = v4[2];
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v7 = v6 == v41 && !(unsigned int)std::_WChar_traits<wchar_t>::compare((__int64)v4, v5, v6);
  std::wstring::_Tidy_deallocate((__int64)v43);
  if ( v7 )
  {
    LOBYTE(v8) = 1;
    std::atomic<bool>::operator=(*a1 + 1465LL, v8, v9, v10);
  }
  v11 = &Spectre::Engine::ConfigurationProperties::kModel_RelativeModelLoadScale;
  if ( (unsigned __int64)qword_1801D4960 >= 8 )
    v11 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_RelativeModelLoadScale;
  v12 = a2[2];
  v13 = (__int64)a2;
  v14 = a2[3];
  if ( v14 >= 8 )
    v13 = *a2;
  if ( v12 == qword_1801D4958 && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v13, v11, a2[2]) )
  {
    LOBYTE(v15) = 1;
    std::atomic<bool>::operator=(*a1 + 1466LL, v15, v16, v17);
    v12 = a2[2];
    v14 = a2[3];
  }
  v18 = &Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetX;
  if ( (unsigned __int64)qword_1801D49C0 >= 8 )
    v18 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetX;
  v19 = (__int64)a2;
  if ( v14 >= 8 )
    v19 = *a2;
  if ( v12 == qword_1801D49B8 && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v19, v18, v12) )
    goto LABEL_36;
  v23 = &Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetY;
  if ( (unsigned __int64)qword_1801D49E0 >= 8 )
    v23 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetY;
  v24 = (__int64)a2;
  if ( v14 >= 8 )
    v24 = *a2;
  if ( v12 == qword_1801D49D8 && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v24, v23, v12) )
    goto LABEL_36;
  v25 = &Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetZ;
  if ( (unsigned __int64)qword_1801D4A00 >= 8 )
    v25 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetZ;
  v26 = (__int64)a2;
  if ( v14 >= 8 )
    v26 = *a2;
  if ( v12 == qword_1801D49F8 && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v26, v25, v12) )
  {
LABEL_36:
    LOBYTE(v20) = 1;
    std::atomic<bool>::operator=(*a1 + 1467LL, v20, v21, v22);
  }
  v27 = &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAngle;
  if ( (unsigned __int64)qword_1801D4A80 >= 8 )
    v27 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAngle;
  v28 = a2[2];
  v29 = (__int64)a2;
  v30 = a2[3];
  if ( v30 >= 8 )
    v29 = *a2;
  if ( v28 == qword_1801D4A78 && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v29, v27, a2[2]) )
    goto LABEL_61;
  v34 = &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisX;
  if ( (unsigned __int64)qword_1801D4A20 >= 8 )
    v34 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisX;
  v35 = (__int64)a2;
  if ( v30 >= 8 )
    v35 = *a2;
  if ( v28 == qword_1801D4A18 && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v35, v34, v28) )
    goto LABEL_61;
  v36 = &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisY;
  if ( (unsigned __int64)qword_1801D4A40 >= 8 )
    v36 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisY;
  v37 = (__int64)a2;
  if ( v30 >= 8 )
    v37 = *a2;
  if ( v28 == qword_1801D4A38 && !(unsigned int)std::_WChar_traits<wchar_t>::compare(v37, v36, v28) )
    goto LABEL_61;
  v38 = &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisZ;
  if ( (unsigned __int64)qword_1801D4A60 >= 8 )
    v38 = (__int64 *)Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisZ;
  if ( v30 >= 8 )
    a2 = (__int64 *)*a2;
  if ( v28 == qword_1801D4A58 && !(unsigned int)std::_WChar_traits<wchar_t>::compare((__int64)a2, v38, v28) )
  {
LABEL_61:
    LOBYTE(v31) = 1;
    std::atomic<bool>::operator=(*a1 + 1468LL, v31, v32, v33);
  }
  return std::wstring::_Tidy_deallocate((__int64)v40);
}
