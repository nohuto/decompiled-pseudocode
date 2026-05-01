/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z @ 0x18051C908
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836_____lambda_a09f288fb701b6a3bb133eb64dd6b836___ @ 0x180203CD4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___--CTaskW.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18050CE0C (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18054C844 (--4-$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,HWND__ *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
        a2,
        v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
