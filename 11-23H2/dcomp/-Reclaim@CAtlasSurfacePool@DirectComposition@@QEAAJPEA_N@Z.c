/*
 * XREFs of ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00
 * Callers:
 *     ?ReclaimSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJPEA_N@Z @ 0x180013E6C (-ReclaimSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJPEA_N@Z.c)
 *     ?ReclaimSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJPEA_N@Z @ 0x180013FD4 (-ReclaimSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?SurfaceReclaimed@CAtlasSurface@DirectComposition@@QEAAJ_N0@Z @ 0x180013DCC (-SurfaceReclaimed@CAtlasSurface@DirectComposition@@QEAAJ_N0@Z.c)
 *     ?ReclaimResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@PEA_N1@Z @ 0x180013DF0 (-ReclaimResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@PEA_N1@Z.c)
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034E7C (-PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x1800389D4 (-FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqtt_EventWriteTransfer @ 0x1800EA51C (McTemplateU0xqqtt_EventWriteTransfer.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::Reclaim(DirectComposition::CAtlasSurfacePool *this, bool *a2)
{
  int v2; // edi
  bool v4; // zf
  __int64 (__fastcall ***v6)(_QWORD, GUID *, struct IDXGIResource **); // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // si
  __int64 v13; // rcx
  void **v14; // r14
  bool v15; // bp
  __int64 v16; // r14
  const void *retaddr; // [rsp+68h] [rbp+0h]
  bool v19; // [rsp+70h] [rbp+8h] BYREF
  bool v20; // [rsp+78h] [rbp+10h] BYREF
  struct IDXGIResource *v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v4 = (*((_BYTE *)this + 172) & 8) == 0;
  v19 = 0;
  v20 = 0;
  *a2 = 0;
  if ( v4 )
    return (unsigned int)v2;
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIResource **))*((_QWORD *)this + 2);
  v21 = 0LL;
  v7 = (**v6)(v6, &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b, &v21);
  if ( v7 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v7, retaddr);
  v8 = DirectComposition::CDxDevice::ReclaimResources(
         (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
         v21,
         &v19,
         &v20);
  LODWORD(v11) = (_DWORD)v21;
  v2 = v8;
  if ( v21 )
    ((void (__fastcall *)(struct IDXGIResource *))v21->lpVtbl->Release)(v21);
  v12 = v19;
  if ( !v19 )
  {
    if ( v2 < 0 )
      return (unsigned int)v2;
    v13 = *((_QWORD *)this + 12);
    v14 = (void **)((char *)this + 24);
    if ( v13 )
    {
      v2 = DirectComposition::CResourceProxy::SetHandleProperty((DirectComposition::CResourceProxy *)(v13 + 8), 0, *v14);
      if ( v2 < 0 )
        return (unsigned int)v2;
    }
    v11 = *((_QWORD *)this + 13);
    if ( !v11 )
      goto LABEL_12;
    v2 = DirectComposition::CResourceProxy::SetHandleProperty((DirectComposition::CResourceProxy *)(v11 + 8), 0, *v14);
  }
  if ( v2 < 0 )
    return (unsigned int)v2;
LABEL_12:
  v15 = v20;
  if ( *((_QWORD *)this + 25) )
  {
    if ( !v12 && v20 )
      DirectComposition::CAtlasSurfacePool::PaintWhitePixel(this);
    DirectComposition::CAtlasSurface::SurfaceReclaimed(*((DirectComposition::CAtlasSurface **)this + 25), v12, v15);
  }
  v16 = 0LL;
  do
  {
    if ( (unsigned int)v16 >= *((_DWORD *)this + 34) )
      break;
    v2 = 0;
    v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v16);
    v11 = *(_QWORD *)(v9 + 96);
    if ( v11 && (unsigned int)(*(_DWORD *)(v9 + 24) - 2) <= 1 )
    {
      LOBYTE(v10) = v15;
      LOBYTE(v9) = v12;
      v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, v9, v10);
    }
    v16 = (unsigned int)(v16 + 1);
  }
  while ( v2 >= 0 );
  if ( v12 )
    DirectComposition::CAtlasSurfacePool::FreeDeviceResources(this);
  if ( v2 >= 0 )
  {
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x10) != 0 )
      McTemplateU0xqqtt_EventWriteTransfer(
        v11,
        v9,
        (_DWORD)this,
        *((_DWORD *)this + 38),
        *((_DWORD *)this + 39),
        v15,
        v12);
    *((_BYTE *)this + 172) &= ~8u;
    *a2 = v15;
  }
  return (unsigned int)v2;
}
