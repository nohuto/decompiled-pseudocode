/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$7 @ 0x18024DD38
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18038BC1C (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 208) = *(_QWORD *)(a2 + 72) + 584LL;
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(*(_QWORD *)(a2 + 208));
}
