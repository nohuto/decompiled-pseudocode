/*
 * XREFs of sub_140A843D0 @ 0x140A843D0
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
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

__int64 __fastcall sub_140A843D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 (__fastcall *a6)(),
        __int64 a7,
        _QWORD *a8)
{
  __int64 (__fastcall *v8)(); // rsi
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // rdi
  PSLIST_ENTRY v15; // rax
  __int64 v17; // r14
  unsigned int v18; // ebp
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  _QWORD *v21; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  bool v26; // zf
  __int64 v27; // r8

  v8 = a6;
  v12 = a1;
  v13 = 0LL;
  v14 = sub_140A88430(a1);
  if ( v14 )
  {
    sub_140A83CA4(2u);
    v15 = sub_140202234((__int64)&unk_140D58A80);
    v13 = (__int64)v15;
    if ( !v15 )
      return 3221225626LL;
    memset(v15, 0, 0x98uLL);
    *(_QWORD *)v13 = a7;
    *(_QWORD *)(v13 + 8) = a6;
    *(_QWORD *)(v13 + 56) = v14;
    *(_DWORD *)(v13 + 48) = a4;
    *(_QWORD *)(v13 + 40) = a3;
    if ( !*(_QWORD *)(v14 + 24) )
      *(_QWORD *)(v14 + 24) = a2;
    sub_140A83AE4(v14);
    sub_140A83778(v14, a4, 1);
    v17 = v14 + 144;
    ExInterlockedInsertTailList((PLIST_ENTRY)(v14 + 128), (PLIST_ENTRY)(v13 + 72), (PKSPIN_LOCK)(v14 + 144));
    v8 = sub_140A86EA0;
    if ( !a6 )
      v8 = 0LL;
  }
  else
  {
    v17 = 144LL;
  }
  sub_140A88738(v12);
  v18 = sub_14042A5E0(a1, a2);
  if ( v14 && sub_1405FE78C(v14, v13) )
  {
    if ( v18 )
    {
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v17);
      v20 = *(_QWORD *)(v13 + 72);
      v21 = *(_QWORD **)(v13 + 80);
      if ( *(_QWORD *)(v20 + 8) != v13 + 72 || *v21 != v13 + 72 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v17);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v24 = *((_QWORD *)CurrentPrcb + 4375);
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v25;
            if ( v26 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v19);
      sub_140A83888(v14);
      sub_140A83B84(v14, a4);
      sub_140203D88((__int64)&unk_140D58A80, (_SLIST_ENTRY *)v13, v27);
    }
    else if ( !v8 )
    {
      *(_DWORD *)(v13 + 52) = 1;
      *(_QWORD *)(v13 + 88) = *a8;
    }
  }
  return v18;
}
