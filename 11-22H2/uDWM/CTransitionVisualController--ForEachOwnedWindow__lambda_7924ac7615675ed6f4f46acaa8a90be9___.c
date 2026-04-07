/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___ @ 0x1800E9FC4
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___ @ 0x1800E9FC4 (CTransitionVisualController--ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EC850 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___ @ 0x1800E9FC4 (CTransitionVisualController--ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___.c)
 *     _lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator() @ 0x1800EA43C (_lambda_7924ac7615675ed6f4f46acaa8a90be9_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi
  int v9; // eax

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 680) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 440);
    if ( !v6 || (*(_BYTE *)(v6 + 248) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v8 + 680) & 0xFFF) == 0xFFF )
        {
          v9 = lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i));
          v3 = v9;
          if ( v9 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___(
                   v8,
                   a2,
                   0LL,
                   (unsigned int)v9);
        }
      }
    }
  }
  return (unsigned int)v3;
}
