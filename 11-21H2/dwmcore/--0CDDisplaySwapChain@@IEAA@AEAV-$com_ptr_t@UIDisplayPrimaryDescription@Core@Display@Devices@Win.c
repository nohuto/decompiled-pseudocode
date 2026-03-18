/*
 * XREFs of ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayVBlankFenceResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180281D64
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??0IOverlaySwapChain@@QEAA@XZ @ 0x18001F2C8 (--0IOverlaySwapChain@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180031174 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDDisplayEventListener@@@?$vector@PEAVIDDisplayEventListener@@V?$allocator@PEAVIDDisplayEventListener@@@std@@@std@@QEAAPEAPEAVIDDisplayEventListener@@QEAPEAV2@AEBQEAV2@@Z @ 0x18028139C (--$_Emplace_reallocate@AEBQEAVIDDisplayEventListener@@@-$vector@PEAVIDDisplayEventListener@@V-$a.c)
 *     ??4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180282D30 (--4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180282EE8 (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??4DDisplayVBlankFenceResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180282FB4 (--4DDisplayVBlankFenceResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 CDDisplaySwapChain::CDDisplaySwapChain(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        ...)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  SIZE_T size_of; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rax
  _OWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  CD3DDevice *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v29; // [rsp+88h] [rbp+40h] BYREF
  va_list va; // [rsp+88h] [rbp+40h]
  _OWORD *v31; // [rsp+90h] [rbp+48h]
  va_list va1; // [rsp+98h] [rbp+50h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _OWORD *);
  *(_QWORD *)(a1 + 8) = &CDDisplaySwapChain::`vbtable'{for `ISwapChain'};
  *(_QWORD *)(a1 + 32) = &CDDisplaySwapChain::`vbtable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 536) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 560) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  IOverlaySwapChain::IOverlaySwapChain((IOverlaySwapChain *)a1);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 32) + 4LL) + a1 + 32) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 32) + 8LL) + a1 + 32) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 32) + 8LL) + a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = &CDDisplaySwapChain::`vftable'{for `CMILCOMBaseT<IOverlaySwapChain>'};
  *(_QWORD *)(a1 + 24) = &CDDisplaySwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 64) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 72) = &CDDisplaySwapChain::`vftable'{for `IDDisplayEventListener'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 4LL) + a1 + 8) = &CDDisplaySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 8LL) + a1 + 8) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 12LL) + a1 + 8) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  v10 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL);
  *(_DWORD *)(v10 + a1 + 4) = v10 - 504;
  v11 = *(int *)(*(_QWORD *)(a1 + 8) + 8LL);
  *(_DWORD *)(v11 + a1 + 4) = v11 - 520;
  v12 = *(int *)(*(_QWORD *)(a1 + 8) + 12LL);
  *(_DWORD *)(v12 + a1 + 4) = v12 - 544;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v14 = v14;
  v14[1] = v14;
  *(_QWORD *)(a1 + 104) = v14;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  v15 = (__int64 *)(a1 + 272);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 264) = -1;
  *(_DWORD *)(a1 + 268) = -1;
  v16 = v29;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = *(_QWORD *)v16;
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(v16 + 8);
  v17 = v31;
  *(_OWORD *)(a1 + 324) = *v31;
  *(_QWORD *)(a1 + 340) = *((_QWORD *)v17 + 2);
  *(_DWORD *)(a1 + 348) = 0;
  *(_BYTE *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = a1 + 368;
  *(_DWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  v18 = *a2;
  *a2 = 0LL;
  v19 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *a3;
  *a3 = 0LL;
  v21 = *(CD3DDevice **)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v20;
  if ( v21 )
    CD3DDevice::Release(v21);
  DDisplayTaskPoolResources::operator=(a1 + 136, a4);
  DDisplayVBlankFenceResources::operator=(a1 + 168, a5);
  DDisplayTargetResources::operator=(a1 + 184, a6);
  if ( v15 != a7 )
  {
    v22 = *v15;
    *v15 = *a7;
    v23 = a7[1];
    *a7 = v22;
    v24 = *(_QWORD *)(a1 + 280);
    *(_QWORD *)(a1 + 280) = v23;
    v25 = a7[2];
    a7[1] = v24;
    v26 = *(_QWORD *)(a1 + 288);
    *(_QWORD *)(a1 + 288) = v25;
    a7[2] = v26;
  }
  v29 = a1 + 72;
  if ( *((_QWORD *)&xmmword_1803D39E8 + 1) == qword_1803D39F8 )
  {
    std::vector<IDDisplayEventListener *>::_Emplace_reallocate<IDDisplayEventListener * const &>(
      (const void **)&xmmword_1803D39E8,
      *((_BYTE **)&xmmword_1803D39E8 + 1),
      (__int64 *)va);
  }
  else
  {
    **((_QWORD **)&xmmword_1803D39E8 + 1) = a1 + 72;
    *((_QWORD *)&xmmword_1803D39E8 + 1) += 8LL;
  }
  return a1;
}
