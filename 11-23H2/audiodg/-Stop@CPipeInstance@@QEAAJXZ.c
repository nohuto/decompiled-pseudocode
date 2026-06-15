/*
 * XREFs of ?Stop@CPipeInstance@@QEAAJXZ @ 0x14005CEB4
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x14001E41C (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140060320 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14000D878 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400144A0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::Stop(CPipeInstance *this)
{
  int v1; // ebx
  __int64 v2; // rax
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0LL;
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    do
    {
      v2 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v6);
      if ( *(_DWORD *)(v2 + 40) == 1 )
      {
        v3 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v2 + 32))(
               **(_QWORD **)(v2 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v5);
        if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5), v3 < 0) )
          v1 = v3;
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v5);
      }
    }
    while ( v6 );
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x34u,
          (__int64)&WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
          v1);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Stop", 0x104Du, v1);
    }
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v5);
  return (unsigned int)v1;
}
