/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x14030F1E0
 * Callers:
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 * Callees:
 *     sub_140239CF8 @ 0x140239CF8 (sub_140239CF8.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  unsigned __int8 CurrentIrql; // bl
  char *DataSectionObject; // rdi
  volatile LONG *v5; // r14
  ULONG v6; // edi
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 v11; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  __int64 v14; // r9
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rax
  __int64 v18; // r9
  int v19; // edx
  unsigned __int8 v20; // al

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(&dword_140C4F100, CurrentIrql);
    else
      sub_14030F870(&dword_140C4F100, CurrentIrql);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v8 = *((_QWORD *)CurrentPrcb + 4375);
            v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
            *(_DWORD *)(v8 + 20) &= v9;
            if ( v10 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 0;
    }
    v5 = (volatile LONG *)(DataSectionObject + 72);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = *((_QWORD *)v13 + 4375);
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v10 )
            sub_140418E4C(v13);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  v6 = sub_140239CF8((__int64)DataSectionObject) != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = *((_QWORD *)v17 + 4375);
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v10 )
          sub_140418E4C(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
