/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x1406109E0
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B437C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     WheapWorkQueueAddItem @ 0x140613EE0 (WheapWorkQueueAddItem.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  _QWORD *WheaInfo; // rsi
  unsigned int v3; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  v3 = Src[5] + 40;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v3, 1634035799LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  Pool2[4] = v3;
  Pool2[6] = 2;
  memmove(Pool2 + 10, Src, (unsigned int)Src[5]);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
