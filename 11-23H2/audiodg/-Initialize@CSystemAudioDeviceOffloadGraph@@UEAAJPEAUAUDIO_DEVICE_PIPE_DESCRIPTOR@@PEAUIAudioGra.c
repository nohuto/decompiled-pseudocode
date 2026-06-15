/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B570
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400214C0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14004A22C (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400557C0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     wil::details::lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___::_lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___ @ 0x14005AA80 (wil--details--lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___--_lambda_call__lambda_65ba.c)
 *     wil::details::lambda_call__lambda_8116e228c464d674522700d2485c4173___::_lambda_call__lambda_8116e228c464d674522700d2485c4173___ @ 0x14005AAB4 (wil--details--lambda_call__lambda_8116e228c464d674522700d2485c4173___--_lambda_call__lambda_8116.c)
 *     wil::details::lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___::_lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___ @ 0x14005AAD8 (wil--details--lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___--_lambda_call__lambda_f709.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x1400A1008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  __int128 v7; // xmm0
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  void *v19; // rdx
  unsigned int v20; // ecx
  unsigned __int8 v21; // r8
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  void *v27; // rdx
  unsigned __int8 v28; // r8
  unsigned __int64 v29; // [rsp+20h] [rbp-49h]
  unsigned __int64 v30; // [rsp+28h] [rbp-41h]
  _BYTE v31[8]; // [rsp+30h] [rbp-39h] BYREF
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v32; // [rsp+38h] [rbp-31h] BYREF
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR **v33; // [rsp+40h] [rbp-29h] BYREF
  char v34; // [rsp+48h] [rbp-21h]
  CSystemAudioDeviceOffloadGraph *v35; // [rsp+50h] [rbp-19h] BYREF
  char v36; // [rsp+58h] [rbp-11h]
  __int128 v37; // [rsp+60h] [rbp-9h] BYREF
  __int128 v38; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v32 = a2;
  v31[1] = 1;
  v35 = this;
  v36 = 1;
  v7 = *(_OWORD *)((char *)a2 + 148);
  *(_OWORD *)((char *)this + 248) = v7;
  v37 = v7;
  v38 = v7;
  EtwEventActivityIdControl(4LL, &v38);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  *((_DWORD *)this + 56) = a4;
  v8 = v32;
  *((_DWORD *)this + 60) = *((_DWORD *)v32 + 34);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_73715f9ee22d38db1d35d5de395f8c05_Traceguids);
    v8 = v32;
  }
  v9 = CSystemAudioDeviceBase::ActivateEndpoint(this, v8);
  v10 = v9;
  if ( v9 == -2005139389
    || v9 == -2005139364
    || v9 == -2005139363
    || v9 == -2005139362
    || v9 == -2005139361
    || v9 == -2005139360 )
  {
    v10 = -2005139370;
    v11 = 2289827926LL;
    v12 = 70LL;
    goto LABEL_27;
  }
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 71LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)v11);
    goto LABEL_28;
  }
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
          (char *)this + 448);
  v10 = v13;
  if ( v13 < 0 )
  {
    v11 = (unsigned int)v13;
    v12 = 75LL;
    goto LABEL_27;
  }
  v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
          (char *)this + 456);
  v10 = v14;
  if ( v14 < 0 )
  {
    v11 = (unsigned int)v14;
    v12 = 77LL;
    goto LABEL_27;
  }
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
          (char *)this + 464);
  v10 = v15;
  if ( v15 < 0 )
  {
    v11 = (unsigned int)v15;
    v12 = 79LL;
    goto LABEL_27;
  }
  v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
          (char *)this + 472);
  v10 = v16;
  if ( v16 < 0 )
  {
    v11 = (unsigned int)v16;
    v12 = 81LL;
    goto LABEL_27;
  }
  v17 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)v32 + 8) = v17;
  v33 = &v32;
  v34 = 1;
  v18 = CSystemAudioDeviceSharedBase::Initialize(this, v32, a3, a4);
  v10 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v18);
    wil::details::lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___::_lambda_call__lambda_65baa50bbd285fe823981d87cd7a012a___(&v33);
LABEL_28:
    if ( this != (CSystemAudioDeviceOffloadGraph *)-184LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v37);
    wil::details::lambda_call__lambda_8116e228c464d674522700d2485c4173___::_lambda_call__lambda_8116e228c464d674522700d2485c4173___((__int64)&v35);
    wil::details::lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___::_lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___(
      (__int64)v31,
      v27,
      v28);
    return v10;
  }
  v33 = (struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)*((_QWORD *)v32 + 8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
  if ( this != (CSystemAudioDeviceOffloadGraph *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  EtwEventActivityIdControl(4LL, &v38);
  AEWMILOG_PERFORMANCE(v20, v19, v21, 0xAu, v29, v30);
  PublishDeviceGraphWnfState(v23, v22, v24, v25);
  return 0LL;
}
