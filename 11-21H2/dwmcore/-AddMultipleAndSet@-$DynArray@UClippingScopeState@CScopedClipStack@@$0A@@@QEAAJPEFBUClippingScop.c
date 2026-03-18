/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800D0618
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // eax
  __int64 v10; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024362, 0xB5u);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x58u, 1, a2);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xC0u);
    }
    else
    {
      v6 = 88 * v2;
      v7 = *(_QWORD *)a1;
      *(_OWORD *)(v6 + v7) = *(_OWORD *)a2;
      *(_OWORD *)(v6 + v7 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v6 + v7 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v6 + v7 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v6 + v7 + 64) = *(_OWORD *)(a2 + 64);
      *(_QWORD *)(v6 + v7 + 80) = *(_QWORD *)(a2 + 80);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}
