/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18000C664
 * Callers:
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x18000C1AC (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180015FF4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        const struct tWAVEFORMATEX **a3,
        struct IStreamGroupProxy *a4,
        char a5)
{
  HRESULT Instance; // eax
  int v10; // ebx
  void *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  IUnknown *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  int v19; // r9d
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  int dwAuthnLevel; // [rsp+20h] [rbp-60h]
  int v25; // [rsp+40h] [rbp-40h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h] BYREF
  void **v29; // [rsp+60h] [rbp-20h]
  struct tWAVEFORMATEX *v30; // [rsp+68h] [rbp-18h] BYREF
  char v31; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_5d857e80_f074_4ad8_a9ce_0ddca68d8212,
               (LPVOID *)&pProxy);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v21 = 3276LL;
LABEL_23:
    v22 = (unsigned int)Instance;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v22,
      dwAuthnLevel);
    goto LABEL_19;
  }
  Instance = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v21 = 3282LL;
    goto LABEL_23;
  }
  Instance = ((__int64 (__fastcall *)(IUnknown *, const struct tWAVEFORMATEX **))pProxy->lpVtbl[4].Release)(pProxy, a3);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v21 = 3284LL;
    goto LABEL_23;
  }
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 8);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((char *)this + 112, *(_QWORD *)a2);
  v29 = (void **)((char *)this + 208);
  v30 = 0LL;
  v31 = 1;
  v10 = CloneWaveFormat(a3[6], &v30);
  if ( v31 )
  {
    v11 = *v29;
    *v29 = v30;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v10 < 0 )
  {
    v22 = (unsigned int)v10;
    v21 = 3288LL;
    goto LABEL_25;
  }
  v12 = *(_QWORD *)a4;
  v27 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(v12 + 288))(a4, &v27);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 3292LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v13,
      dwAuthnLevel);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
    goto LABEL_19;
  }
  v13 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[5].QueryInterface)(pProxy, v27);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 3293LL;
    goto LABEL_28;
  }
  v14 = *((_QWORD *)this + 6);
  v15 = pProxy;
  *((_QWORD *)this + 6) = pProxy;
  if ( v15 )
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->AddRef)(v15);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v16 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = a4;
  (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v18 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       v17,
                       _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v18 > 4u )
  {
    a5 = *((_BYTE *)this + 124);
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
    v28 = ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (_DWORD)v18,
      (unsigned int)&unk_180192E0A,
      (_DWORD)this + 8,
      v19,
      (__int64)&v28,
      (__int64)&v25,
      (__int64)&a5);
  }
  *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
  v10 = 0;
LABEL_19:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&pProxy);
  return (unsigned int)v10;
}
