/*
 * XREFs of ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801C21F8
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801C2160 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1801C2F80 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C3A9C (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18027D028 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::EnsureSwapChain(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edi
  struct ICompositionSwapChain **v3; // r14
  __int64 v4; // rdx
  int (__fastcall ***v5)(_QWORD); // rcx
  CDeviceManager *v6; // rcx
  int DefaultDevice; // eax
  __int64 v8; // rcx
  CD3DDevice *v9; // rbx
  int CompositionSwapChain; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  CD3DDevice *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+3Ch] [rbp-1Ch]
  int v19; // [rsp+40h] [rbp-18h]
  char v20; // [rsp+44h] [rbp-14h]
  CD3DDevice *v21; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6 )
  {
    v3 = (struct ICompositionSwapChain **)((char *)this + 168);
    v4 = *((_QWORD *)this + 21);
    if ( !v4 || (v5 = (int (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 12LL)), (**v5)(v5) < 0) )
    {
      CRemoteAppRenderTarget::ReleaseSwapChain(this);
      v21 = 0LL;
      DefaultDevice = CDeviceManager::GetDefaultDevice(v6, &v21);
      v1 = DefaultDevice;
      if ( DefaultDevice >= 0 )
      {
        v9 = v21;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v16 = *((_QWORD *)v21 + 112);
        v17 = DisplayId::None;
        wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v3);
        CompositionSwapChain = CD3DDevice::CreateCompositionSwapChain(
                                 v9,
                                 (const struct D2D_SIZE_U *)this + 13,
                                 (CRemoteAppRenderTarget *)((char *)this + 112),
                                 (const struct RenderTargetInfo *)&v16,
                                 v15,
                                 v3);
        v1 = CompositionSwapChain;
        if ( CompositionSwapChain < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, CompositionSwapChain, 0x1FDu);
        }
        else
        {
          v12 = (__int64)*v3 + *(int *)(*((_QWORD *)*v3 + 1) + 12LL) + 8;
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 40LL))(v12, (char *)this + 144);
          *((_QWORD *)this + 22) = (*(__int64 (__fastcall **)(struct ICompositionSwapChain *))(*(_QWORD *)*v3 + 72LL))(*v3);
          *((_BYTE *)this + 293) = 1;
          *((_BYTE *)this + 141) = 1;
        }
        v13 = v9;
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, DefaultDevice, 0x1F1u);
      v13 = v21;
      if ( v21 )
LABEL_10:
        CD3DDevice::Release(v13);
    }
  }
  return v1;
}
