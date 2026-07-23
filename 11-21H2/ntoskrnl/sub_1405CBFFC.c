/*
 * XREFs of sub_1405CBFFC @ 0x1405CBFFC
 * Callers:
 *     sub_14098BDD4 @ 0x14098BDD4 (sub_14098BDD4.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char __fastcall sub_1405CBFFC(struct _KEVENT **a1)
{
  struct _KEVENT *v2; // rcx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (struct _KEVENT *)a1 )
      break;
    v3 = *(_QWORD *)&v2->Header.Lock;
    if ( (struct _KEVENT **)v2->Header.WaitListHead.Flink != a1 || *(struct _KEVENT **)(v3 + 8) != v2 )
      __fastfail(3u);
    *a1 = (struct _KEVENT *)v3;
    *(_QWORD *)(v3 + 8) = a1;
    v2->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v2;
    *(_QWORD *)&v2->Header.Lock = v2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v2[-27].Header.WaitListHead.Blink + 1, 0xFFFFFFFF) == 1 )
      KeSetEvent(v2 - 26, 0, 0);
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C23CB8, 0LL);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
