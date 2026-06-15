/*
 * XREFs of ?RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProcessMemory@@PEAUSYSTEM_AUDIO_STREAM@@II@Z @ 0x14007A23C
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAI4@Z @ 0x140079FF8 (--$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIDeviceGraphObjectCache@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDeviceGraphObjectCache@@@Z @ 0x140079530 (--4-$com_ptr_t@UIDeviceGraphObjectCache@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDevic.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBridgeToRenderGraph::RuntimeClassInitialize(
        CBridgeToRenderGraph *this,
        struct IDeviceGraphObjectCache *a2,
        struct ICrossProcessMemory *a3,
        const IID *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  LPVOID *ppv; // rsi
  __int64 v12; // rcx
  HRESULT Instance; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v19; // rcx
  __int64 v20; // rcx
  LPVOID v21; // rcx
  __int64 v22; // rax
  void *v23; // rcx
  HRESULT v24; // eax
  __int64 v25; // rdx
  void **v26; // [rsp+40h] [rbp-40h]
  void *v27; // [rsp+48h] [rbp-38h] BYREF
  char v28; // [rsp+50h] [rbp-30h]
  _QWORD v29[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-18h]
  int v31; // [rsp+6Ch] [rbp-14h]
  IAudioMediaType *v32; // [rsp+70h] [rbp-10h]
  __int64 v33; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+C0h] [rbp+40h] BYREF
  struct IDeviceGraphObjectCache *v36; // [rsp+C8h] [rbp+48h]

  v36 = a2;
  v9 = a6;
  v10 = a5;
  ppv = (LPVOID *)((char *)this + 40);
  v12 = *((_QWORD *)this + 5);
  *ppv = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  Instance = CoCreateInstance(a4, 0LL, 0x17u, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, ppv);
  if ( Instance >= 0 )
  {
    v15 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, char *))*ppv)(
            *ppv,
            &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
            (char *)this + 32);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct ICrossProcessMemory *, _QWORD, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 4) + 24LL))(
                 *((_QWORD *)this + 4),
                 a3,
                 0LL,
                 0LL,
                 0LL,
                 0);
    if ( Instance < 0 )
    {
      v14 = 69LL;
      goto LABEL_5;
    }
    v19 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    Instance = (**(__int64 (__fastcall ***)(LPVOID, GUID *, char *))*ppv)(
                 *ppv,
                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                 (char *)this + 48);
    if ( Instance < 0 )
    {
      v14 = 71LL;
      goto LABEL_5;
    }
    v20 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    Instance = (**(__int64 (__fastcall ***)(LPVOID, GUID *, char *))*ppv)(
                 *ppv,
                 &GUID_8182e82c_629b_44c8_a50b_e26d190d2ffc,
                 (char *)this + 56);
    if ( Instance < 0 )
    {
      v14 = 72LL;
      goto LABEL_5;
    }
    v21 = *ppv;
    v22 = *(_QWORD *)*ppv;
    v26 = (void **)((char *)this + 16);
    v27 = 0LL;
    v28 = 1;
    Instance = (*(__int64 (__fastcall **)(LPVOID, void **))(v22 + 24))(v21, &v27);
    if ( v28 )
    {
      v23 = *v26;
      *v26 = v27;
      if ( v23 )
        CoTaskMemFree(v23);
    }
    if ( Instance < 0 )
    {
      v14 = 74LL;
      goto LABEL_5;
    }
    ppIAudioMediaType = 0LL;
    v24 = CreateAudioMediaType(
            *((const WAVEFORMATEX **)this + 2),
            *(unsigned __int16 *)(*((_QWORD *)this + 2) + 16LL) + 18,
            &ppIAudioMediaType);
    Instance = v24;
    if ( v24 >= 0 )
    {
      if ( v10 >= v9 )
        v10 = v9;
      *((_DWORD *)this + 21) = 2 * v10;
      wil::com_ptr_t<IDeviceGraphObjectCache,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64)v36);
      v29[0] = 0LL;
      v29[1] = 0LL;
      v31 = 0;
      v33 = 1094927443LL;
      v30 = v9;
      v32 = ppIAudioMediaType;
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 3) + 40LL))(
              *((_QWORD *)this + 3),
              v29,
              (char *)this + 64);
      Instance = v24;
      if ( v24 >= 0 )
      {
        *((_DWORD *)this + 18) = v9;
        *((_BYTE *)this + 81) = 1;
        Instance = 0;
        goto LABEL_33;
      }
      v25 = 96LL;
    }
    else
    {
      v25 = 77LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
      (const char *)(unsigned int)v24);
LABEL_33:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
    return (unsigned int)Instance;
  }
  v14 = 66LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
