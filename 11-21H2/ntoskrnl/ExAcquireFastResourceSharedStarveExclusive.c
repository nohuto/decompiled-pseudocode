/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90
 * Callers:
 *     sub_14063CD9C @ 0x14063CD9C (sub_14063CD9C.c)
 * Callees:
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
 *     sub_1402464C0 @ 0x1402464C0 (sub_1402464C0.c)
 *     sub_1402597A8 @ 0x1402597A8 (sub_1402597A8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_14039C474 @ 0x14039C474 (sub_14039C474.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireFastResourceSharedStarveExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  unsigned __int64 v4; // r14
  unsigned __int8 v7; // cl
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v10; // r8
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // bp
  _QWORD *v14; // rax
  ULONG_PTR *v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // si
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v31; // r8
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  int v37; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v39[6]; // [rsp+48h] [rbp-60h] BYREF

  v4 = 0LL;
  memset(v39, 0, 48);
  v7 = (a3 == 0) + 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v7 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v7, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (*((_BYTE *)v10 + 192) & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (*((_DWORD *)v10 + 29) & 0x400) == 0 && !*((_DWORD *)v10 + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v11 != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11, 0LL);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
    KeBugCheckEx(0x1C6u, 2uLL, a2, v12, 0LL);
  *(_BYTE *)(a2 + 17) &= ~4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v13 <= 0xFu )
  {
    v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v19 + 20) |= (-1 << (v13 + 1)) & 4;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    v14 = (_QWORD *)*((_QWORD *)CurrentThread + 207);
    if ( v14 != (_QWORD *)((char *)CurrentThread + 1656) )
    {
      while ( v14[3] != BugCheckParameter2 )
      {
        v14 = (_QWORD *)*v14;
        if ( v14 == (_QWORD *)((char *)CurrentThread + 1656) )
          goto LABEL_24;
      }
      if ( v14 )
      {
        v15 = (ULONG_PTR *)v14[6];
        v16 = v14 + 5;
        if ( (_QWORD *)*v15 == v16 )
        {
          *(_QWORD *)a2 = v16;
          v17 = 1;
          *(_QWORD *)(a2 + 8) = v15;
          *v15 = a2;
          v16[1] = a2;
          goto LABEL_17;
        }
LABEL_56:
        __fastfail(3u);
      }
    }
  }
LABEL_24:
  v20 = sub_140347C10(BugCheckParameter2, 0LL);
  v4 = v20;
  if ( v20 )
    *(_BYTE *)(a2 + 16) = (2 * *(_BYTE *)(v20 + 16)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(BugCheckParameter2 + 96);
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = sub_1402464C0(BugCheckParameter2);
  if ( v17 )
  {
    v23 = *(_QWORD **)(BugCheckParameter2 + 56);
    v24 = (_QWORD *)(a2 + 56);
    if ( *v23 != BugCheckParameter2 + 48 )
      goto LABEL_56;
    *v24 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v23;
    *v23 = v24;
    *(_QWORD *)(BugCheckParameter2 + 56) = v24;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    sub_14039C474(CurrentThread, v25, 0LL, a2);
LABEL_17:
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && v13 <= 0xFu && v29 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = *((_QWORD *)CurrentPrcb + 4375);
          v32 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v33 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    goto LABEL_19;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_17;
  }
  if ( v4 )
    sub_14029F580((__int64 *)v4, v21, v22);
  v26 = *(_QWORD **)(BugCheckParameter2 + 56);
  v27 = (_QWORD *)(a2 + 56);
  if ( *v26 != BugCheckParameter2 + 48 )
    goto LABEL_56;
  *(_QWORD *)(a2 + 64) = v26;
  *v27 = BugCheckParameter2 + 48;
  *v26 = v27;
  *(_QWORD *)(BugCheckParameter2 + 56) = v27;
  sub_1402597A8(BugCheckParameter2, (__int64)CurrentThread, (__int64)v39);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  sub_14039C474(CurrentThread, v28, 0LL, a2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && v13 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = *((_QWORD *)v35 + 4375);
        v37 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v33 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
        *(_DWORD *)(v36 + 20) &= v37;
        if ( v33 )
          sub_140418E4C(v35);
      }
    }
  }
  __writecr8(v13);
  sub_140231990((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v39, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v4 )
    sub_140347C10(BugCheckParameter2, v4);
  v17 = 1;
LABEL_19:
  if ( v4 )
  {
    if ( v17 )
      *(_BYTE *)(v4 + 18) = 1;
    else
      sub_140353BB0(BugCheckParameter2, v4);
  }
  return v17;
}
