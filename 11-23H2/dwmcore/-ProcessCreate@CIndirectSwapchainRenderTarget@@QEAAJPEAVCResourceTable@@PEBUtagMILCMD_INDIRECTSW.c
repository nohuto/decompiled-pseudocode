/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801EEED4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180087F50 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800A22E4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800AEEE0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800F1EDC (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801E6AEC (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E9B00 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801EA178 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EE974 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801EF6C0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x18028FF7C (-OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUI.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  CD3DDevice *v5; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r14
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // r9d
  __int64 v11; // r8
  int Device; // eax
  __int64 v13; // rcx
  int updated; // eax
  int v15; // r12d
  int v16; // r13d
  __int64 v17; // rcx
  __int64 v18; // rcx
  CComposition *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-69h]
  struct CD3DDevice *v22; // [rsp+30h] [rbp-59h] BYREF
  __int64 v23; // [rsp+38h] [rbp-51h]
  __int64 v24; // [rsp+40h] [rbp-49h] BYREF
  struct CVisual *v25; // [rsp+48h] [rbp-41h]
  int v26; // [rsp+50h] [rbp-39h] BYREF
  __int128 v27; // [rsp+54h] [rbp-35h]
  __int64 v28; // [rsp+64h] [rbp-25h]
  __int128 v29; // [rsp+70h] [rbp-19h] BYREF
  enum DXGI_FORMAT v30[4]; // [rsp+80h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp+7h]
  int v32; // [rsp+98h] [rbp+Fh]

  v23 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0xC4u);
  v7 = (void *)a3[1];
  v8 = 0LL;
  v25 = Resource;
  v24 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v29 = 0LL;
  *(_OWORD *)v30 = 0LL;
  if ( Resource )
  {
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a3[2], &v22);
    v9 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Device, 0x21u, 0LL);
      v5 = v22;
      goto LABEL_22;
    }
    v5 = v22;
    updated = CD3DDevice::OpenIndirectSwapchain(v22, v7);
    v9 = updated;
    if ( updated < 0 )
    {
      v21 = 41;
    }
    else
    {
      v7 = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v23 + 56LL))(
                  v23,
                  0LL,
                  (char *)this + 1944);
      v9 = updated;
      if ( updated < 0 )
      {
        v21 = 50;
      }
      else
      {
        updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 243))(
                    *((_QWORD *)this + 243),
                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                    &v24);
        v9 = updated;
        if ( updated < 0 )
        {
          v21 = 51;
        }
        else
        {
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 80LL))(v24, &v29);
          v15 = v29;
          v16 = DWORD1(v29);
          updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v30[0]);
          v9 = updated;
          if ( updated < 0 )
          {
            v21 = 59;
          }
          else
          {
            updated = CRenderTarget::SetRootVisual(this, v25);
            v9 = updated;
            if ( updated < 0 )
            {
              v21 = 62;
            }
            else
            {
              v17 = v23;
              *((_QWORD *)this + 242) = v23;
              if ( v17 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
              *((_DWORD *)this + 26) = v15;
              *((_DWORD *)this + 27) = v16;
              *((_DWORD *)this + 490) = v15;
              *((_DWORD *)this + 491) = v16;
              *((struct _LUID *)this + 244) = a3[2];
              *((_BYTE *)this + 1756) = 1;
              updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(this);
              v9 = updated;
              if ( updated >= 0 )
              {
                COffScreenRenderTarget::ReleaseRenderTargets(this);
                goto LABEL_22;
              }
              v21 = 75;
            }
          }
        }
      }
    }
    v10 = updated;
  }
  else
  {
    v9 = -2003303421;
    v10 = -2003303421;
    v21 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, v21, 0LL);
LABEL_22:
  if ( *((_QWORD *)this + 243) )
  {
    LODWORD(v22) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDevice **))(*(_QWORD *)v23 + 64LL))(v23, 4LL, &v22);
    v18 = *((_QWORD *)this + 243);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      *((_QWORD *)this + 243) = 0LL;
    }
  }
  if ( v9 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v5 )
    CD3DDevice::Release(v5);
  if ( v7 )
    CloseHandle(v7);
  v19 = (CComposition *)*((_QWORD *)this + 2);
  v26 = 19;
  v27 = 0LL;
  DWORD1(v27) = v9;
  v28 = 0LL;
  CComposition::NotifyHelper(v19, (struct MIL_MESSAGE *)&v26, v11);
  return 0LL;
}
