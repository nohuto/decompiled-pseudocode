/*
 * XREFs of sub_1406F7F40 @ 0x1406F7F40
 * Callers:
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_140682D84 @ 0x140682D84 (sub_140682D84.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D75D4 @ 0x1402D75D4 (sub_1402D75D4.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_1406F7F40(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *v8; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int64 v11; // r14
  ULONG_PTR v13; // rbp

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
    v8 = sub_1402D75D4(a1);
  else
    v8 = sub_1403126F0(a2);
  v9 = (unsigned __int64)v8;
  if ( a3 )
  {
    while ( 1 )
    {
      v11 = sub_140281C00(v9);
      if ( a3 == 1 )
        break;
      v13 = v10 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10 + 40);
      sub_1402AFC00(v13);
      v9 = v11;
      if ( !--a3 )
        goto LABEL_6;
    }
    sub_140281C44((__int64)CurrentThread, v10);
  }
LABEL_6:
  if ( a4 )
    return sub_140281A58((__int64)CurrentThread, a1);
  else
    return sub_14030EA00((__int64)CurrentThread, a1);
}
