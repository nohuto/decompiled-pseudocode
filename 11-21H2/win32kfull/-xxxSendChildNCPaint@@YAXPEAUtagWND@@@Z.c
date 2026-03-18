/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C005F954
 * Callers:
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 * Callees:
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F99D0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  struct tagWND *i; // rbx
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[2] = 0LL;
  v3 = gptiCurrent;
  v6[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v6;
  v6[1] = 0LL;
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    v5 = *((_QWORD *)i + 5);
    if ( !*(_QWORD *)(v5 + 136) && (*(_BYTE *)(v5 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v6);
      xxxSendNCPaint(i, (HRGN)1);
    }
  }
  ThreadUnlock1(a1, v3, a3);
}
