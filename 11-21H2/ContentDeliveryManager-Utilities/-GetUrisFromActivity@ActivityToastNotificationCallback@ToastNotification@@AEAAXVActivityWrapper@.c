/*
 * XREFs of ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x180078DB0
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180079058 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 result; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+28h] BYREF
  __int64 v20; // [rsp+68h] [rbp+30h]
  __int64 v21; // [rsp+70h] [rbp+38h] BYREF
  __int64 v22; // [rsp+78h] [rbp+40h] BYREF

  v20 = a2;
  v19 = a1;
  *a3 = 0LL;
  *a4 = 0LL;
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(a2, &v17);
  v21 = 0LL;
  v7 = *v17;
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 192))(v17, &v21);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      228LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8,
      v16);
  v16 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v21)(
         v21,
         &GUID_758d9661_221c_480f_a339_50656673f46f,
         &v16);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9,
      v16);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 48LL))(v16, a3);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      230LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v10,
      v16);
  v19 = 0LL;
  v11 = *v17;
  v19 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v11 + 176))(
             v17,
             &v19);
  v13 = v19;
  if ( (int)result >= 0 && v19 )
  {
    v22 = 0LL;
    v14 = (**v19)(v19, &GUID_758d9661_221c_480f_a339_50656673f46f, &v22);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v14,
        v16);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 48LL))(v22, a4);
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        236LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)result,
        v16);
    if ( v22 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v13 = v19;
  }
  if ( v13 )
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
  if ( v16 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v21 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v17 )
    result = (*(__int64 (__fastcall **)(__int64 *))(*v17 + 16))(v17);
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return result;
}
