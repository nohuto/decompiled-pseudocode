/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0145B10
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00C9B80 (xxxEmptyClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01459BC (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  struct tagWND *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD v10[3]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+68h] [rbp-20h] BYREF
  __int64 v12; // [rsp+78h] [rbp-10h]
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF

  v10[2] = 0LL;
  v13 = 0LL;
  v2 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v11 = 0LL;
  v12 = 0LL;
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = v2;
    HMLockObject(v2);
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (unsigned __int64 *)v2,
              0x307u,
              0LL,
              0LL,
              2u,
              0x1388u,
              (unsigned __int64 *)&v13,
              1,
              0) )
        xxxSendNotifyMessage(v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v8 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)v2 + 2) + 424LL), 0LL, 2LL);
      v9 = v8;
      if ( v8 )
        PushW32ThreadLock(v8, &v11, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout((unsigned __int64 *)v2, a2, 0LL, 0LL, 0x40u, 0, (unsigned __int64 *)&v13, 1, 0);
      if ( v9 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v11);
    }
    ThreadUnlock1(v6, v5, v7);
  }
}
