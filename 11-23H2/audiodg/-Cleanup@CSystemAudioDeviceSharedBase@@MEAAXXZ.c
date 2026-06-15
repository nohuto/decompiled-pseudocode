/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058940
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14005853C (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14005A34C (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     wil::details::lambda_call__lambda_8116e228c464d674522700d2485c4173___::_lambda_call__lambda_8116e228c464d674522700d2485c4173___ @ 0x14005AAB4 (wil--details--lambda_call__lambda_8116e228c464d674522700d2485c4173___--_lambda_call__lambda_8116.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14005AD30 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140008FF4 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140055C90 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140056774 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSystemAudioDeviceSharedBase::Cleanup(CSystemAudioDeviceSharedBase *this)
{
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // r9d
  _UNKNOWN **v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v6);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
  }
  if ( *((_DWORD *)this + 85) )
  {
    CSystemAudioDeviceCollection::Remove(this);
    *((_DWORD *)this + 85) = 0;
  }
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 41) )
    goto LABEL_25;
  if ( !*((_DWORD *)this + 84) )
    goto LABEL_18;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
  }
  if ( (int)CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this, 0) >= 0 )
    goto LABEL_18;
  v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
LABEL_18:
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v2 = *((_QWORD *)this + 41);
  if ( v2 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v5 != &WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v5 + 7) & 0x200) == 0 || *((_BYTE *)v5 + 25) < 4u )
    {
LABEL_26:
      if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x200) != 0 && *((_BYTE *)v5 + 25) >= 4u )
        WPP_SF_((__int64)v5[2], 0xFu, (__int64)&WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
      goto LABEL_30;
    }
    WPP_SF_((__int64)v5[2], 0xEu, (__int64)&WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids);
LABEL_25:
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_26;
  }
LABEL_30:
  PublishDeviceGraphWnfState((__int64)v5, v2, v3, v4);
  EtwEventActivityIdControl(4LL, &v6);
}
