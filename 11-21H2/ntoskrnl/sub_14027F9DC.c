/*
 * XREFs of sub_14027F9DC @ 0x14027F9DC
 * Callers:
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     MmCanFileBeTruncated @ 0x14027F960 (MmCanFileBeTruncated.c)
 * Callees:
 *     sub_14022CB60 @ 0x14022CB60 (sub_14022CB60.c)
 *     MmFlushImageSection @ 0x14023E840 (MmFlushImageSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14033E0D4 @ 0x14033E0D4 (sub_14033E0D4.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char *__fastcall sub_14027F9DC(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  bool v8; // zf
  unsigned __int64 v9; // rbx
  char *DataSectionObject; // rdi
  __int64 v12; // rax
  __int64 i; // rcx
  unsigned __int64 v14; // rax
  volatile LONG *v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  __int64 v31; // r8
  int v32; // eax

  while ( 1 )
  {
    v8 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v8 )
    {
      v9 = ExAcquireSpinLockExclusive(&dword_140C4F100);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v8 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v8 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    LOBYTE(v9) = ExAcquireSpinLockExclusive(&dword_140C4F100);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = *((_QWORD *)v30 + 4375);
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v8 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
            *(_DWORD *)(v31 + 20) &= v32;
            if ( v8 )
              sub_140418E4C(v30);
          }
        }
      }
      __writecr8((unsigned __int8)v9);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = *((_QWORD *)v21 + 4375);
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v8 )
            sub_140418E4C(v21);
        }
      }
    }
    __writecr8((unsigned __int8)v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( *((_DWORD *)DataSectionObject + 14) & 1 | ((*((_DWORD *)DataSectionObject + 14) & 2) != 0)
    || *((_QWORD *)DataSectionObject + 14) > 1uLL && (*((_DWORD *)DataSectionObject + 14) & 8) == 0 && !a4 )
  {
    goto LABEL_25;
  }
  if ( *((_QWORD *)DataSectionObject + 6) && (!a3 || *((_QWORD *)DataSectionObject + 5) && !a4) )
  {
    if ( a2 )
    {
      v12 = (__int64)(DataSectionObject + 128);
      if ( *((_QWORD *)DataSectionObject + 8) )
        v12 = sub_14022CB60((__int64)DataSectionObject, 1);
      for ( i = *(_QWORD *)(v12 + 16); i; i = *(_QWORD *)(i + 16) )
        v12 = i;
      v14 = sub_14033E0D4(v12);
      if ( *a2 >= v14 )
      {
        v28 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v28 )
          *a2 = v28;
        goto LABEL_11;
      }
      v15 = (volatile LONG *)(DataSectionObject + 72);
      goto LABEL_20;
    }
LABEL_25:
    v15 = (volatile LONG *)(DataSectionObject + 72);
LABEL_20:
    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v8 )
            sub_140418E4C(v25);
        }
      }
    }
    __writecr8((unsigned __int8)v9);
    return 0LL;
  }
LABEL_11:
  *a5 = v9;
  return DataSectionObject;
}
