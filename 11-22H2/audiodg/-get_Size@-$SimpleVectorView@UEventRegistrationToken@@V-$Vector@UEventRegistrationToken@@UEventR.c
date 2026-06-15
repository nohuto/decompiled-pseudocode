/*
 * XREFs of ?get_Size@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x14008E260
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_5a6622f90239b115642726f26e5f714a_@@V_lambda_da2f16c99f1c47ff8a16875f1af95afa_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_5a6622f90239b115642726f26e5f714a_@@AEBV_lambda_da2f16c99f1c47ff8a16875f1af95afa_@@@Z @ 0x14007D888 (--$Do@V_lambda_5a6622f90239b115642726f26e5f714a_@@V_lambda_da2f16c99f1c47ff8a16875f1af95afa_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD **v4; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0;
  v3[0] = (_QWORD *)a1;
  v4 = &v5;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_5a6622f90239b115642726f26e5f714a_,_lambda_da2f16c99f1c47ff8a16875f1af95afa_>(
           (unsigned int *)(a1 + 48),
           *(_QWORD *)(a1 + 40),
           v3,
           &v4);
}
