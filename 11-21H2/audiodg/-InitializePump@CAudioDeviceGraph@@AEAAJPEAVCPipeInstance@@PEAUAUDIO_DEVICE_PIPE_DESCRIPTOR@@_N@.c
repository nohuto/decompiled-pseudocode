/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140004AD0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002B3A4 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?reset@?$com_ptr_t@UIAudioProcessRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14002D0C0 (-reset@-$com_ptr_t@UIAudioProcessRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioDeviceGraph::InitializePump(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        unsigned __int8 a4)
{
  int v4; // esi
  __int64 *v7; // rbx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // ecx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int128 *, __int64); // rsi
  __int64 v14; // rdi
  __int128 v15; // xmm6
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v26; // [rsp+A8h] [rbp+38h] BYREF

  v4 = a4;
  v7 = *(__int64 **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((char *)a2 + 16)
                   + 32LL);
  v23 = 0LL;
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v23);
  v8 = *v7;
  v23 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v26 = 0LL;
  wil::com_ptr_t<IAudioProcessRT,wil::err_returncode_policy>::reset(&v26);
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_1b8969bf_17f7_48d1_89bc_fccafb532af5,
         &v26);
  v10 = v9;
  if ( v9 < 0 )
  {
    v20 = 1087LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v9,
      v21);
    goto LABEL_10;
  }
  v11 = 8;
  if ( (unsigned int)(*((_DWORD *)a3 + 25) - 2) > 1 )
    v11 = 0;
  v21 = v8;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 19) + 24LL))(
         *((_QWORD *)this + 19),
         v11 | (4 * v4) | ((unsigned int)(*((_DWORD *)this + 35) == 0) + 1),
         *((unsigned int *)this + 32),
         v26);
  v10 = v9;
  if ( v9 < 0 )
  {
    v20 = 1100LL;
    goto LABEL_13;
  }
  v22 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 19))(
    *((_QWORD *)this + 19),
    &GUID_00aa665f_84cd_47e3_9b9a_fbf6e17686eb,
    &v22);
  v12 = v22;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64))(*(_QWORD *)v22 + 24LL);
  v14 = *((_QWORD *)this + 49);
  v15 = *((_OWORD *)this + 22);
  v17 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v16,
          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  v24 = v15;
  v18 = v13(v12, *(_QWORD *)(v17 + 8), &v24, v14);
  v10 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x451,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v18,
      v21);
  else
    v10 = 0;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
LABEL_10:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
  return v10;
}
