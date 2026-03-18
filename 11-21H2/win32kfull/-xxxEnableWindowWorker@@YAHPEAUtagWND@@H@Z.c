/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00AECA8
 * Callers:
 *     xxxEnableWindow @ 0x1C00AEC3C (xxxEnableWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F2550 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  char v5; // si
  __int64 v7; // rdx
  __int64 v8; // r8

  v2 = 0;
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  if ( a2 )
  {
    SetOrClrWF(0, a1, 0xF08u, 0);
    *((_DWORD *)a1 + 80) &= ~0x100u;
  }
  else
  {
    xxxSendMessage((ULONG_PTR)a1);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
      xxxSetFocus(0LL, v7, v8);
    SetOrClrWF(1, a1, 0xF08u, 0);
  }
  if ( (v5 == 0) != a2 )
  {
    xxxWindowEvent(0x800Au, a1, 0, 0, 0);
    xxxSendMessage((ULONG_PTR)a1);
  }
  LOBYTE(v2) = v5 != 0;
  return v2;
}
