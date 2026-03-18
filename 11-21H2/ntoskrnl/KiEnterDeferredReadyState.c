/*
 * XREFs of KiEnterDeferredReadyState @ 0x1402F69A0
 * Callers:
 *     KiReadyOutSwappedThreads @ 0x1402112F8 (KiReadyOutSwappedThreads.c)
 *     KiFastReadyThread @ 0x140294574 (KiFastReadyThread.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiSearchForNewThread @ 0x140343DC0 (KiSearchForNewThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14035EE9C (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnterDeferredReadyState(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 388);
  if ( (_BYTE)result == 1 )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
  }
  else if ( (_BYTE)result == 5 )
  {
    result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
    if ( *(_BYTE *)(a1 + 391) )
      *(_QWORD *)(a1 + 1000) += result;
    else
      *(_QWORD *)(a1 + 992) += result;
  }
  *(_BYTE *)(a1 + 388) = 7;
  return result;
}
