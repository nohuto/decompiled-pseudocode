/*
 * XREFs of sub_140A84180 @ 0x140A84180
 * Callers:
 *     <none>
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FE78C @ 0x1405FE78C (sub_1405FE78C.c)
 *     sub_140A83778 @ 0x140A83778 (sub_140A83778.c)
 *     sub_140A83888 @ 0x140A83888 (sub_140A83888.c)
 *     sub_140A83AE4 @ 0x140A83AE4 (sub_140A83AE4.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

__int64 __fastcall sub_140A84180(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v10; // rbx
  PSLIST_ENTRY v11; // rax
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // r15d
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  __int64 v24; // r8

  v6 = 0LL;
  sub_140A88738(a1);
  v10 = sub_140A88430(a1);
  if ( v10 )
  {
    sub_140A83CA4(2u);
    v11 = sub_140202234((__int64)&unk_140D58A80);
    v6 = (__int64)v11;
    if ( !v11 )
      return 3221225626LL;
    memset(v11, 0, 0x98uLL);
    *(_QWORD *)v6 = a5;
    *(_QWORD *)(v6 + 8) = a4;
    *(_QWORD *)(v6 + 56) = v10;
    *(_DWORD *)(v6 + 48) = a3;
    if ( !*(_BYTE *)(v10 + 33) && *(_DWORD *)(v10 + 192) < 3u )
      *(_QWORD *)(v6 + 96) = sub_140A872C8(v10, a3);
    if ( !*(_QWORD *)(v10 + 24) )
      *(_QWORD *)(v10 + 24) = a2;
    sub_140A83AE4(v10);
    sub_140A83778(v10, a3, 0);
    v13 = v10 + 144;
    ExInterlockedInsertTailList((PLIST_ENTRY)(v10 + 128), (PLIST_ENTRY)(v6 + 72), (PKSPIN_LOCK)(v10 + 144));
  }
  else
  {
    v13 = 144LL;
  }
  v14 = sub_14042A5E0(a1, a2);
  v15 = v14;
  if ( v10 && v14 && sub_1405FE78C(v10, v6) )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
    v17 = *(_QWORD *)(v6 + 72);
    v18 = *(_QWORD **)(v6 + 80);
    if ( *(_QWORD *)(v17 + 8) != v6 + 72 || *v18 != v6 + 72 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v21 = *((_QWORD *)CurrentPrcb + 4375);
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v23 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v16);
    sub_140A83888(v10);
    sub_140A83B84(v10, a3);
    if ( *(_QWORD *)(v6 + 96) )
      sub_140A880B0(v10);
    sub_140203D88((__int64)&unk_140D58A80, (_SLIST_ENTRY *)v6, v24);
  }
  return v15;
}
