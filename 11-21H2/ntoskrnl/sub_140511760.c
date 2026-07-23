/*
 * XREFs of sub_140511760 @ 0x140511760
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140511760(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbp
  unsigned __int8 CurrentIrql; // al
  KIRQL v5; // al
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 104));
  v6 = *(_QWORD **)(a2 + 8);
  v7 = v5;
  v8 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v6 != a2 )
    __fastfail(3u);
  *v6 = v8;
  *(_QWORD *)(v8 + 8) = v6;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 104));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  if ( *(_BYTE *)(a2 + 72) )
    sub_14042A5E0(*(_QWORD *)(v2 + 40), *(_QWORD *)(a2 + 56));
  sub_140514E28(v2);
  MmUnmapLockedPages(*(PVOID *)(a2 + 48), *(PMDL *)(a2 + 40));
  sub_140221A30(*(_QWORD *)(a2 + 40), 0);
  ExFreePoolWithTag(*(PVOID *)(a2 + 40), 0);
  sub_1403B1B5C(v14, *(_QWORD *)(a2 + 64));
  sub_1403B1B5C(v15, a2);
}
