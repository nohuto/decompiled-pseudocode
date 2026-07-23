/*
 * XREFs of sub_14059F908 @ 0x14059F908
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     sub_14023F658 @ 0x14023F658 (sub_14023F658.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405A02B8 @ 0x1405A02B8 (sub_1405A02B8.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14059F908(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  PVOID v4; // rbp
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  char v8; // al
  char v9; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  int v16; // eax
  char v17; // al
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  __int64 v20; // r8
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r8
  int v25; // eax

  v4 = sub_1402828F0(64, 0x20uLL, 0x6C42694Du);
  v5 = sub_1402F2700(BugCheckParameter2);
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = v5;
  if ( (v6 & 0x20000000000000LL) == 0 )
    goto LABEL_41;
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 5 )
    goto LABEL_6;
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      goto LABEL_41;
    if ( !*(_QWORD *)(BugCheckParameter2 + 16) )
      goto LABEL_8;
LABEL_6:
    if ( v6 >= 0 )
      goto LABEL_41;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
LABEL_8:
    if ( (a2 & 0x10000000) != 0 )
    {
      v8 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( v8 >= 0 )
        *(_BYTE *)(BugCheckParameter2 + 35) = v8 | 0x80;
    }
    v9 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v9 & 0x40) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    else
    {
      if ( (v9 & 0x10) != 0
        || *(_WORD *)(BugCheckParameter2 + 32)
        || (v16 = *(_BYTE *)(BugCheckParameter2 + 34) & 7, v16 != 2) && v16 != 3 )
      {
        sub_1405ADDA8(BugCheckParameter2, 1LL, 0LL);
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
          sub_14023F658(BugCheckParameter2, v7, a2);
      }
      else
      {
        sub_140326870(BugCheckParameter2, 0);
        v17 = *(_BYTE *)(BugCheckParameter2 + 34);
        if ( (v17 & 0x10) != 0 )
        {
          if ( *(char *)(BugCheckParameter2 + 35) >= 0 )
          {
            sub_1405A02B8(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
            v17 = *(_BYTE *)(BugCheckParameter2 + 34);
          }
          *(_BYTE *)(BugCheckParameter2 + 34) = v17 & 0xEF;
        }
        sub_1405ADDA8(BugCheckParameter2, 1LL, 0LL);
        sub_1402BF9C0(BugCheckParameter2, 4u);
      }
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = *((_QWORD *)v19 + 4375);
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v14 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
            *(_DWORD *)(v20 + 20) &= v21;
            if ( v14 )
              sub_140418E4C((__int64)v19);
          }
        }
      }
      __writecr8(v7);
    }
    return 259LL;
  }
LABEL_41:
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v14 )
          sub_140418E4C((__int64)v23);
      }
    }
  }
  __writecr8(v7);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return 3221226548LL;
}
