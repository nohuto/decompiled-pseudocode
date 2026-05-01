/*
 * XREFs of ??0_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@AEBV0@@Z @ 0x18042D018
 * Callers:
 *     ??$?0V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@QE$AAA@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A348 (--$-0V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@@-$TypedEventHandler@PE$AAUISwitchItemDataView@.c)
 *     ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1804310B4 (-AddCallback@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

_lambda_9620c4927177ac59b63d59d26cc18e5a_ *__fastcall _lambda_9620c4927177ac59b63d59d26cc18e5a_::_lambda_9620c4927177ac59b63d59d26cc18e5a_(
        _lambda_9620c4927177ac59b63d59d26cc18e5a_ *this,
        const struct _lambda_9620c4927177ac59b63d59d26cc18e5a_ *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = __abi_winrt_ptr_ctor(*((_QWORD *)a2 + 1));
  *((_QWORD *)this + 2) = __abi_winrt_ptr_ctor(*((_QWORD *)a2 + 2));
  return this;
}
