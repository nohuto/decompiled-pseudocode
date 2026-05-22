/*
 * XREFs of ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8
 * Callers:
 *     ?Release@CDevice@DirectComposition@@UEAAKXZ @ 0x180082D10 (-Release@CDevice@DirectComposition@@UEAAKXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ @ 0x18001CC68 (-Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4 (-FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z.c)
 *     ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ @ 0x1800356CC (-CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$FireEvent@$$V@ApiTelemetryLogger@details@wil@@SAXXZ @ 0x1800642C8 (--$FireEvent@$$V@ApiTelemetryLogger@details@wil@@SAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCProxyTable@DirectComposition@@QEAAPEAXI@Z @ 0x18008551C (--_GCProxyTable@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??R?$default_delete@VChannel@DirectComposition@@@std@@QEBAXPEAVChannel@DirectComposition@@@Z @ 0x18008C48C (--R-$default_delete@VChannel@DirectComposition@@@std@@QEBAXPEAVChannel@DirectComposition@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18008D374 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$map@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@@std@@QEAA@XZ @ 0x18009A690 (--1-$map@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U-$less@PEAUID3D11Devic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@@Z @ 0x1800ED068 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@.c)
 */

void __fastcall DirectComposition::CDevice::~CDevice(DirectComposition::CDevice *this)
{
  wil *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  DirectComposition::CMessageConversationHost *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rcx
  _QWORD **v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD **v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  unsigned int i; // esi
  DirectComposition::CProxyTable *v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v24; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &DirectComposition::CDevice::`vftable'{for `IDCompositionDevice'};
  *((_QWORD *)this + 1) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDevice4'};
  *((_QWORD *)this + 2) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDesktopDevicePartner6'};
  *((_QWORD *)this + 3) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDesktopDeviceRestricted'};
  *((_QWORD *)this + 4) = &DirectComposition::CDevice::`vftable'{for `IDCompositionHolographicDevicePartner4'};
  *((_QWORD *)this + 5) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDeviceInternal2'};
  *((_QWORD *)this + 6) = &DirectComposition::CDevice::`vftable'{for `IDCompositionDeviceDebug'};
  *((_QWORD *)this + 7) = &DirectComposition::CDevice::`vftable'{for `IDCompositionInkTrailDevice'};
  *((_QWORD *)this + 8) = &DirectComposition::CDevice::`vftable'{for `IDCompositionCaptureTest'};
  *((_QWORD *)this + 9) = &DirectComposition::CDevice::`vftable'{for `IDwmChannelProvider'};
  v24 = (_QWORD *)((char *)this + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  if ( !wil::ProcessShutdownInProgress(v2) )
    wil::details::ApiTelemetryLogger::FireEvent<>();
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 58);
  if ( v4 )
    operator delete(v4);
  v5 = (DirectComposition::CMessageConversationHost *)*((_QWORD *)this + 83);
  if ( v5 )
  {
    DirectComposition::CMessageConversationHost::Destroy(v5);
    v6 = *((_QWORD *)this + 83);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *((_QWORD *)this + 83) = 0LL;
    }
  }
  v7 = *((_QWORD *)this + 82);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 82) = 0LL;
  }
  v8 = *((_QWORD *)this + 75);
  if ( v8 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)(v8 + 8));
  *((_DWORD *)this + 114) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 432, 8LL);
  if ( *((_QWORD *)this + 20) )
  {
    do
    {
      DirectComposition::CDevice::FlushKernelCommands(this, 0);
      v10 = *((_QWORD *)this + 20);
      v23 = 0;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 136LL))(v10, &v23);
      if ( v23 )
        DirectComposition::CDevice::CheckForDelayedDestructionObjects(this);
    }
    while ( *((_DWORD *)this + 46) );
  }
  v11 = (_QWORD **)((char *)this + 520);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      break;
    if ( (_QWORD **)v12[1] != v11 || (v13 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
LABEL_30:
      __fastfail(3u);
    *v11 = v13;
    v13[1] = v11;
    v12[3] = 0LL;
    if ( v12 != (_QWORD *)8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*(v12 - 1))(v12 - 1, 1LL);
  }
  v14 = (_QWORD **)((char *)this + 504);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == v14 )
      break;
    if ( (_QWORD **)v15[1] != v14 )
      goto LABEL_30;
    v16 = (_QWORD *)*v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_30;
    *v14 = v16;
    v16[1] = v14;
    v15[3] = 0LL;
    if ( v15 != (_QWORD *)8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*(v15 - 1))(v15 - 1, 1LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 102); ++i )
  {
    v18 = *(DirectComposition::CProxyTable **)(*((_QWORD *)this + 48) + 8LL * i);
    if ( v18 )
      DirectComposition::CProxyTable::`scalar deleting destructor'(v18, v9);
  }
  *((_DWORD *)this + 102) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 384, 8LL);
  v19 = *((_QWORD *)this + 20);
  if ( v19 && (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    McTemplateU0xq_EventWriteTransfer(v21, &DCOMPEVENT_DEVICE_DESTROY, this, v20);
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v24);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 800);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 768);
  std::map<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>::~map<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>((char *)this + 720);
  v22 = *((_QWORD *)this + 87);
  if ( v22 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>(v22, *((_QWORD *)this + 88));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 87),
      (*((_QWORD *)this + 89) - *((_QWORD *)this + 87)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 87) = 0LL;
    *((_QWORD *)this + 88) = 0LL;
    *((_QWORD *)this + 89) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 432);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 384);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 200);
  if ( *((_QWORD *)this + 20) )
    std::default_delete<DirectComposition::Channel>::operator()();
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
}
