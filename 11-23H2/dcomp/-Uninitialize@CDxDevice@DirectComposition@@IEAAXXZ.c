/*
 * XREFs of ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60
 * Callers:
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID3D11RenderTargetView@@@@YAXPEAUID3D11RenderTargetView@@@Z @ 0x18001912C (--$ReleaseInterfaceNoNULL@UID3D11RenderTargetView@@@@YAXPEAUID3D11RenderTargetView@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID3D11Texture2D@@@@YAXPEAUID3D11Texture2D@@@Z @ 0x18001B16C (--$ReleaseInterfaceNoNULL@UID3D11Texture2D@@@@YAXPEAUID3D11Texture2D@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Multithread@@@@YAXAEAPEAUID2D1Multithread@@@Z @ 0x18001B198 (--$ReleaseInterface@UID2D1Multithread@@@@YAXAEAPEAUID2D1Multithread@@@Z.c)
 *     ??$ReleaseInterface@UID3D11PartnerDevice@@@@YAXAEAPEAUID3D11PartnerDevice@@@Z @ 0x18001B1D4 (--$ReleaseInterface@UID3D11PartnerDevice@@@@YAXAEAPEAUID3D11PartnerDevice@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDxDevice::Uninitialize(DirectComposition::CDxDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int i; // edi
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int j; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct DirectComposition::CDxDevice *v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 17) = 0LL;
  }
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 18) = 0LL;
  }
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 19) = 0LL;
  }
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 20) = 0LL;
  }
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 21) = 0LL;
  }
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 22) = 0LL;
  }
  operator delete(*((void **)this + 23));
  operator delete(*((void **)this + 24));
  for ( i = 0; i < *((_DWORD *)this + 58); ++i )
  {
    v10 = 32LL * i;
    ReleaseInterfaceNoNULL<ID3D11Texture2D>(*(_QWORD *)(*((_QWORD *)this + 26) + v10 + 8));
    v11 = *(_QWORD *)(*((_QWORD *)this + 26) + v10 + 16);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    ReleaseInterfaceNoNULL<ID3D11RenderTargetView>(*(_QWORD *)(*((_QWORD *)this + 26) + v10 + 24));
  }
  *((_DWORD *)this + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 208, 0x20u);
  if ( *((_QWORD *)this + 6) )
  {
    DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(&v19, (DirectComposition::CDevice **)this);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
    DirectComposition::MultithreadDeviceLock::Leave(v19);
  }
  for ( j = 0; j < *((_DWORD *)this + 68); ++j )
    ReleaseInterfaceNoNULL<ID3D11Texture2D>(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL * j + 8));
  v13 = *((_QWORD *)this + 10);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 10) = 0LL;
  }
  v14 = *((_QWORD *)this + 11);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    *((_QWORD *)this + 11) = 0LL;
  }
  v15 = *((_QWORD *)this + 9);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    *((_QWORD *)this + 9) = 0LL;
  }
  v16 = *((_QWORD *)this + 8);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    *((_QWORD *)this + 8) = 0LL;
  }
  v17 = *((_QWORD *)this + 7);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    *((_QWORD *)this + 7) = 0LL;
  }
  ReleaseInterface<ID3D11PartnerDevice>((__int64 *)this + 6);
  v18 = *((_QWORD *)this + 4);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    *((_QWORD *)this + 4) = 0LL;
  }
  ReleaseInterface<ID2D1Multithread>((__int64 *)this + 5);
  ReleaseInterface<ID3D11Device1>((__int64 *)this + 3);
}
