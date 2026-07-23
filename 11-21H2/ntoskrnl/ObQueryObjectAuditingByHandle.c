/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x1407A2A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rbx
  char v5; // r14
  struct _EX_RUNDOWN_REF *v6; // rsi
  ULONG_PTR Count; // rdi
  volatile signed __int64 *v8; // rax
  __int64 v9; // rbx
  NTSTATUS v10; // ebx
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (__int64)Handle;
  v5 = 0;
  v6 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)CurrentThread + 23);
  if ( sub_1402F3558((unsigned __int64)Handle, *((_BYTE *)CurrentThread + 562)) )
  {
    Count = qword_140C24F88;
    v4 ^= 0xFFFFFFFF80000000uLL;
  }
  else if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
  {
    Count = sub_14066B3D8(v6);
    if ( !Count )
      return -1073741816;
    v5 = 1;
  }
  else
  {
    Count = v6[174].Count;
  }
  --*((_WORD *)CurrentThread + 242);
  v8 = sub_1407A1AC0((unsigned int *)Count, v4);
  if ( v8 )
  {
    v9 = *(__int64 *)v8 >> 17;
    _InterlockedExchangeAdd64(v8, 1uLL);
    _InterlockedOr(v12, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
    *GenerateOnClose = (v9 & 4) != 0;
    v10 = 0;
  }
  else
  {
    v10 = -1073741816;
  }
  sub_1402F9540((__int64)CurrentThread);
  if ( v5 )
    sub_1402AD030(v6 + 139);
  return v10;
}
