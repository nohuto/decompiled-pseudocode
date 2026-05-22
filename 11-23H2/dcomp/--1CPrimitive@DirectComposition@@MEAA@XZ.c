/*
 * XREFs of ??1CPrimitive@DirectComposition@@MEAA@XZ @ 0x180032364
 * Callers:
 *     ??1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ @ 0x180030F54 (--1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ.c)
 *     ??1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x18003ABE4 (--1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ.c)
 *     ??1CDynamicColorRectanglePrimitive@DirectComposition@@EEAA@XZ @ 0x1800F7ACC (--1CDynamicColorRectanglePrimitive@DirectComposition@@EEAA@XZ.c)
 *     ??_ECPrimitive@DirectComposition@@MEAAPEAXI@Z @ 0x1800F9210 (--_ECPrimitive@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??_GCSolidColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x1800FB4E0 (--_GCSolidColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9374 (-SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ?SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9600 (-SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 */

void __fastcall DirectComposition::CPrimitive::~CPrimitive(DirectComposition::CPrimitive *this)
{
  __int64 v1; // rdi
  char *v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 i; // r9

  v1 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &DirectComposition::CPrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  v2 = (char *)this + 16;
  *((_QWORD *)this + 2) = &DirectComposition::CSolidColorRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  v4 = *(_QWORD *)(v1 + 96);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) )
      *(_BYTE *)(v1 + 148) = 1;
    ++*(_DWORD *)(v1 + 144);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 104));
  }
  if ( *((_QWORD *)this + 27) )
    DirectComposition::CPrimitive::SetColorBrushAtlasSurfacePool(this, 0LL);
  if ( *((_QWORD *)this + 28) )
    DirectComposition::CPrimitive::SetOpacityBrushAtlasSurfacePool(this, 0LL);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    v8 = *(_DWORD *)(v5 + 88);
    v9 = 0LL;
    for ( i = *(_QWORD *)(v5 + 64); (unsigned int)v9 < v8; v9 = (unsigned int)(v9 + 1) )
    {
      if ( v2 == *(char **)(i + 8 * v9) )
        break;
    }
    if ( (unsigned int)v9 < v8 )
    {
      while ( (unsigned int)v9 < v8 - 1 )
      {
        *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8LL * (unsigned int)(v9 + 1));
        v9 = (unsigned int)(v9 + 1);
        v8 = *(_DWORD *)(v5 + 88);
      }
      *(_DWORD *)(v5 + 88) = v8 - 1;
    }
  }
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v6);
  DirectComposition::CDeviceLock::Leave((DirectComposition::CDeviceLock *)(*((_QWORD *)this + 5) + 96LL));
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
