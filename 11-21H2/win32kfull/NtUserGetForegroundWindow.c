/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C0078AF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rbx
  const struct tagWND *v1; // rcx
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit();
  v0 = 0LL;
  v1 = (const struct tagWND *)gpqForeground;
  if ( gpqForeground )
  {
    if ( *(_QWORD *)(gpqForeground + 120LL) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v1 = *(const struct tagWND **)(gpqForeground + 120LL);
      if ( *(_QWORD *)(ThreadWin32Thread + 456) == *((_QWORD *)v1 + 3) )
        v0 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v1);
    }
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
