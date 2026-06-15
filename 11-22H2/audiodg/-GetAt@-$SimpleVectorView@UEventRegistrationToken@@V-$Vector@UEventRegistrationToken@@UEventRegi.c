/*
 * XREFs of ?GetAt@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x140084140
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_42bf887d55349554e7487a5227c11c37_@@V_lambda_cbaeb64f083810d120532be23c3dcd0f_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_42bf887d55349554e7487a5227c11c37_@@AEBV_lambda_cbaeb64f083810d120532be23c3dcd0f_@@@Z @ 0x14007D470 (--$Do@V_lambda_42bf887d55349554e7487a5227c11c37_@@V_lambda_cbaeb64f083810d120532be23c3dcd0f_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD **v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v5[0] = a1;
  *a3 = 0LL;
  v6 = &v8;
  v5[1] = &v7;
  v3 = *(_QWORD *)(a1 + 40);
  v5[2] = &v8;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_42bf887d55349554e7487a5227c11c37_,_lambda_cbaeb64f083810d120532be23c3dcd0f_>(
           (unsigned int *)(a1 + 48),
           v3,
           (__int64)v5,
           &v6);
}
