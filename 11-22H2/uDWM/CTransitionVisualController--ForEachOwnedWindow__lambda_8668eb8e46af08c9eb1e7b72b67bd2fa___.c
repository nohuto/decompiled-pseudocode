/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800EA080
 * Callers:
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DED5C (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800EA080 (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800EA080 (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800EC6C8 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

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
          CTransitionVisualController::_RestoreWindowVisual(
            (CTransitionVisualController *)a1,
            *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * i));
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
