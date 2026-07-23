/*
 * XREFs of sub_140A6C8B4 @ 0x140A6C8B4
 * Callers:
 *     sub_1409F6770 @ 0x1409F6770 (sub_1409F6770.c)
 * Callees:
 *     sub_14021A758 @ 0x14021A758 (sub_14021A758.c)
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 */

__int64 __fastcall sub_140A6C8B4(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // edi
  _DWORD *v8; // rsi
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 *v11; // r8
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf

  v3 = 8;
  if ( a2 >= 8 )
  {
    *a1 = 0;
    v8 = a1 + 2;
    v7 = 0;
    MmLockPagableSectionByHandle(ImageSectionHandle);
    v9 = ExAcquireSpinLockShared(&dword_140D310C0);
    v10 = qword_140C11750;
    v11 = &qword_140C11750;
    v12 = v9;
    while ( (__int64 *)v10 != v11 )
    {
      ++*a1;
      v3 += 48;
      if ( v3 < 0x30 )
      {
        v7 = -1073741675;
        break;
      }
      if ( a2 >= v3 )
      {
        *(_QWORD *)v8 = v10;
        v8[2] = 1;
        v13 = sub_14021A758((__int64 *)(v10 + 48));
        if ( v13 )
          v14 = *(_QWORD *)(v13 + 1232);
        else
          v14 = 0LL;
        *((_QWORD *)v8 + 2) = v14;
        v8[6] = *(_DWORD *)(v10 + 64);
        v8[7] = *(_DWORD *)(v10 + 68);
        v8[10] = *(_DWORD *)(v10 + 72);
        v8[11] = *(_DWORD *)(v10 + 76);
        v8 += 12;
      }
      else
      {
        v7 = -1073741820;
      }
      v10 = *(_QWORD *)v10;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140D310C0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v19 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    MmUnlockPagableImageSection(ImageSectionHandle);
  }
  else
  {
    v7 = -1073741820;
  }
  if ( a3 )
    *a3 = v3;
  return v7;
}
