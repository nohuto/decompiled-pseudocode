/*
 * XREFs of ??1CGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x180030D60
 * Callers:
 *     ??_GCGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x180030D00 (--_GCGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CGeneratedVirtualSurfacePrimitive::~CGeneratedVirtualSurfacePrimitive(
        DirectComposition::CGeneratedVirtualSurfacePrimitive *this)
{
  _OWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r9
  _QWORD *v4; // r8

  *(_QWORD *)this = &DirectComposition::CGeneratedVirtualSurfacePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  *((_QWORD *)this + 2) = &DirectComposition::CTexturedRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  v1 = (_OWORD *)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 8);
    if ( *(_OWORD **)(v2 + 8) != v1 || (v4 = (_QWORD *)*((_QWORD *)this + 4), (_OWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v2;
    *(_QWORD *)(v2 + 8) = v4;
    *v1 = 0LL;
    --*(_DWORD *)(v3 + 248);
  }
  DirectComposition::CTexturedRectanglePrimitive::~CTexturedRectanglePrimitive(this);
}
