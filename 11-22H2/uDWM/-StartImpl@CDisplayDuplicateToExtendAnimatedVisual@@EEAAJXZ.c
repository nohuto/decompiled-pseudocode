/*
 * XREFs of ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BA5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180047CA4 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18005B788 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B7DB4 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800B99B0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9C88 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BA3E0 (-ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::StartImpl(CDisplayDuplicateToExtendAnimatedVisual *this)
{
  const struct CDWMDisplay **v1; // rdi
  CDWMDisplay *v3; // rcx
  CDWMDisplaySet *v4; // rsi
  int PrimaryDisplay; // edi
  __int64 v6; // rdx
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rax
  CDWMDisplay *v10; // rcx
  struct CDWMDisplay *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h] BYREF
  int v24; // [rsp+78h] [rbp+20h] BYREF

  v1 = (const struct CDWMDisplay **)((char *)this + 440);
  v3 = (CDWMDisplay *)*((_QWORD *)this + 55);
  v4 = (CDWMDisplaySet *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  *v1 = 0LL;
  if ( v3 )
    CDWMDisplay::Release(v3);
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(v4, v1);
  if ( PrimaryDisplay < 0 )
  {
    v6 = 79LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)PrimaryDisplay);
    return (unsigned int)PrimaryDisplay;
  }
  v8 = (volatile signed __int32 **)*((_QWORD *)this + 41);
  if ( v8 == *((volatile signed __int32 ***)this + 42) )
    v9 = 0LL;
  else
    v9 = *v8;
  v10 = (CDWMDisplay *)*((_QWORD *)this + 56);
  *((_QWORD *)this + 56) = v9;
  if ( v9 )
    _InterlockedIncrement(v9);
  if ( v10 )
    CDWMDisplay::Release(v10);
  v11 = (struct CDWMDisplay *)*((_QWORD *)this + 56);
  v12 = *((_QWORD *)this + 57);
  *((_QWORD *)this + 57) = 0LL;
  if ( v12 )
    CBaseObject::Release((CBaseObject *)(v12 + 8));
  PrimaryDisplay = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended(
                     (CDWMDisplaySet **)this,
                     (struct CAnimatedTransitionVisual **)this + 57,
                     v11,
                     (__int64)this + 464);
  if ( PrimaryDisplay < 0 )
  {
    v6 = 88LL;
    goto LABEL_5;
  }
  PrimaryDisplay = CDisplayDuplicateToExtendAnimatedVisual::CaptureAndPositionToExtendedDisplay(this, v13, v14);
  if ( PrimaryDisplay < 0 )
  {
    v6 = 91LL;
    goto LABEL_5;
  }
  PrimaryDisplay = CDisplayDuplicateToExtendAnimatedVisual::ScheduleExitAnimations(this);
  if ( PrimaryDisplay < 0 )
  {
    v6 = 94LL;
    goto LABEL_5;
  }
  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    v21 = *((_DWORD *)this + 77);
    v22 = *((_DWORD *)this + 76);
    v23 = *((_DWORD *)this + 75);
    v24 = *((_DWORD *)this + 74);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      byte_18012605C,
      v16,
      v17,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  *((_BYTE *)this + 434) = 1;
  v18 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
