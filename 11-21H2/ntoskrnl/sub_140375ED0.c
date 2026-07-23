/*
 * XREFs of sub_140375ED0 @ 0x140375ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402829D0 @ 0x1402829D0 (sub_1402829D0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402A1788 @ 0x1402A1788 (sub_1402A1788.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403760B4 @ 0x1403760B4 (sub_1403760B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140375ED0()
{
  PSLIST_ENTRY v0; // r15
  unsigned __int64 v1; // rdi
  void *i; // rcx
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r9
  _QWORD *j; // rcx
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  int v27; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v29[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v29, 0, sizeof(v29));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C52B80, &LockHandle);
  if ( dword_140C52B68 )
  {
    stru_140C52B48.Parameter = 0LL;
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
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v0 = 0LL;
    do
    {
      stru_140C52B48.Parameter = (PVOID)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v1 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            v22 = *((_QWORD *)v21 + 4375);
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v19 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v19 )
              sub_140418E4C(v21);
          }
        }
      }
      __writecr8(v1);
      for ( i = 0LL; ; i = (void *)v4 )
      {
        v3 = sub_1407B6B90(i);
        v4 = v3;
        if ( !v3 )
          break;
        v5 = v3 + 1664;
        if ( *((_QWORD *)sub_140282AD0(v3 + 1664) + 5) )
        {
          sub_14030D5C0(v4, 0LL, (__int64)v29, v6);
          sub_1402829D0(v5);
          sub_1402D0930((__int64)v29, 0LL);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v9 )
      {
        v8 = sub_1402A1788(j);
        v9 = (__int64)v8;
        if ( !v8 )
          break;
        if ( (int)sub_1402312E0((ULONG_PTR)v8) >= 0 )
        {
          v10 = sub_14027B520();
          sub_1402829D0(v10);
          sub_140231240(v9, (__int64)v29);
        }
      }
      v11 = &unk_140C53580;
      v12 = 3LL;
      do
      {
        if ( v11[14] )
          sub_1402829D0((__int64)v11);
        v11 += 40;
        --v12;
      }
      while ( v12 );
      sub_1403760B4(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_140C52B80, &LockHandle);
    }
    while ( stru_140C52B48.Parameter != (PVOID)2 );
    if ( !dword_140C52B68 )
    {
      v0 = ListEntry;
      ListEntry = 0LL;
    }
    stru_140C52B48.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v19 )
            sub_140418E4C(v25);
        }
      }
    }
    __writecr8(v13);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
