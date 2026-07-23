/*
 * XREFs of sub_140A895A4 @ 0x140A895A4
 * Callers:
 *     sub_140A85840 @ 0x140A85840 (sub_140A85840.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A83924 @ 0x140A83924 (sub_140A83924.c)
 *     sub_140A83DA0 @ 0x140A83DA0 (sub_140A83DA0.c)
 *     sub_140A8798C @ 0x140A8798C (sub_140A8798C.c)
 */

unsigned __int16 *__fastcall sub_140A895A4(__int64 a1, _QWORD *a2, void *a3)
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int16 **v9; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  result = sub_140A83DA0(a2 + 10, (__int64)a3);
  v6 = result;
  if ( result )
  {
    sub_140A8798C(*((_QWORD *)result + 2), *((_DWORD *)result + 1), *((_QWORD *)result + 3), *((_DWORD *)result + 2));
    v7 = KeAcquireSpinLockRaiseToDpc(a2 + 12);
    v8 = *((_QWORD *)v6 + 6);
    v9 = (unsigned __int16 **)*((_QWORD *)v6 + 7);
    if ( *(unsigned __int16 **)(v8 + 8) != v6 + 24 || *v9 != v6 + 24 )
      __fastfail(3u);
    *v9 = (unsigned __int16 *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    KeReleaseSpinLockFromDpcLevel(a2 + 12);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    memset(a3, 0, *((unsigned int *)v6 + 2));
    sub_14042A5E0(a2[2], *((unsigned int *)v6 + 1));
    sub_140A83924((__int64)a2);
    ExFreePoolWithTag(v6, 0);
    return (unsigned __int16 *)1;
  }
  return result;
}
