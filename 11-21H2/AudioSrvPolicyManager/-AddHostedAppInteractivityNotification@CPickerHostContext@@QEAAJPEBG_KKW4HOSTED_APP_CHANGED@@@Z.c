/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x1800260D0
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180026620 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019AC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180025F90 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800264D4 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 */

__int64 __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  int HostedAppInteractivity; // ebx
  int v9; // eax
  int v10; // ecx
  BOOL v11; // esi
  int v12; // edx
  int v13; // ecx
  CHostedAppInteractivityManager *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0LL;
  HostedAppInteractivity = CPickerHostContext::GetHostedAppInteractivity(
                             a1,
                             a2,
                             a3,
                             a4,
                             (struct CHostedAppInteractivity **)&v18);
  if ( HostedAppInteractivity < 0 )
  {
LABEL_15:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
        HostedAppInteractivity);
    }
    AudPolicyLogError("CPickerHostContext::AddHostedAppInteractivityNotification", 205, HostedAppInteractivity);
    return (unsigned int)HostedAppInteractivity;
  }
  if ( a5 == 1 )
  {
    v11 = 0;
    v13 = *(_DWORD *)(v18 + 12);
    *(_DWORD *)(v18 + 12) = 0;
    v12 = v13 != 0;
    goto LABEL_11;
  }
  if ( (unsigned int)(a5 - 2) > 1 )
    return (unsigned int)HostedAppInteractivity;
  v9 = *(_DWORD *)(v18 + 12);
  if ( a5 == 2 )
  {
    v10 = v9 + 1;
LABEL_8:
    *(_DWORD *)(v18 + 12) = v10;
    goto LABEL_9;
  }
  v10 = *(_DWORD *)(v18 + 12);
  if ( v9 )
  {
    v10 = v9 - 1;
    goto LABEL_8;
  }
LABEL_9:
  v11 = v10 != 0;
  v12 = v11 ^ (v9 != 0);
LABEL_11:
  if ( v12 )
  {
    v14 = (CHostedAppInteractivityManager *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v14 > 4u )
    {
      v19 = a3;
      v20 = (__int64)a2;
      LODWORD(v18) = a5 == 2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v14,
        (unsigned __int8 *)dword_180051098,
        v15,
        v16,
        (void **)&v20,
        (__int64)&v19,
        (__int64)&v18);
    }
    HostedAppInteractivity = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(v14, a2, a3, a4, v11);
    if ( HostedAppInteractivity < 0 )
      goto LABEL_15;
  }
  return (unsigned int)HostedAppInteractivity;
}
