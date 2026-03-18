/*
 * XREFs of ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800356EC
 * Callers:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x180031618 (--1CExternalEffectGraph@@MEAA@XZ.c)
 *     ??_GCBrushRenderingGraph@@MEAAPEAXI@Z @ 0x180035480 (--_GCBrushRenderingGraph@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180035778 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  __int64 i; // rdi
  CRenderingTechnique *v5; // rcx
  CCompiledEffectCache *v6; // rcx

  v2 = *((_BYTE *)this + 199) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v6 = (CCompiledEffectCache *)*((_QWORD *)this + 23);
    if ( v6 )
      CCompiledEffectCache::`scalar deleting destructor'(v6);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v5 = *(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * i);
    if ( v5 )
      CRenderingTechnique::`scalar deleting destructor'(v5, a2);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 144);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 16);
}
