/*
 * XREFs of ??1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFEAC
 * Callers:
 *     _TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity_::_1_::dtor$0 @ 0x1805076E0 (_TabletModeTraceLogging--ApplyLayoutOperationHelper--StartActivity_--_1_--dtor$0.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall TabletModeTraceLogging::AppLayoutOperationData::~AppLayoutOperationData(
        TabletModeTraceLogging::AppLayoutOperationData *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 200);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 160);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 80);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 40);
}
