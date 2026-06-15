/*
 * XREFs of ?Stop@CPipeInstance@@QEAAJXZ @ 0x140007778
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140007688 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140019820 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140007828 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::Stop(CPipeInstance *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v6 = 0LL;
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    do
    {
      v3 = v2[2];
      v2 = (_QWORD *)*v2;
      if ( *(_DWORD *)(v3 + 40) == 1 )
      {
        v5 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v3 + 32))(
               **(_QWORD **)(v3 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v6);
        if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6), v5 < 0) )
          v1 = v5;
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v6);
      }
    }
    while ( v2 );
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          54LL,
          &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
          (unsigned int)v1);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Stop", 0x1031u, v1);
    }
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v6);
  return (unsigned int)v1;
}
