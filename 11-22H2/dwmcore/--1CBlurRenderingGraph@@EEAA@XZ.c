/*
 * XREFs of ??1CBlurRenderingGraph@@EEAA@XZ @ 0x1800D1E0C
 * Callers:
 *     ??_ECBlurRenderingGraph@@EEAAPEAXI@Z @ 0x1800D1DD0 (--_ECBlurRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D54D8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CBlurRenderingGraph::~CBlurRenderingGraph(CBlurRenderingGraph *this)
{
  *(_QWORD *)this = &CBlurRenderingGraph::`vftable';
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 24LL);
  *((_BYTE *)this + 200) = 1;
  CExternalEffectGraph::~CExternalEffectGraph(this);
}
