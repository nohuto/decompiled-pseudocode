/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x1400238F8
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioDeviceGraph::InitializePump(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int128 *, __int64); // r14
  __int64 v13; // rdi
  __int128 v14; // xmm6
  int v15; // eax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  WINBOOL fPending; // [rsp+B8h] [rbp+38h] BYREF

  v4 = a4;
  v7 = **(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((__int64)a2 + 16)
                   + 32LL);
  v22 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v21 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_1b8969bf_17f7_48d1_89bc_fccafb532af5,
         &v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = 1090LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8,
      v18);
    goto LABEL_12;
  }
  v10 = 8;
  if ( (unsigned int)(*((_DWORD *)a3 + 25) - 2) > 1 )
    v10 = 0;
  v18 = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 19) + 24LL))(
         *((_QWORD *)this + 19),
         v10 | (4 * v4) | ((unsigned int)(*((_DWORD *)this + 35) == 0) + 1),
         *((unsigned int *)this + 32),
         v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = 1103LL;
    goto LABEL_15;
  }
  v19 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 19))(
    *((_QWORD *)this + 19),
    &GUID_00aa665f_84cd_47e3_9b9a_fbf6e17686eb,
    &v19);
  v11 = v19;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64))(*(_QWORD *)v19 + 24LL);
  v13 = *((_QWORD *)this + 48);
  v14 = *(_OWORD *)((char *)this + 344);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&v23 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    DWORD2(v23) = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v23);
  }
  v23 = v14;
  v15 = v12(v11, *((_QWORD *)Context + 1), &v23, v13);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x454,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v15,
      v18);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v19);
  }
  else
  {
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v19);
    v9 = 0;
  }
LABEL_12:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v22);
  return v9;
}
