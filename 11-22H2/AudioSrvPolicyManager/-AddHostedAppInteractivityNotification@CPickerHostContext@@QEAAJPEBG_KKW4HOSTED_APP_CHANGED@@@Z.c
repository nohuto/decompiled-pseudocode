/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180012CB0
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EBE0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000B480 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011580 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180012E50 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180012F94 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180030768 (-OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z.c)
 */

int __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        CHostedAppInteractivity *a3,
        unsigned int a4,
        int a5)
{
  int v5; // edi
  int v9; // esi
  int result; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // r8d
  CHostedAppInteractivityManager *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17[2]; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+48h] [rbp-30h] BYREF
  CHostedAppInteractivity *v19[2]; // [rsp+50h] [rbp-28h] BYREF

  v5 = 0;
  v19[0] = 0LL;
  v17[0] = 0;
  v18 = 0;
  v9 = 0;
  result = CPickerHostContext::GetHostedAppInteractivity(a1, a2, (unsigned __int64)a3, a4, v19);
  v11 = result;
  if ( result < 0 )
    goto LABEL_11;
  if ( a5 == 1 )
  {
    v12 = *((unsigned int *)v19[0] + 3);
    *((_DWORD *)v19[0] + 3) = 0;
    v13 = v12 != 0;
  }
  else
  {
    if ( (unsigned int)(a5 - 2) > 1 )
      return result;
    CHostedAppInteractivity::OnInteractivityNotification(v19[0], a5 == 2, v17, &v18);
    v13 = v17[0];
    v9 = v18;
  }
  if ( !v13 )
    return v11;
  v14 = (CHostedAppInteractivityManager *)*((_QWORD *)wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
                                                        v12,
                                                        (void (__cdecl *)())_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_)
                                          + 1);
  if ( *(_DWORD *)v14 > 4u )
  {
    v19[0] = a3;
    *(_QWORD *)v17 = a2;
    LOBYTE(v5) = a5 == 2;
    v18 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v14,
      byte_1800568BC,
      v15,
      v16,
      (void **)v17,
      (__int64)v19,
      (__int64)&v18);
  }
  result = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(v14, a2, (unsigned __int64)a3, a4, v9);
  v11 = result;
  if ( result < 0 )
  {
LABEL_11:
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_1c004e7844a83aef02453228989ecd61_Traceguids, v11);
    }
    AudPolicyLogError("CPickerHostContext::AddHostedAppInteractivityNotification", 205, v11);
    return v11;
  }
  return result;
}
