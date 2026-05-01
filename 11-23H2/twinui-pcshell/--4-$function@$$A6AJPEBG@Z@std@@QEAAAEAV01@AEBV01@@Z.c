/*
 * XREFs of ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18050CE0C
 * Callers:
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator() @ 0x180208118 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--operator().c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802DA774 (--0-$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reset_move@?$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z @ 0x18051C908 (-_Reset_move@-$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::function<long (unsigned short const *)>::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  _BYTE v11[64]; // [rsp+60h] [rbp-58h] BYREF

  v4 = std::function<long (unsigned short const *)>::function<long (unsigned short const *)>((__int64)v11, a2);
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 == v4 || (v6 = *(_QWORD *)(a1 + 56), v6 == a1) )
  {
    v10 = 0LL;
    std::_Func_class<void,HWND__ *>::_Reset_move(v9, v4);
    std::_Func_class<void,HWND__ *>::_Reset_move(v4, a1);
    std::_Func_class<void,HWND__ *>::_Reset_move(a1, v9);
    std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
      (__int64)v9,
      v7);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = v6;
    *(_QWORD *)(a1 + 56) = v5;
  }
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v11,
    v3);
  return a1;
}
