/*
 * XREFs of ??4?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180183328
 * Callers:
 *     ??0TouchEdgeGripperHost@@QEAA@AEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@AEBV?$function@$$A6AXXZ@2@@Z @ 0x180183250 (--0TouchEdgeGripperHost@@QEAA@AEBV-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18017DE3C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??0?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAA@AEBV01@@Z @ 0x1801833D0 (--0-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall std::function<void (unsigned int,winrt::Windows::Foundation::Point const &)>::operator=(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // rax
  _BYTE v8[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+58h] [rbp-60h]
  _BYTE v10[64]; // [rsp+60h] [rbp-58h] BYREF

  v3 = std::function<void (unsigned int,winrt::Windows::Foundation::Point const &)>::function<void (unsigned int,winrt::Windows::Foundation::Point const &)>(v10);
  v4 = *(_QWORD *)(v3 + 56);
  if ( v4 == v3 || (v7 = *(_QWORD *)(a1 + 56), v7 == a1) )
  {
    v9 = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v8, v3);
    std::_Func_class<void,>::_Reset_move(v3, a1);
    std::_Func_class<void,>::_Reset_move(a1, (__int64)v8);
    std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
      (__int64)v8,
      v5);
  }
  else
  {
    *(_QWORD *)(v3 + 56) = v7;
    *(_QWORD *)(a1 + 56) = v4;
  }
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v10,
    v2);
  return a1;
}
