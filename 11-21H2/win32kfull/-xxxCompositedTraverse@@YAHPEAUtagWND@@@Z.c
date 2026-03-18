/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C016E026
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C016E026 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0239C94 (xxxCompositedPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C016E026 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  struct tagWND *v4; // rax
  struct tagWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v12 = 0LL;
  v2 = *((_QWORD *)a1 + 5);
  v11 = 0LL;
  if ( *(_QWORD *)(v2 + 136) || (*(_BYTE *)(v2 + 17) & 0x10) != 0 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    v1 = 1;
  }
  v4 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v5 = v4;
  while ( v4 )
  {
    v5 = v4;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  ThreadLock((__int64)v5, (__int64 *)&v11);
  do
  {
    if ( !v5 )
      break;
    v9 = xxxCompositedTraverse(v5);
    v5 = (struct tagWND *)*((_QWORD *)v5 + 12);
    if ( v9 )
      v1 = 1;
  }
  while ( ThreadLockExchange((__int64)v5, (__int64)&v11) );
  ThreadUnlock1(v7, v6, v8);
  return v1;
}
