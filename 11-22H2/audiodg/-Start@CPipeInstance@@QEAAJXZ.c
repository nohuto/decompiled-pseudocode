/*
 * XREFs of ?Start@CPipeInstance@@QEAAJXZ @ 0x14001E41C
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001E010 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14000D878 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400144A0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x14005CF04 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::Start(CPipeInstance *this)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 31) )
  {
    v5 = 0LL;
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    while ( v6 )
    {
      v3 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v6);
      if ( *(_DWORD *)(v3 + 40) == 1 )
      {
        v2 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v3 + 32))(
               **(_QWORD **)(v3 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v5);
        if ( v2 < 0 )
          break;
        v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
        if ( v2 < 0 )
          break;
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v5);
      }
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v5);
    if ( v2 < 0 )
    {
      CPipeInstance::Stop(this);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          51LL,
          &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
          (unsigned int)v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Start", 0x100Du, v2);
    }
  }
  return (unsigned int)v2;
}
