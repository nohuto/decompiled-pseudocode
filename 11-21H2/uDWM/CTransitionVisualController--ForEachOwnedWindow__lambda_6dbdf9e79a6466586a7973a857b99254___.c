/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E965C
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E965C (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800EF018 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E965C (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EE360 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // ebx
  __int64 v6; // rax
  __int64 i; // rsi
  __int64 v8; // rbp

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 672) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 440);
    if ( !v6 || (*(_BYTE *)(v6 + 248) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v8 + 672) & 0xFFF) == 0xFFF )
        {
          v3 = 0;
          if ( *(_QWORD *)(v8 + 440) && CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v8 + 40)) )
            v3 = CVisual::RenderRecursive(*(CVisual **)(v8 + 440));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
