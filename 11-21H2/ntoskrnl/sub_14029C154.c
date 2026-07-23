/*
 * XREFs of sub_14029C154 @ 0x14029C154
 * Callers:
 *     CcPreparePinWrite @ 0x140705F90 (CcPreparePinWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140706164 @ 0x140706164 (sub_140706164.c)
 */

__int64 __fastcall sub_14029C154(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, __int64 *a5)
{
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 *v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  __int64 result; // rax
  KIRQL OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  __int64 v23; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *v24; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  int v26; // [rsp+B0h] [rbp+8h]
  char v27; // [rsp+C0h] [rbp+18h] BYREF
  _QWORD *v28; // [rsp+C8h] [rbp+20h]

  v28 = a4;
  v26 = a1;
  v6 = (int)a2;
  v22 = 0LL;
  v21 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v27 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( (*(_DWORD *)(v8 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v8 + 528) + 704LL), &LockHandle);
    *(_DWORD *)(v8 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  v9 = *((unsigned __int8 *)CurrentThread + 1388) + 2 * *((_DWORD *)CurrentThread + 342);
  v10 = a5;
  sub_140706164(v26, v6, a3, 1, (__int64)&v22, (__int64)a5);
  v11 = *v10;
  v23 = v11;
  v12 = v21;
  while ( v12 )
  {
    v27 = 1;
    *((_BYTE *)CurrentThread + 1388) = 1;
    if ( --v12 > *((_DWORD *)CurrentThread + 342) )
    {
      v13 = v12;
      if ( v12 > 0xF )
        v13 = 15;
      *((_DWORD *)CurrentThread + 342) = v13;
    }
    sub_140328690(v11, 1LL, 5LL, &v27);
    if ( !v27 )
      sub_140328690(v11, 1LL, 4LL, 0LL);
    v11 += 4096LL;
    v23 = v11;
  }
  *((_BYTE *)CurrentThread + 1388) = v9 & 1;
  *((_DWORD *)CurrentThread + 342) = v9 >> 1;
  __addgsdword(0x8490u, *((_DWORD *)KeGetCurrentThread() + 359));
  result = v22;
  *v28 = v22;
  return result;
}
