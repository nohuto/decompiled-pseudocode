/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180012F94
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180012CB0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x1800307B0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 * Callees:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x1800023D0 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000D230 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001313C (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800151BC (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180030768 (-OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  CHostedAppInteractivityManager *v8; // rcx
  int CumulativeHostedAppInteractivity; // ebx
  CHostedAppInteractivity *v10; // rdi
  CHostedAppInteractivityManager *v11; // rcx
  int v12; // esi
  _QWORD *i; // rdx
  _QWORD **v14; // r9
  unsigned int v15; // edx
  int v17; // [rsp+30h] [rbp-38h] BYREF
  CHostedAppInteractivity *v18; // [rsp+38h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+74h] [rbp+Ch]

  v21 = HIDWORD(this);
  v18 = 0LL;
  v17 = 0;
  v20 = 0;
  EnterCriticalSection(&stru_1800636F0);
  v19 = &stru_1800636F0;
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v8,
                                       a2,
                                       a3,
                                       a4,
                                       &v18);
  if ( CumulativeHostedAppInteractivity < 0
    || (v10 = v18, CHostedAppInteractivity::OnInteractivityNotification(v18, a5, &v17, &v20), v12 = v20, v17)
    && (CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                             v11,
                                             a2,
                                             a3,
                                             a4,
                                             v20),
        CumulativeHostedAppInteractivity < 0) )
  {
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
        (unsigned int)CumulativeHostedAppInteractivity);
    }
    AudPolicyLogError(
      "CHostedAppInteractivityManager::AddHostedAppInteractivityNotification",
      411,
      CumulativeHostedAppInteractivity);
  }
  else if ( !v12 )
  {
    for ( i = (_QWORD *)qword_180063718; i; i = (_QWORD *)*i )
    {
      if ( (CHostedAppInteractivity *)i[2] == v10 )
      {
        v14 = (_QWORD **)(i + 1);
        if ( i == (_QWORD *)qword_180063718 )
          qword_180063718 = *i;
        else
          **v14 = *i;
        if ( i == (_QWORD *)xmmword_180063720 )
          *(_QWORD *)&xmmword_180063720 = *v14;
        else
          *(_QWORD *)(*i + 8LL) = *v14;
        ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(&qword_180063718);
        if ( v10 )
          CHostedAppInteractivity::`scalar deleting destructor'(v10, v15);
        break;
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
