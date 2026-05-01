/*
 * XREFs of ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180112580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@P6AXXZ@Z @ 0x1801126AC (-get@-$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141B80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b1b1adeb4908864363732ebe2cc2a796___ @ 0x1802D1F00 (Windows--Internal--ComTaskPool--QueueTask__lambda_b1b1adeb4908864363732ebe2cc2a796___.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x1802D1FB6 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  int v4; // ebx
  _DWORD *v5; // rcx
  int v6; // ecx
  int v7; // r9d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  int v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v23[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 88) ^ a2;
  v5 = *(_DWORD **)(wil::details::static_lazy<BlueLightReductionLogging>::get(
                      a1,
                      _lambda_8fbe65ba72b2d61923eb3411a963ff67_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
  {
    v26 = v4;
    LODWORD(v25) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_180847088,
      0,
      v7,
      (__int64)&v25,
      (__int64)&v26);
  }
  if ( v4 )
  {
    *(_DWORD *)(a1 + 88) = a2;
    if ( (v4 & 0xD) != 0 )
    {
      if ( (a2 & 0xD) == 0 )
      {
        if ( *(_DWORD *)(a1 + 72) )
        {
          v15 = a1 - 120;
        }
        else
        {
          v25 = 0LL;
          v12 = *(_QWORD *)(a1 + 56);
          v13 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v12 + 24LL);
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v25);
          v14 = v13(v12, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v25);
          if ( v14 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x130,
              (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
              (const char *)(unsigned int)v14,
              v21);
          v15 = a1 - 120;
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v25 + 24LL))(
                  v25,
                  30LL,
                  (a1 - 16) & -(__int64)(a1 != 120),
                  a1 + 72);
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x131,
              (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
              (const char *)(unsigned int)v16,
              v21);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
        }
        wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
          &v25,
          v15);
        v22 = v15;
        v17 = v25;
        wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
          v23,
          v25);
        v20 = Windows::Internal::ComTaskPool::QueueTask__lambda_b1b1adeb4908864363732ebe2cc2a796___(
                v19,
                v18,
                *(unsigned int *)(a1 + 84),
                &v22);
        if ( v23[0] )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v23[0]);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x13A,
            (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
            (const char *)(unsigned int)v20,
            v21);
        if ( v17 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v17);
      }
    }
    else if ( *(_DWORD *)(a1 + 72) )
    {
      v25 = 0LL;
      v9 = *(_QWORD *)(a1 + 56);
      v10 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v25);
      v11 = v10(v9, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v25);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x143,
          (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v11,
          v21);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 32LL))(v25, *(unsigned int *)(a1 + 72));
        *(_DWORD *)(a1 + 72) = 0;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    }
  }
  return 0LL;
}
