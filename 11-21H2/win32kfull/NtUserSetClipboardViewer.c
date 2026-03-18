/*
 * XREFs of NtUserSetClipboardViewer @ 0x1C01464C0
 * Callers:
 *     <none>
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxSetClipboardViewer @ 0x1C014655C (xxxSetClipboardViewer.c)
 */

__int64 __fastcall NtUserSetClipboardViewer(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadLock(v4, (__int64 *)&v10);
  v5 = (__int64 *)xxxSetClipboardViewer(v4);
  if ( v5 )
    v2 = *v5;
  ThreadUnlock1(v7, v6, v8);
LABEL_6:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
