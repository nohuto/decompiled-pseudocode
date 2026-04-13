/*
 * XREFs of _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_DisplayInfo_::_1_::catch$0 @ 0x1800DC8A5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003F208 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_DisplayInfo_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x2C,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationext"
                                "ension\\lib\\contentdeliverymanagerappinfo.cpp",
                           a4);
  return 0LL;
}
