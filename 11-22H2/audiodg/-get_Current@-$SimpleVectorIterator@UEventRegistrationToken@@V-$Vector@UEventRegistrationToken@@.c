/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUEventRegistrationToken@@@Z @ 0x14008DD60
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_a1abafb90744ae9b01c4cbc40f730f27_@@V_lambda_db410fc95b55691920d4e5837927db01_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a1abafb90744ae9b01c4cbc40f730f27_@@AEBV_lambda_db410fc95b55691920d4e5837927db01_@@@Z @ 0x14007DC78 (--$Do@V_lambda_a1abafb90744ae9b01c4cbc40f730f27_@@V_lambda_db410fc95b55691920d4e5837927db01_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::get_Current(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v5; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v4[0] = (_QWORD *)a1;
  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v5 = &v6;
  v4[1] = &v6;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_a1abafb90744ae9b01c4cbc40f730f27_,_lambda_db410fc95b55691920d4e5837927db01_>(
           (unsigned int *)(a1 + 48),
           v2,
           v4,
           &v5);
}
