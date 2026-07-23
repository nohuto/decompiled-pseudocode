/*
 * XREFs of sub_1403A4EC4 @ 0x1403A4EC4
 * Callers:
 *     sub_1403A4CC0 @ 0x1403A4CC0 (sub_1403A4CC0.c)
 *     sub_140A50A10 @ 0x140A50A10 (sub_140A50A10.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1403A4428 @ 0x1403A4428 (sub_1403A4428.c)
 *     sub_1403A4500 @ 0x1403A4500 (sub_1403A4500.c)
 *     sub_1403A5020 @ 0x1403A5020 (sub_1403A5020.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C68A8 @ 0x1405C68A8 (sub_1405C68A8.c)
 */

__int64 __fastcall sub_1403A4EC4(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 *v11; // rdi
  __int64 result; // rax
  __int64 *i; // rdx
  __int64 *v14; // r9
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 ***v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // r8
  __int64 ***v24; // rcx
  _QWORD *v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  __int64 *v31; // rax
  IRP *v32; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *v34; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v35; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  sub_1403A5020(a1);
  v2 = *(char *)(a1 + 66);
  memset(&v37, 0, sizeof(v37));
  v3 = *(_QWORD *)(a1 + 72 * v2 + 200);
  if ( *(_BYTE *)(v3 + 196) && !KeCancelTimer((PKTIMER)(v3 + 56)) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C22F90, &v37);
    sub_1405C68A8(v3);
  }
  v35 = &v34;
  v34 = (__int64 *)&v34;
  v4 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = 264LL;
  if ( *(_DWORD *)(v4 + 188) != 1 )
    v7 = 280LL;
  v8 = (_QWORD *)(v6 + v7);
  KeAcquireInStackQueuedSpinLock(&qword_140C22F90, &LockHandle);
  *v8 = 0LL;
  if ( a1 == qword_140C227A8 )
  {
    qword_140C227A8 = 0LL;
    for ( i = (__int64 *)qword_140C22FA0; ; i = (__int64 *)*i )
    {
      if ( i == &qword_140C22FA0 )
        goto LABEL_8;
      v14 = i - 21;
      v15 = *(_QWORD *)(i[9 * *((char *)i - 102) + 4] + 24);
      v16 = v15 ? *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL) : 0LL;
      if ( !*(_QWORD *)(v16 + 264) && *(__int64 **)(v16 + 272) == v14 )
        break;
    }
    v17 = *i;
    v18 = (__int64 *)i[1];
    if ( *(__int64 **)(*i + 8) != i )
      goto LABEL_49;
    if ( (__int64 *)*v18 != i )
      goto LABEL_49;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = (__int64 ***)(v14 + 15);
    *(_QWORD *)(v16 + 264) = v14;
    *(_QWORD *)(v16 + 272) = v14[15];
    v20 = v35;
    qword_140C227A8 = (__int64)(i - 21);
    if ( *v35 != (__int64 *)&v34 )
      goto LABEL_49;
    v14[16] = (__int64)v35;
    *v19 = &v34;
    *v20 = v19;
    v35 = (__int64 **)(v14 + 15);
    if ( *v8 )
      goto LABEL_9;
  }
LABEL_8:
  v9 = (_QWORD *)v8[1];
  if ( !v9 )
    goto LABEL_9;
  v21 = v9 + 21;
  v22 = (_QWORD *)v9[21];
  if ( v22 != v9 + 21 )
  {
    if ( qword_140C227A8 )
      goto LABEL_9;
    v23 = (_QWORD *)v9[22];
    qword_140C227A8 = v8[1];
    if ( (_QWORD *)v22[1] == v21 && (_QWORD *)*v23 == v21 )
    {
      *v23 = v22;
      v22[1] = v23;
      goto LABEL_38;
    }
LABEL_49:
    __fastfail(3u);
  }
LABEL_38:
  *v8 = v9;
  v24 = (__int64 ***)(v9 + 15);
  v8[1] = *v24;
  v25 = v35;
  if ( *v35 != (__int64 *)&v34 )
    goto LABEL_49;
  v24[1] = v35;
  *v24 = &v34;
  *v25 = v24;
  v35 = (__int64 **)v24;
LABEL_9:
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
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v29;
        if ( v30 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  while ( 1 )
  {
    v11 = v34;
    result = (__int64)&v34;
    if ( v34 == (__int64 *)&v34 )
      break;
    v31 = (__int64 *)*v34;
    if ( (__int64 **)v34[1] != &v34 || (__int64 *)v31[1] != v34 )
      goto LABEL_49;
    v34 = (__int64 *)*v34;
    v31[1] = (__int64)&v34;
    v32 = (IRP *)(v11 - 15);
    DeviceObject = v32->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    sub_1403A4500((__int64)&v34, (__int64)v32);
    sub_1403A4428((__int64)v32);
    IofCallDriver(DeviceObject, v32);
  }
  if ( *(_BYTE *)(v4 + 184) == 2 && *(_DWORD *)(v4 + 188) == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(&dword_140C227A0, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return sub_1402D6004(2u);
  }
  return result;
}
