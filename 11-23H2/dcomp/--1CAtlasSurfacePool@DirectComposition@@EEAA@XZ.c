/*
 * XREFs of ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C
 * Callers:
 *     ??_GCAtlasSurfacePool@DirectComposition@@EEAAPEAXI@Z @ 0x180089D40 (--_GCAtlasSurfacePool@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x18001EB64 (-DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ @ 0x18001FAA0 (-Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ.c)
 *     ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180021900 (-RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180021E78 (-D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0 (-RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x1800389D4 (-FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::~CAtlasSurfacePool(DirectComposition::CAtlasSurfacePool *this)
{
  bool v1; // zf
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  _QWORD *i; // rcx

  v1 = (*((_BYTE *)this + 172) & 0x10) == 0;
  *(_QWORD *)this = &DirectComposition::CAtlasSurfacePool::`vftable';
  if ( !v1 )
    DirectComposition::CAtlasSurfacePool::D2DEndDraw(this);
  DirectComposition::CAtlasSurfacePool::DisposeAndDeleteWhitePixelSurface(this);
  *((_BYTE *)this + 172) |= 0x40u;
  while ( *((_DWORD *)this + 34) )
    DirectComposition::CAtlasSurface::Dispose(**((DirectComposition::CAtlasSurface ***)this + 14));
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 112, 8LL);
  if ( *((_DWORD *)this + 58) )
  {
    *((_DWORD *)this + 58) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 208, 24LL);
    for ( i = (_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 336LL);
          (DirectComposition::CAtlasSurfacePool *)*i != this;
          i = (_QWORD *)(*i + 240LL) )
    {
      ;
    }
    *i = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = 0LL;
  }
  DirectComposition::CAtlasSurfacePool::FreeDeviceResources(this);
  DirectComposition::CDevice::RemoveNoRefProxy(*((void **)this + 12));
  DirectComposition::CDevice::RemoveNoRefProxy(*((void **)this + 13));
  v3 = (_QWORD *)*((_QWORD *)this + 18);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(v3[16] + 24LL) + 96LL));
  v4 = v3 + 26;
  if ( (*((_BYTE *)this + 172) & 1) != 0 )
    v4 = v3 + 31;
  *v4 -= (unsigned int)(*((_DWORD *)this + 38) * *((_DWORD *)this + 39));
  DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(this);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0x_EventWriteTransfer(v5, &DCOMPEVENT_ATLAS_FREE, this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 208);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 112);
}
