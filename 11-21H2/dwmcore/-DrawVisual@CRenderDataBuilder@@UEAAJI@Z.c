/*
 * XREFs of ?DrawVisual@CRenderDataBuilder@@UEAAJI@Z @ 0x1800EDA20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawVisual(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx

  v4 = DynArrayImpl<0>::Grow((unsigned __int64)this + 16, 1u, 12, 0, 0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0xEAu);
  }
  else
  {
    v7 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v7 = 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *(_DWORD *)(v7 + 4) = 463;
    *(_DWORD *)(v7 + 8) = a2;
    *((_DWORD *)this + 10) += 12;
  }
  return v6;
}
