/*
 * XREFs of sub_14021F280 @ 0x14021F280
 * Callers:
 *     sub_14021D404 @ 0x14021D404 (sub_14021D404.c)
 *     sub_14021DEB4 @ 0x14021DEB4 (sub_14021DEB4.c)
 *     sub_14021E048 @ 0x14021E048 (sub_14021E048.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     IoGetRequestorProcess @ 0x14021DC00 (IoGetRequestorProcess.c)
 *     sub_14021E5E4 @ 0x14021E5E4 (sub_14021E5E4.c)
 *     sub_14021E818 @ 0x14021E818 (sub_14021E818.c)
 *     sub_14021F198 @ 0x14021F198 (sub_14021F198.c)
 *     sub_14021F5E4 @ 0x14021F5E4 (sub_14021F5E4.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140542018 @ 0x140542018 (sub_140542018.c)
 */

void __fastcall sub_14021F280(__int64 a1, KSPIN_LOCK *a2, KIRQL a3)
{
  KSPIN_LOCK *v3; // rsi
  KSPIN_LOCK i; // rdi
  __int64 v7; // rbx
  __int64 v8; // r13
  char v9; // al
  char v10; // r15
  char v11; // al
  char v12; // bl
  __int64 v13; // r15
  char v14; // r13
  __int64 v15; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  _SLIST_ENTRY v21; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+50h] [rbp-10h]
  int v25; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h]

  v25 = 0;
  v3 = a2 + 3;
  for ( i = a2[3]; i; i = *v3 )
  {
    v7 = *(_QWORD *)(i + 24);
    v21 = 0LL;
    v26 = v7;
    *(_OWORD *)Object = 0LL;
    v23 = 0LL;
    v8 = *(_QWORD *)(v7 + 184);
    v21.Next = *(_SLIST_ENTRY **)(v8 + 24);
    *((_QWORD *)&v21.Next + 1) = **(_QWORD **)(v8 + 8);
    *((_QWORD *)&v23 + 1) = (char *)&v21.Next->Next + *((_QWORD *)&v21.Next + 1) - 1;
    Object[1] = *(PVOID *)(v8 + 48);
    *(_QWORD *)&v23 = IoGetRequestorProcess((PIRP)v7);
    HIDWORD(Object[0]) = *(_DWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
      LOBYTE(Object[0]) = 1;
      v9 = sub_14021F198((__int64)a2, (unsigned __int64 *)&v21);
    }
    else
    {
      LOBYTE(Object[0]) = 0;
      v9 = sub_14021E818((__int64)a2, (__int64)&v21);
    }
    v10 = v9;
    if ( !v9 )
      goto LABEL_18;
    *(_BYTE *)(v7 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    v11 = v10;
    v12 = 0;
    v13 = v26;
    if ( !*(_BYTE *)(v26 + 68) )
      v12 = v11;
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v26 + 69));
    if ( v12 )
    {
      v14 = sub_14021E5E4((_SLIST_ENTRY **)a1, *(_QWORD *)(v8 + 48), &v21);
      *v3 = *(_QWORD *)i;
      if ( i == a2[4] )
        a2[4] = (KSPIN_LOCK)v3;
      KeReleaseSpinLockFromDpcLevel(a2);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && a3 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << (a3 + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(a3);
      ObfReferenceObjectWithTag(Object[1], 0x746C6644u);
      sub_14021F5E4(*(_QWORD *)(a1 + 8), *(_QWORD *)(i + 16), v13, v14 == 0 ? 0xC000009A : 0, &v25, Object[1]);
      if ( v14 )
      {
        if ( v25 < 0 )
          sub_140542018(a1, &v21, 0LL);
      }
      ObfDereferenceObjectWithTag(Object[1], 0x746C6644u);
      a3 = KeAcquireSpinLockRaiseToDpc(a2);
      v3 = a2 + 3;
      sub_140203D88((__int64)&stru_140CE2680, (_SLIST_ENTRY *)i, v15);
    }
    else
    {
LABEL_18:
      v3 = (KSPIN_LOCK *)i;
    }
  }
}
