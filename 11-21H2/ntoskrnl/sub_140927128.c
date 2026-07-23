/*
 * XREFs of sub_140927128 @ 0x140927128
 * Callers:
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 * Callees:
 *     sub_1402334A0 @ 0x1402334A0 (sub_1402334A0.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall sub_140927128(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v9[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v9[1], SynchronizationEvent, 0);
  sub_1402334A0((__int64 *)(a1 + 48), v9);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 24);
  sub_1402AFC00(a1 + 24);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = (__int64 *)sub_140347C10(v3, 0LL);
  v7 = (unsigned __int64)v4;
  if ( v4 )
    sub_14029F580(v4, v5, v6);
  KeWaitForSingleObject(&v9[1], Executive, 0, 0, 0LL);
  if ( v7 )
  {
    sub_140347C10(v3, v7);
    sub_140353BB0(v3, v7);
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
