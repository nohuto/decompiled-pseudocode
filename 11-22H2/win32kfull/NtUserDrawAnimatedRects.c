/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C01CEAE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxDrawAnimatedRects @ 0x1C0224A30 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWND *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+58h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( a1 )
  {
    v5 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_6;
  }
  else
  {
    v5 = 0LL;
  }
  ThreadLock(v5, &v12);
  v2 = xxxDrawAnimatedRects(v5);
  ThreadUnlock1(v9, v8, v10);
LABEL_6:
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
