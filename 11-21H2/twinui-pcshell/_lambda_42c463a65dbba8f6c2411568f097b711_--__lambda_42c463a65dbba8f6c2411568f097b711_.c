/*
 * XREFs of _lambda_42c463a65dbba8f6c2411568f097b711_::__lambda_42c463a65dbba8f6c2411568f097b711_ @ 0x1803D511C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___::_scalar_deleting_destructor_ @ 0x1803D5960 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___--_scala.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1803D7FC0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1803D52EC (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_42c463a65dbba8f6c2411568f097b711_::__lambda_42c463a65dbba8f6c2411568f097b711_(__int64 a1)
{
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)(a1 + 72));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 8);
}
