/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014664C
 * Callers:
 *     xxxCloseClipboard @ 0x1C00CCFD0 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01459BC (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C014655C (xxxSetClipboardViewer.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00CA3D4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 i; // rdi
  __int64 v9; // rcx
  int v10; // eax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 16) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 11) )
  {
    v2 = *((_QWORD *)a1 + 13);
    if ( v2 )
    {
      v11[2] = 0LL;
      *((_QWORD *)a1 + 11) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v11;
      v11[1] = v2;
      HMLockObject(v2);
      v4 = (_QWORD *)*((_QWORD *)a1 + 14);
      if ( v4 )
        v4 = (_QWORD *)*v4;
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 13), 0x308u, (__int64)v4, 0LL, 1);
      ThreadUnlock1(v6, v5, v7);
      *((_QWORD *)a1 + 11) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 19); i; i = *(_QWORD *)(i + 240) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(i + 16) + 424LL);
    if ( v9 )
      v9 = *(_QWORD *)(v9 + 880);
    v10 = CountNumClipFormatForIL(v9, (__int64)a1);
    PostMessage(i, 797, v10, 0);
  }
}
