/*
 * XREFs of sub_14039D010 @ 0x14039D010
 * Callers:
 *     ExReleaseFastResource @ 0x14039CF80 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceShared @ 0x14063C9F0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     sub_14039D2A8 @ 0x14039D2A8 (sub_14039D2A8.c)
 *     sub_14039D2EC @ 0x14039D2EC (sub_14039D2EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14039D010(ULONG_PTR BugCheckParameter2, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD **v5; // rdi
  volatile __int64 *v6; // rdx
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  char v9; // al
  __int64 v10; // r10
  __int64 *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 result; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // r9
  __int64 *v22; // rcx
  __int64 **v23; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v26; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  __int64 v31; // r8
  int v32; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+78h] [rbp+10h] BYREF
  __int64 v35; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v36; // [rsp+88h] [rbp+20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !*((_BYTE *)a2 + 18) )
  {
    v14 = (__int64 *)*a2;
    v15 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v15 == a2 )
      goto LABEL_9;
    goto LABEL_24;
  }
  v5 = (_QWORD **)(a2 + 5);
  LockHandle.LockQueue.Next = 0LL;
  v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(BugCheckParameter2 + 96);
  if ( *v5 != v5 )
  {
    sub_1403119F0((__int64)&LockHandle, v6);
    v7 = *v5;
    v8 = (_QWORD *)**v5;
    if ( (_QWORD **)(*v5)[1] == v5 && (_QWORD *)v8[1] == v7 )
    {
      *v5 = v8;
      v8[1] = v5;
      *((_BYTE *)v7 + 18) = 1;
      v9 = *((_BYTE *)a2 + 16);
      *((_BYTE *)a2 + 18) = 0;
      *((_BYTE *)v7 + 16) = v9;
      *((_BYTE *)a2 + 16) = 0;
      sub_14039D2A8(a2, v7);
      sub_14039D2A8(a2 + 5, v10 + 40);
      v13 = *v11;
      if ( *(__int64 **)(*v11 + 8) == v11 )
      {
        a2[1] = (__int64)v11;
        *a2 = v13;
        *(_QWORD *)(v13 + 8) = a2;
        *v11 = (__int64)a2;
        sub_14039D2A8(a2 + 7, v12 + 56);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v14 = (__int64 *)*a2;
        v15 = (__int64 **)a2[1];
        if ( *(__int64 **)(*a2 + 8) == a2 && *v15 == a2 )
        {
LABEL_9:
          *v15 = v14;
          v14[1] = (__int64)v15;
          *a2 = 0LL;
          a2[1] = 0LL;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v24 = KeGetCurrentIrql();
              if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v26 = *((_QWORD *)CurrentPrcb + 4375);
                v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
                *(_DWORD *)(v26 + 20) &= v27;
                if ( v28 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          goto LABEL_11;
        }
      }
    }
LABEL_24:
    __fastfail(3u);
  }
  sub_1403119F0((__int64)&LockHandle, v6);
  sub_14039D2EC(
    BugCheckParameter2,
    &v36,
    &v35,
    &v34,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock,
    *(_QWORD *)&LockHandle.OldIrql);
  v18 = a2[7];
  v19 = a2 + 7;
  v20 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v18 + 8) != a2 + 7 )
    goto LABEL_24;
  if ( (_QWORD *)*v20 != v19 )
    goto LABEL_24;
  *v20 = v18;
  *(_QWORD *)(v18 + 8) = v20;
  *v19 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  sub_14035B8F4(&v36, 0LL, 2 * (unsigned int)(v35 != 0) + 1, v21);
  *((_BYTE *)a2 + 18) = 0;
  v22 = (__int64 *)*a2;
  v23 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v23 != a2 )
    goto LABEL_24;
  *v23 = v22;
  v22[1] = (__int64)v23;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v5 = 0LL;
  a2[6] = 0LL;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = *((_QWORD *)v30 + 4375);
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
        *(_DWORD *)(v31 + 20) &= v32;
        if ( v28 )
          sub_140418E4C(v30);
      }
    }
  }
  __writecr8(CurrentIrql);
  result = *((unsigned __int8 *)a2 + 16);
  if ( (_BYTE)result )
    result = sub_140353BB0(BugCheckParameter2, *((unsigned __int8 *)a2 + 16));
LABEL_11:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
