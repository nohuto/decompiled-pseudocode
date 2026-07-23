/*
 * XREFs of sub_140355A50 @ 0x140355A50
 * Callers:
 *     sub_140355774 @ 0x140355774 (sub_140355774.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_140356350 @ 0x140356350 (sub_140356350.c)
 *     sub_1403A4264 @ 0x1403A4264 (sub_1403A4264.c)
 *     sub_1404198CC @ 0x1404198CC (sub_1404198CC.c)
 */

void __fastcall sub_140355A50(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // r15
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  KIRQL v7; // al
  __int64 v8; // rdx
  bool v9; // r14
  bool v10; // zf
  __int64 v11; // r8
  KSPIN_LOCK *v12; // r13
  KIRQL v13; // bl
  IRP *Flink; // rdi
  char j; // al
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rdx
  __int64 **v19; // r8
  __int64 *v20; // rdx
  char v21; // r15
  unsigned int v22; // eax
  char v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r12
  char v27; // r13
  IRP *v28; // r14
  KIRQL v29; // al
  KIRQL v30; // al
  int v31; // ebx
  __int64 v32; // r8
  _QWORD *v33; // rcx
  __int64 *v34; // r8
  __int64 v35; // rdx
  _QWORD *v36; // r9
  IRP *v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v39; // [rsp+28h] [rbp-10h]
  unsigned int NewIrql; // [rsp+80h] [rbp+48h]
  KIRQL NewIrqla; // [rsp+80h] [rbp+48h]
  __int64 v42; // [rsp+88h] [rbp+50h] BYREF
  __int64 v43; // [rsp+90h] [rbp+58h]
  __int64 v44; // [rsp+98h] [rbp+60h]

  v42 = 0LL;
  v1 = 0LL;
  for ( i = *(_QWORD *)(a1 + 80); (unsigned int)v1 < *(_DWORD *)(a1 + 188); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *(_QWORD *)(a1 + 192);
    v5 = *(unsigned int *)(v4 + 8 * v1 + 4);
    NewIrql = *(_DWORD *)(v4 + 8 * v1);
    v6 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * NewIrql);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 128));
    v8 = *(_QWORD *)(v6 + 176);
    v9 = 0;
    if ( *(_BYTE *)(v8 + 8 * v5 + 4) )
    {
      *(_BYTE *)(v8 + 8 * v5 + 4) = 0;
      v10 = (*(_DWORD *)(v6 + 184))-- == 1;
      v9 = v10;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 128), v7);
    if ( v9 )
    {
      LOBYTE(v11) = 1;
      sub_140356350(i, NewIrql, v11, 0LL);
    }
  }
  v12 = (KSPIN_LOCK *)(a1 + 128);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  NewIrqla = v13;
  Flink = 0LL;
  v39 = &v38;
  v38 = (__int64)&v38;
  for ( j = sub_1404198CC(a1, 0LL, &v42); j; j = sub_1404198CC(a1, 0LL, &v42) )
  {
    v16 = v42;
    v17 = (__int64 *)(v42 + 32);
    v18 = *(__int64 **)(v42 + 32);
    if ( v18[1] != v42 + 32 )
      goto LABEL_37;
    v19 = *(__int64 ***)(v42 + 40);
    if ( *v19 != v17 )
      goto LABEL_37;
    *v19 = v18;
    v18[1] = (__int64)v19;
    v20 = v39;
    if ( (__int64 *)*v39 != &v38 )
      goto LABEL_37;
    v17[1] = (__int64)v39;
    *v17 = (__int64)&v38;
    *v20 = (__int64)v17;
    v39 = v17;
    v21 = *(_DWORD *)(v16 + 16);
    v22 = *(_DWORD *)(v16 + 16) & 0xFFFFFFFE;
    *(_DWORD *)(v16 + 16) = v22;
    v23 = v21 & 1;
    if ( v23 )
      *(_DWORD *)(v16 + 16) = v22 | 2;
    v24 = 0LL;
    if ( *(_DWORD *)v16 )
    {
      v25 = *(_QWORD *)(v16 + 48);
      v43 = v25 - 112;
      v26 = v25 + 56;
      v44 = v25 - 48;
    }
    else
    {
      v25 = 128LL;
      v24 = *(_QWORD *)(v16 + 48) - 1240LL;
      v43 = 16LL;
      v44 = 80LL;
      v26 = 184LL;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v16 + 8));
    if ( v23 )
    {
      KeReleaseSpinLock(v12, NewIrqla);
      v27 = 0;
      if ( v24 )
      {
        v28 = 0LL;
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 1240));
        v10 = (*(_DWORD *)(v24 + 1248))-- == 1;
        if ( v10 )
        {
          v28 = *(IRP **)(v24 + 1256);
          v27 = 1;
          *(_QWORD *)(v24 + 1256) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 1240), v29);
        if ( v27 )
        {
          v28->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)Flink;
          Flink = v28;
        }
      }
      else
      {
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v25);
        v31 = *(_DWORD *)v26 - 1;
        *(_DWORD *)v26 = v31;
        KeReleaseSpinLock((PKSPIN_LOCK)v25, v30);
        if ( !v31 )
        {
          LOBYTE(v32) = 1;
          sub_140356350(*(_QWORD *)v44, *(unsigned int *)v43, v32, 0LL);
        }
      }
      v12 = (KSPIN_LOCK *)(a1 + 128);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      NewIrqla = v13;
    }
    else
    {
      v13 = NewIrqla;
    }
  }
  v33 = (_QWORD *)v38;
  if ( (__int64 *)v38 != &v38 )
  {
    v34 = v39;
    if ( *(__int64 **)(v38 + 8) != &v38
      || (__int64 *)*v39 != &v38
      || (*v39 = v38,
          v35 = a1 + 440,
          v33[1] = v34,
          v36 = *(_QWORD **)(a1 + 448),
          *(_QWORD *)(*(_QWORD *)(a1 + 440) + 8LL) != a1 + 440)
      || *v36 != v35
      || *(_QWORD **)(*v33 + 8LL) != v33
      || (_QWORD *)*v34 != v33 )
    {
LABEL_37:
      __fastfail(3u);
    }
    *v36 = v33;
    *(_QWORD *)(a1 + 448) = v33[1];
    *(_QWORD *)v33[1] = v35;
    v33[1] = v36;
  }
  KeReleaseSpinLock(v12, v13);
  while ( Flink )
  {
    v37 = Flink;
    Flink = (IRP *)Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
    sub_1403A4264(v37);
  }
}
