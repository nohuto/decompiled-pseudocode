/*
 * XREFs of ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800E47A4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800BDA30 (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateHolographicSlate(CTopLevelWindow *this)
{
  struct CHolographicSlate **v1; // rsi
  unsigned int v3; // edi
  struct CVisual *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  signed int v7; // r9d
  signed int v8; // r8d
  HWND v9; // rcx
  int Slate; // eax

  v1 = (struct CHolographicSlate **)((char *)this + 824);
  v3 = 0;
  if ( !*((_QWORD *)this + 103) )
  {
    v4 = (struct CVisual *)*((_QWORD *)this + 62);
    v5 = *((_QWORD *)v4 + 3);
    *((_QWORD *)this + 104) = v5;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 104) + 32LL), *((struct CVisual **)this + 62));
      v4 = (struct CVisual *)*((_QWORD *)this + 62);
    }
    v6 = *((_QWORD *)this + 94);
    v7 = *(_DWORD *)(v6 + 244) - *(_DWORD *)(v6 + 236);
    if ( v7 < 0 )
      v7 = 0;
    v8 = *(_DWORD *)(v6 + 240) - *(_DWORD *)(v6 + 232);
    v9 = *(HWND *)(v6 + 40);
    if ( v8 < 0 )
      v8 = 0;
    Slate = CHolographicSlate::CreateSlate(v9, v4, v8, v7, v1);
    v3 = Slate;
    if ( Slate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Slate, 0x199u);
  }
  return v3;
}
