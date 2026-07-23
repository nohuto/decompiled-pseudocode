/*
 * XREFs of sub_1402590D8 @ 0x1402590D8
 * Callers:
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 * Callees:
 *     sub_140248C10 @ 0x140248C10 (sub_140248C10.c)
 *     sub_14027FC48 @ 0x14027FC48 (sub_14027FC48.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028A258 @ 0x14028A258 (sub_14028A258.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 */

__int64 __fastcall sub_1402590D8(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r13
  bool v9; // bp
  __int64 v10; // r15
  _QWORD *v12; // r15
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a3;
  v7 = *(_QWORD *)(v4 + 528);
  v8 = *(_QWORD *)(v4 + 592);
  v9 = 0;
  v10 = v7;
  if ( byte_140C54C58 == 1 )
    v10 = *(_QWORD *)(v4 + 592);
  v12 = (_QWORD *)(v10 + 1104);
  if ( v7 != *(_QWORD *)(sub_14027FC48() + 8) )
    KeBugCheckEx(0x34u, 0x14BBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a4 < 0 )
    v9 = !sub_140248C10(v4, a4);
  v13 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v13 )
  {
    if ( a2 > v13 )
      goto LABEL_9;
    LODWORD(v6) = v13 - a2;
  }
  if ( (_DWORD)v6 )
    sub_14028A258(v4, &v20, (unsigned int)v6, 0LL, v9);
LABEL_9:
  if ( (_QWORD *)*v12 != v12 )
    sub_14053A100(v7, v8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 704), &LockHandle);
  --*(_DWORD *)(v4 + 516);
  sub_140282AF4(v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
