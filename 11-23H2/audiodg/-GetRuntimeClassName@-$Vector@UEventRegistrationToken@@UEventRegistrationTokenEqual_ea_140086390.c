/*
 * XREFs of ?GetRuntimeClassName@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140086390
 * Callers:
 *     ?GetRuntimeClassName@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x140032030 (-GetRuntimeClassName@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Dev.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.EventRegistrationToken>",
           0x53u,
           a2);
}
