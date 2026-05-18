/*
 * XREFs of ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70
 * Callers:
 *     ?UpdateHolographicDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA_NXZ @ 0x1800D9920 (-UpdateHolographicDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA_N.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18001071C (--$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x1800248C4 (--$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_1800248C4.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x180028204 (-Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@st.c)
 *     ?SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18002C9C4 (-SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@st.c)
 *     ??$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x18006EDDC (--$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@I@Z @ 0x18006F8B0 (-Create@DepthBuffer@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?D3D11_SetDebugName@@YAXPEAUIDXGIObject@@PEBD@Z @ 0x1800C9CF4 (-D3D11_SetDebugName@@YAXPEAUIDXGIObject@@PEBD@Z.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     ??$?8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11DepthStencilView@@@01@$$T@Z @ 0x1800CC1D8 (--$-8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11DepthStencilView@@@01@$$T@.c)
 *     ??4?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800CCA64 (--4-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0CD3D11_DEPTH_STENCIL_VIEW_DESC@@QEAA@W4D3D11_DSV_DIMENSION@@W4DXGI_FORMAT@@IIII@Z @ 0x1800D5820 (--0CD3D11_DEPTH_STENCIL_VIEW_DESC@@QEAA@W4D3D11_DSV_DIMENSION@@W4DXGI_FORMAT@@IIII@Z.c)
 *     ??4?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D5A8C (--4-$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@I@Z @ 0x1800D5C8C (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11DepthStencilView@@@WRL@Micr.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D89B4 (--$As@UID3D11Texture2D@@@-$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIDXGIResource1@@@?$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIResource1@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D8A10 (--$As@UIDXGIResource1@@@-$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800D9750 (-GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA-AV-$shared.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::UpdateLocalDisplayState(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  double v6; // xmm0_8
  char v7; // r12
  int v8; // eax
  ULONG_PTR v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v14; // rbx
  int v15; // eax
  ULONG_PTR v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v18; // rbx
  int v19; // eax
  ULONG_PTR v20; // rbx
  int v21; // eax
  ULONG_PTR v22; // rbx
  struct IDXGIObject *v23; // rbx
  HRESULT (__stdcall *GetPrivateData)(IDXGIObject *, const GUID *const, UINT *, void *); // rsi
  int v25; // eax
  ULONG_PTR v26; // rbx
  __int64 v27; // r14
  __int64 (__fastcall *v28)(__int64, struct IDXGIObject *, _OWORD *, __int64); // rsi
  __int64 v29; // rbx
  int v30; // eax
  ULONG_PTR v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int128 *, _QWORD, __int64); // rsi
  __int64 v33; // rbx
  int v34; // eax
  ULONG_PTR v35; // rbx
  __int64 v36; // rbx
  int v37; // ecx
  __int64 (__fastcall *v38)(__int64, _DWORD *, _QWORD, __int64); // rsi
  int v39; // eax
  ULONG_PTR v40; // rbx
  enum DXGI_FORMAT v41; // r8d
  __int64 (__fastcall *v42)(__int64, _QWORD, _BYTE *, __int64); // rsi
  __int64 v43; // rbx
  int v44; // eax
  ULONG_PTR v45; // rbx
  __int64 (__fastcall *v46)(__int64, _QWORD, _BYTE *, __int64); // rsi
  __int64 v47; // rbx
  int v48; // eax
  ULONG_PTR v49; // rbx
  __int64 v50; // rax
  Spectre::Engine::RenderDevice *v51; // r14
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 v53; // rsi
  int v54; // ebx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // r12
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // edi
  __int64 v62; // rbx
  __int64 v63; // r12
  _QWORD *v64; // rcx
  _QWORD *v65; // rax
  __int64 *v66; // r9
  _QWORD *v67; // rax
  __int64 (__fastcall ***v68)(_QWORD, GUID *, __int64 *); // rcx
  char v69; // [rsp+48h] [rbp-C0h]
  char v70; // [rsp+49h] [rbp-BFh]
  char v71; // [rsp+4Ah] [rbp-BEh]
  struct IDXGIObject *v72; // [rsp+50h] [rbp-B8h] BYREF
  struct IDXGIObject *v73; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v74[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct ID3D11DeviceChild *v75; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall ***v76)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v77; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v78; // [rsp+88h] [rbp-80h] BYREF
  __int64 v79; // [rsp+90h] [rbp-78h] BYREF
  __int64 v80; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v81[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v82; // [rsp+ACh] [rbp-5Ch]
  int v83; // [rsp+B0h] [rbp-58h]
  __int64 v84; // [rsp+B8h] [rbp-50h] BYREF
  struct Spectre::Engine::Engine *v85; // [rsp+C0h] [rbp-48h]
  __int64 v86; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v87; // [rsp+D0h] [rbp-38h] BYREF
  std::_Ref_count_base *v88; // [rsp+D8h] [rbp-30h]
  __int64 v89; // [rsp+E0h] [rbp-28h] BYREF
  std::_Ref_count_base *v90; // [rsp+E8h] [rbp-20h]
  __int64 v91; // [rsp+F0h] [rbp-18h] BYREF
  std::_Ref_count_base *v92; // [rsp+F8h] [rbp-10h]
  __int64 v93; // [rsp+100h] [rbp-8h] BYREF
  std::_Ref_count_base *v94; // [rsp+108h] [rbp+0h]
  __int128 v95; // [rsp+110h] [rbp+8h]
  unsigned __int64 v96; // [rsp+120h] [rbp+18h]
  __int64 v97; // [rsp+128h] [rbp+20h]
  _BYTE v98[16]; // [rsp+130h] [rbp+28h] BYREF
  int v99; // [rsp+140h] [rbp+38h]
  int v100; // [rsp+144h] [rbp+3Ch]
  Spectre::Engine::RenderDevice *v101; // [rsp+148h] [rbp+40h] BYREF
  std::_Ref_count_base *v102; // [rsp+150h] [rbp+48h]
  __int64 v103; // [rsp+158h] [rbp+50h] BYREF
  std::_Ref_count_base *v104; // [rsp+160h] [rbp+58h]
  __int64 v105; // [rsp+168h] [rbp+60h] BYREF
  __int64 v106; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v107[8]; // [rsp+188h] [rbp+80h] BYREF
  std::_Ref_count_base *v108; // [rsp+190h] [rbp+88h]
  _OWORD v109[2]; // [rsp+198h] [rbp+90h] BYREF
  EXCEPTION_RECORD v110; // [rsp+1B8h] [rbp+B0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+258h] [rbp+150h] BYREF
  EXCEPTION_RECORD v112; // [rsp+2F8h] [rbp+1F0h] BYREF
  EXCEPTION_RECORD v113; // [rsp+398h] [rbp+290h] BYREF
  EXCEPTION_RECORD v114; // [rsp+438h] [rbp+330h] BYREF
  EXCEPTION_RECORD v115; // [rsp+4D8h] [rbp+3D0h] BYREF
  EXCEPTION_RECORD v116; // [rsp+578h] [rbp+470h] BYREF
  EXCEPTION_RECORD v117; // [rsp+618h] [rbp+510h] BYREF
  EXCEPTION_RECORD v118; // [rsp+6B8h] [rbp+5B0h] BYREF
  EXCEPTION_RECORD v119; // [rsp+758h] [rbp+650h] BYREF
  _DWORD v120[5]; // [rsp+7F8h] [rbp+6F0h] BYREF
  __int64 v121; // [rsp+80Ch] [rbp+704h]
  int v122; // [rsp+814h] [rbp+70Ch]
  __int64 v123; // [rsp+818h] [rbp+710h]
  int v124; // [rsp+820h] [rbp+718h]
  __int128 v125; // [rsp+828h] [rbp+720h] BYREF
  _BYTE v126[20]; // [rsp+838h] [rbp+730h]
  __int64 v127; // [rsp+84Ch] [rbp+744h]
  __int128 v128; // [rsp+858h] [rbp+750h] BYREF
  __int128 v129; // [rsp+868h] [rbp+760h]
  void *retaddr; // [rsp+8E0h] [rbp+7D8h]

  v77 = a2;
  Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetRendererD3D11((__int64)a1, &v103);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(v103, &v86);
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 32LL))(
    *a2,
    &v76);
  v6 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  v71 = v7;
  v74[0] = (v7 != 0) + 1LL;
  *(_BYTE *)(*a3 + 1) = v7;
  v75 = 0LL;
  v8 = Microsoft::WRL::ComPtr<ID3D11Resource>::As<ID3D11Texture2D>(&v76, (__int64 *)&v75);
  v9 = v8;
  if ( v8 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  D3D11_SetDebugName(v75, "CameraBackBuffer");
  v69 = 0;
  v70 = 0;
  v10 = (__int64 *)(*a3 + 8);
  v11 = v86;
  if ( (struct ID3D11DeviceChild *)*v10 != v75 )
  {
    Microsoft::WRL::ComPtr<ID3D11Texture2D>::operator=(v10, (__int64 *)&v75);
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*a3 + 8) + 80LL))(*(_QWORD *)(*a3 + 8), &v128);
    v12 = v129;
    v81[1] = (v7 != 0) + 4;
    v81[2] = 0;
    v83 = 1;
    v82 = 0;
    v81[0] = v129;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v11 + 72LL);
    v14 = *a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 48));
    v15 = v13(v11, *(_QWORD *)(*a3 + 8), v81, v14 + 48);
    v16 = v15;
    if ( v15 < 0 )
    {
      memset_0(&v112, 0, sizeof(v112));
      v112.ExceptionCode = -532265403;
      v112.ExceptionAddress = retaddr;
      v112.NumberParameters = 1;
      v112.ExceptionInformation[0] = v16;
      RaiseFailFastException(&v112, 0LL, 0);
    }
    if ( v7 )
    {
      v82 = 1;
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v11 + 72LL);
      v18 = *a3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 96));
      v19 = v17(v11, *(_QWORD *)(*a3 + 8), v81, v18 + 96);
      v20 = v19;
      if ( v19 < 0 )
      {
        memset_0(&v113, 0, sizeof(v113));
        v113.ExceptionCode = -532265403;
        v113.ExceptionAddress = retaddr;
        v113.NumberParameters = 1;
        v113.ExceptionInformation[0] = v20;
        RaiseFailFastException(&v113, 0LL, 0);
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11DepthStencilView>::operator=((__int64 *)(*a3 + 96), (__int64 *)(*a3 + 48));
    }
    *(_QWORD *)&v95 = v12 | 0x100000000LL;
    DWORD2(v95) = LODWORD(v6);
    HIDWORD(v95) = LODWORD(v6);
    LODWORD(v96) = 3;
    v97 = 0LL;
    v109[0] = v95;
    v109[1] = v96;
    v73 = 0LL;
    v21 = Microsoft::WRL::ComPtr<ID3D11Resource>::As<IDXGIResource1>(&v76, (__int64 *)&v73);
    v22 = v21;
    if ( v21 < 0 )
    {
      memset_0(&v114, 0, sizeof(v114));
      v114.ExceptionCode = -532265403;
      v114.ExceptionAddress = retaddr;
      v114.NumberParameters = 1;
      v114.ExceptionInformation[0] = v22;
      RaiseFailFastException(&v114, 0LL, 0);
    }
    D3D11_SetDebugName(v73, "DxgiBackBuffer");
    v72 = 0LL;
    v23 = v73;
    GetPrivateData = v73->lpVtbl[1].GetPrivateData;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v72);
    v25 = ((__int64 (__fastcall *)(struct IDXGIObject *, bool, struct IDXGIObject **))GetPrivateData)(
            v23,
            v7 != 0,
            &v72);
    v26 = v25;
    if ( v25 < 0 )
    {
      memset_0(&v110, 0, sizeof(v110));
      v110.ExceptionCode = -532265403;
      v110.ExceptionAddress = retaddr;
      v110.NumberParameters = 1;
      v110.ExceptionInformation[0] = v26;
      RaiseFailFastException(&v110, 0LL, 0);
    }
    D3D11_SetDebugName(v72, "DxgiSurface");
    v27 = a1[66];
    v28 = *(__int64 (__fastcall **)(__int64, struct IDXGIObject *, _OWORD *, __int64))(*(_QWORD *)v27 + 496LL);
    v29 = *a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 32));
    v30 = v28(v27, v72, v109, v29 + 32);
    v31 = v30;
    if ( v30 < 0 )
    {
      memset_0(&v116, 0, sizeof(v116));
      v116.ExceptionCode = -532265403;
      v116.ExceptionAddress = retaddr;
      v116.NumberParameters = 1;
      v116.ExceptionInformation[0] = v31;
      RaiseFailFastException(&v116, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[66] + 592LL))(a1[66], *(_QWORD *)(*a3 + 32));
    *(_QWORD *)(*a3 + 40) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)*v77 + 24LL))(
                                         *v77,
                                         &v78);
    v125 = v128;
    *(_OWORD *)v126 = v129;
    *(_QWORD *)&v126[12] = 3LL;
    v127 = 0x20000LL;
    HIDWORD(v125) = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 16));
    v32 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v11 + 40LL);
    v33 = *a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 16));
    v34 = v32(v11, &v125, 0LL, v33 + 16);
    v35 = v34;
    if ( v34 < 0 )
    {
      memset_0(&v117, 0, sizeof(v117));
      v117.ExceptionCode = -532265403;
      v117.ExceptionAddress = retaddr;
      v117.NumberParameters = 1;
      v117.ExceptionInformation[0] = v35;
      RaiseFailFastException(&v117, 0LL, 0);
    }
    D3D11_SetDebugName(*(struct ID3D11DeviceChild **)(*a3 + 16), "BackBufferStaging");
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 56));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 104));
    v69 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v72);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v73);
  }
  v36 = *a3;
  if ( Microsoft::WRL::operator==<ID3D11DepthStencilView>((_QWORD *)(*a3 + 56))
    || Microsoft::WRL::operator==<ID3D11DepthStencilView>((_QWORD *)(v36 + 104)) )
  {
    v37 = *(_DWORD *)(v36 + 44);
    v120[0] = *(_DWORD *)(v36 + 40);
    v120[1] = v37;
    v120[2] = 1;
    v120[3] = (v7 != 0) + 1;
    v120[4] = 55;
    v121 = 1LL;
    v122 = 0;
    v123 = 64LL;
    v124 = 0;
    v38 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64))(*(_QWORD *)v11 + 40LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v36 + 24));
    v39 = v38(v11, v120, 0LL, v36 + 24);
    v40 = v39;
    if ( v39 < 0 )
    {
      memset_0(&v118, 0, sizeof(v118));
      v118.ExceptionCode = -532265403;
      v118.ExceptionAddress = retaddr;
      v118.NumberParameters = 1;
      v118.ExceptionInformation[0] = v40;
      RaiseFailFastException(&v118, 0LL, 0);
    }
    D3D11_SetDebugName(*(struct ID3D11DeviceChild **)(*a3 + 24), "BackBuffer_DepthStencilTexture");
    CD3D11_DEPTH_STENCIL_VIEW_DESC::CD3D11_DEPTH_STENCIL_VIEW_DESC(
      (CD3D11_DEPTH_STENCIL_VIEW_DESC *)v98,
      (enum D3D11_DSV_DIMENSION)((v7 != 0) + 3),
      v41);
    v100 = 1;
    v42 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64))(*(_QWORD *)v11 + 80LL);
    v43 = *a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 56));
    v44 = v42(v11, *(_QWORD *)(*a3 + 24), v98, v43 + 56);
    v45 = v44;
    if ( v44 < 0 )
    {
      memset_0(&v119, 0, sizeof(v119));
      v119.ExceptionCode = -532265403;
      v119.ExceptionAddress = retaddr;
      v119.NumberParameters = 1;
      v119.ExceptionInformation[0] = v45;
      RaiseFailFastException(&v119, 0LL, 0);
    }
    D3D11_SetDebugName(*(struct ID3D11DeviceChild **)(*a3 + 56), "BackBuffer_DepthStencilView_LeftEye");
    if ( v7 )
    {
      v99 = 1;
      v46 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64))(*(_QWORD *)v11 + 80LL);
      v47 = *a3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*a3 + 104));
      v48 = v46(v11, *(_QWORD *)(*a3 + 24), v98, v47 + 104);
      v49 = v48;
      if ( v48 < 0 )
      {
        memset_0(&v115, 0, sizeof(v115));
        v115.ExceptionCode = -532265403;
        v115.ExceptionAddress = retaddr;
        v115.NumberParameters = 1;
        v115.ExceptionInformation[0] = v49;
        RaiseFailFastException(&v115, 0LL, 0);
      }
      D3D11_SetDebugName(*(struct ID3D11DeviceChild **)(*a3 + 104), "BackBuffer_DepthStencilView_RightEye");
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11DepthStencilView>::operator=((__int64 *)(*a3 + 104), (__int64 *)(*a3 + 56));
    }
    v70 = 1;
  }
  v50 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v107);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v50, &v101);
  if ( v108 )
    std::_Ref_count_base::_Decwref(v108);
  v51 = v101;
  Engine = Spectre::Engine::RenderDevice::GetEngine(v101);
  v53 = (__int64)Engine;
  v85 = Engine;
  if ( v69 )
  {
    v54 = 0;
    v55 = 0LL;
    v56 = v74[0];
    v57 = (__int64)Engine;
    do
    {
      Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceFrameBuffer>((__int64)v51, &v91);
      v78 = (_QWORD *)_RTDynamicCast_0(
                        v91,
                        0LL,
                        &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
                        1);
      v58 = *a3;
      LODWORD(v73) = *(_DWORD *)(*a3 + 44);
      LODWORD(v72) = *(_DWORD *)(v58 + 40);
      v79 = *(_QWORD *)(v58 + 16);
      Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v79);
      v80 = *(_QWORD *)(*a3 + 8);
      Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v80);
      v59 = *(_QWORD *)(v55 + *a3 + 48);
      v84 = v59;
      if ( v59 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
      Spectre::Engine::D3D11::RenderTargetD3D11::Create(v78, &v84, &v80, &v79, (int)v72, (int)v73);
      Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>(v57, &v89);
      Spectre::Engine::FrameBuffer::Create(v89, &v91);
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*a3 + 64 + 48LL * v54), &v89);
      if ( v90 )
        std::_Ref_count_base::_Decref(v90);
      if ( v92 )
        std::_Ref_count_base::_Decref(v92);
      ++v54;
      v55 += 48LL;
      --v56;
    }
    while ( v56 );
    if ( !v71 )
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*a3 + 64), (_QWORD *)(*a3 + 112));
    (*(void (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
    LOBYTE(v60) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 360LL))(a1, v60);
    v53 = (__int64)v85;
  }
  if ( v70 )
  {
    v61 = 0;
    v62 = 0LL;
    v63 = v74[0];
    do
    {
      Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceDepthBuffer>((__int64)v51, &v93);
      v78 = (_QWORD *)_RTDynamicCast_0(
                        v93,
                        0LL,
                        &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                        1);
      v74[0] = *(_QWORD *)(*a3 + 24);
      Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(v74);
      v64 = *(_QWORD **)(v62 + *a3 + 56);
      v77 = v64;
      if ( v64 )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 8LL))(v64);
      Spectre::Engine::D3D11::DepthBufferD3D11::Create(v78, (__int64 *)&v77, v74);
      Spectre::Engine::Engine::CreateResource<Spectre::Engine::DepthBuffer,>(v53, &v87);
      v65 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v105,
              &v93);
      Spectre::Engine::DepthBuffer::Create(v66, v65, 5);
      v67 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v106,
              &v87);
      Spectre::Engine::RenderOutput::SetDepthBuffer((__int64)a1, v67);
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*a3 + 80 + 48LL * v61), &v87);
      if ( v88 )
        std::_Ref_count_base::_Decref(v88);
      if ( v94 )
        std::_Ref_count_base::_Decref(v94);
      ++v61;
      v62 += 48LL;
      --v63;
    }
    while ( v63 );
    if ( !v71 )
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*a3 + 80), (_QWORD *)(*a3 + 128));
  }
  if ( v102 )
    std::_Ref_count_base::_Decref(v102);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
  v68 = v76;
  if ( v76 )
  {
    v76 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v86);
  if ( v104 )
    std::_Ref_count_base::_Decref(v104);
}
