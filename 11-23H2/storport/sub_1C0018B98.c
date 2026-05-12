/*
 * XREFs of sub_1C0018B98 @ 0x1C0018B98
 * Callers:
 *     sub_1C00183B8 @ 0x1C00183B8 (sub_1C00183B8.c)
 *     sub_1C0022594 @ 0x1C0022594 (sub_1C0022594.c)
 *     sub_1C0022954 @ 0x1C0022954 (sub_1C0022954.c)
 * Callees:
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     sub_1C0018C6C @ 0x1C0018C6C (sub_1C0018C6C.c)
 */

void __fastcall sub_1C0018B98(__int64 a1, __int64 a2)
{
  KIRQL v4; // bl
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = sub_1C000889C(a1);
  sub_1C0018C6C(
    a1 + 168,
    (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a2 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a2 + 96))) << 8));
  sub_1C0008914(a1, v4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v5 = (_QWORD *)(a2 + 56);
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*(_DWORD *)(a1 + 160);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
