/*
 * XREFs of ?CreateCurrentTriggerState@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x180090C24
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x18009005C (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180051870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?StringFormat@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WZZ @ 0x1800D076C (-StringFormat@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateCurrentTriggerState(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  char v7; // bl
  char v8; // bl
  _QWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v12[4]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_QWORD *)(std::wstring::wstring((__int64)v12) + 16) )
  {
    v6 = CreativeFramework::CommonHelper::StringUtils::StringFormat(v10, L"%s%s%s", a2, L"!", a3);
    v7 = 2;
  }
  else
  {
    v6 = std::wstring::wstring((__int64)v11);
    v7 = 1;
  }
  std::wstring::wstring(a1, v6);
  v8 = v7 | 4;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    std::wstring::_Tidy(v10, 1, 0LL);
  }
  if ( (v8 & 1) != 0 )
    std::wstring::_Tidy(v11, 1, 0LL);
  std::wstring::_Tidy(v12, 1, 0LL);
  return a1;
}
