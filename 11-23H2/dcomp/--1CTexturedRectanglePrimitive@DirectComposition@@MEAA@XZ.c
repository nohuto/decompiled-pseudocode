/*
 * XREFs of ??1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ @ 0x180030F54
 * Callers:
 *     ??_ECTexturedRectanglePrimitive@DirectComposition@@MEAAPEAXI@Z @ 0x18000BFA0 (--_ECTexturedRectanglePrimitive@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??1CGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x180030D60 (--1CGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CTexturedRectanglePrimitive::~CTexturedRectanglePrimitive(
        DirectComposition::CTexturedRectanglePrimitive *this)
{
  __int64 v1; // rdi
  char *v2; // rsi
  DirectComposition::CDeviceLock *v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 i; // r9
  __int64 v9; // rcx

  v1 = *((_QWORD *)this + 5);
  v2 = (char *)this + 16;
  *(_QWORD *)this = &DirectComposition::CTexturedRectanglePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  v4 = (DirectComposition::CDeviceLock *)(v1 + 96);
  *((_QWORD *)this + 2) = &DirectComposition::CTexturedRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  DirectComposition::CDeviceLock::Enter(v4);
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 88);
    v7 = 0LL;
    for ( i = *(_QWORD *)(v5 + 64); (unsigned int)v7 < v6; v7 = (unsigned int)(v7 + 1) )
    {
      if ( v2 == *(char **)(i + 8 * v7) )
        break;
    }
    if ( (unsigned int)v7 < v6 )
    {
      while ( (unsigned int)v7 < v6 - 1 )
      {
        *(_QWORD *)(i + 8 * v7) = *(_QWORD *)(i + 8LL * (unsigned int)(v7 + 1));
        v7 = (unsigned int)(v7 + 1);
        v6 = *(_DWORD *)(v5 + 88);
      }
      *(_DWORD *)(v5 + 88) = v6 - 1;
    }
  }
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v9);
  if ( v4 )
    DirectComposition::CDeviceLock::Leave(v4);
  DirectComposition::CPrimitive::~CPrimitive(this);
}
