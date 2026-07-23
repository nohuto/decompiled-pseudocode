/*
 * XREFs of sub_140230C48 @ 0x140230C48
 * Callers:
 *     sub_1406A8D54 @ 0x1406A8D54 (sub_1406A8D54.c)
 *     sub_1409EAB74 @ 0x1409EAB74 (sub_1409EAB74.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406A8E08 @ 0x1406A8E08 (sub_1406A8E08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140230C48(_DWORD *a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  KIRQL OldIrql; // di
  char *PoolWithTag; // rdi
  KIRQL v9; // r14
  unsigned int v10; // ecx
  unsigned int v11; // eax
  _DWORD *v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  unsigned int v16; // r9d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // edx
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-78h]
  unsigned int v28; // [rsp+24h] [rbp-74h]
  int v29; // [rsp+28h] [rbp-70h]
  int v30; // [rsp+2Ch] [rbp-6Ch]
  char *v31; // [rsp+30h] [rbp-68h]
  char *v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  _DWORD *v35; // [rsp+60h] [rbp-38h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v27 = 0;
  v35 = a1;
  if ( !(unsigned int)sub_1406A8E08(1LL) )
    return 3221225738LL;
  v31 = *(char **)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 896LL);
  v32 = &v31[80 * qword_140C11768];
  KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
  v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 816LL);
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
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v33 )
  {
    PoolWithTag = 0LL;
    goto LABEL_7;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v33, 0x6F666E49u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
    memmove(
      PoolWithTag,
      *(const void **)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 808LL),
      80 * v33);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = *((_QWORD *)v24 + 4375);
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v22 )
            sub_140418E4C(v24);
        }
      }
    }
    __writecr8(v9);
LABEL_7:
    while ( 1 )
    {
      v10 = v28;
      if ( v31 >= v32 )
        break;
      if ( *(_DWORD *)v31 )
      {
        ++v30;
        v11 = v28 + 40;
        v28 += 40;
        if ( v10 >= 0xFFFFFFD8 )
        {
          v27 = -1073741675;
          break;
        }
        if ( v11 > a2 )
        {
          v27 = -1073741820;
        }
        else
        {
          ++v29;
          v12 = v35;
          *v35 = *(_DWORD *)v31;
          v13 = *((_DWORD *)v31 + 10);
          v12[1] = v13;
          v14 = *((_DWORD *)v31 + 12);
          v12[2] = v14;
          *((_QWORD *)v12 + 2) = *((_QWORD *)v31 + 4);
          v15 = *((_DWORD *)v31 + 4);
          v12[6] = v15;
          v16 = *((_DWORD *)v31 + 6);
          v12[7] = v16;
          *((_QWORD *)v12 + 4) = *((_QWORD *)v31 + 1);
          if ( v13 < v14 )
            v12[1] = v14;
          if ( v15 < v16 )
            v12[6] = v16;
          v35 = v12 + 10;
        }
      }
      v31 += 80;
      if ( v31 == v32 )
      {
        if ( v33 )
        {
          v31 = PoolWithTag;
          v32 = &PoolWithTag[80 * v33];
          v33 = 0LL;
        }
      }
    }
    sub_1406A8E08(0LL);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    *a3 = v29;
    *a4 = v30;
    return v27;
  }
  else
  {
    sub_1406A8E08(0LL);
    return 3221225626LL;
  }
}
