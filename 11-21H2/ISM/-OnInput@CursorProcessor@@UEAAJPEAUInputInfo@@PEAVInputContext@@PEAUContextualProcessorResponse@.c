/*
 * XREFs of ?OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180139410
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180138B0C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 *     ?UpdateMouseCursorPosition@CursorProcessor@@AEAAXPEBUtagPOINT@@@Z @ 0x1801396D8 (-UpdateMouseCursorPosition@CursorProcessor@@AEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CursorProcessor::OnInput(
        CursorProcessor *this,
        const struct tagPOINT *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  LONG x; // ebp
  char v7; // al

  *((_DWORD *)a4 + 2) = 0;
  x = a2->x;
  if ( (a2->x & 0x12) != 0 )
  {
    *((_DWORD *)a4 + 2) = 4;
    v7 = CursorProcessor::CheckAndUpdateCursorOwnerForContext((CursorProcessor *)((char *)this - 8), a3, a2->y);
    if ( (x & 0x10) != 0 )
    {
      CursorProcessor::UpdateMouseCursorPosition((CursorProcessor *)((char *)this - 8), a2 + 46);
    }
    else if ( v7 )
    {
      *((_BYTE *)this + 112) = a2[39].x;
    }
  }
  return 0LL;
}
