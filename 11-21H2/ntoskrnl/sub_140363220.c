/*
 * XREFs of sub_140363220 @ 0x140363220
 * Callers:
 *     sub_140236C14 @ 0x140236C14 (sub_140236C14.c)
 *     sub_14025BFE0 @ 0x14025BFE0 (sub_14025BFE0.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_140302650 @ 0x140302650 (sub_140302650.c)
 *     sub_1403631E0 @ 0x1403631E0 (sub_1403631E0.c)
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 *     sub_1403747E4 @ 0x1403747E4 (sub_1403747E4.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     sub_1403C3A30 @ 0x1403C3A30 (sub_1403C3A30.c)
 *     sub_1403EAC70 @ 0x1403EAC70 (sub_1403EAC70.c)
 *     sub_14041A044 @ 0x14041A044 (sub_14041A044.c)
 *     sub_140554988 @ 0x140554988 (sub_140554988.c)
 *     sub_140572094 @ 0x140572094 (sub_140572094.c)
 *     sub_1405E80B0 @ 0x1405E80B0 (sub_1405E80B0.c)
 *     sub_1405E8D90 @ 0x1405E8D90 (sub_1405E8D90.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 *     sub_1406727EC @ 0x1406727EC (sub_1406727EC.c)
 *     sub_1406749A4 @ 0x1406749A4 (sub_1406749A4.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     RtlRandom @ 0x1406E2E20 (RtlRandom.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 *     sub_14070A738 @ 0x14070A738 (sub_14070A738.c)
 *     sub_14070A810 @ 0x14070A810 (sub_14070A810.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_14075C2E0 @ 0x14075C2E0 (sub_14075C2E0.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 *     sub_1407E4684 @ 0x1407E4684 (sub_1407E4684.c)
 *     sub_1407E4964 @ 0x1407E4964 (sub_1407E4964.c)
 *     sub_140832270 @ 0x140832270 (sub_140832270.c)
 *     sub_14086305C @ 0x14086305C (sub_14086305C.c)
 *     sub_14097FD74 @ 0x14097FD74 (sub_14097FD74.c)
 *     sub_1409B3020 @ 0x1409B3020 (sub_1409B3020.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 *     sub_1409F25A8 @ 0x1409F25A8 (sub_1409F25A8.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140AFF6B0 @ 0x140AFF6B0 (sub_140AFF6B0.c)
 *     sub_140B0681C @ 0x140B0681C (sub_140B0681C.c)
 *     sub_140B06A84 @ 0x140B06A84 (sub_140B06A84.c)
 *     sub_140B0728C @ 0x140B0728C (sub_140B0728C.c)
 *     sub_140B0751C @ 0x140B0751C (sub_140B0751C.c)
 *     sub_140B07614 @ 0x140B07614 (sub_140B07614.c)
 *     sub_140B076FC @ 0x140B076FC (sub_140B076FC.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B09744 @ 0x140B09744 (sub_140B09744.c)
 *     sub_140B0A680 @ 0x140B0A680 (sub_140B0A680.c)
 *     sub_140B0ABEC @ 0x140B0ABEC (sub_140B0ABEC.c)
 *     sub_140B0B180 @ 0x140B0B180 (sub_140B0B180.c)
 *     sub_140B24668 @ 0x140B24668 (sub_140B24668.c)
 *     sub_140B29610 @ 0x140B29610 (sub_140B29610.c)
 *     sub_140B29EB4 @ 0x140B29EB4 (sub_140B29EB4.c)
 *     sub_140B2A164 @ 0x140B2A164 (sub_140B2A164.c)
 *     sub_140B2DC08 @ 0x140B2DC08 (sub_140B2DC08.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140363220(int a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rcx
  char *v4; // r9
  int v5; // edx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // ebx
  int v10; // ecx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v18; // rdi
  int v19; // eax
  bool v20; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C10E48);
  if ( (_DWORD)v1 == 1 && dword_140C10E40 )
  {
    v15 = (unsigned int)(dword_140C10E40 - 1);
    v8 = dword_140C11040[v15];
    --dword_140C10E40;
    memset(&dword_140C11040[v15], 0, sizeof(_DWORD));
  }
  else
  {
    v3 = 0LL;
    v4 = (char *)&unk_140C10E60 + 228 * v1;
    v5 = *((_DWORD *)v4 + 55);
    v6 = *((_DWORD *)v4 + 56);
    if ( v5 != 54 )
      v3 = (unsigned int)(v5 + 1);
    v7 = 0LL;
    if ( v6 != 54 )
      v7 = (unsigned int)(v6 + 1);
    v8 = *(_DWORD *)&v4[4 * v3] - *(_DWORD *)&v4[4 * v7];
    *(_DWORD *)&v4[4 * v3] = v8;
    *((_DWORD *)v4 + 55) = v3;
    *((_DWORD *)v4 + 56) = v7;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C10E48);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v9 = dword_140C11364 ^ v8;
  if ( _bittest64(&qword_140D068D8, 0x20u) )
  {
    v10 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      if ( _CF )
        break;
      if ( (unsigned int)++v10 >= 0xA )
        return v9;
    }
    v9 ^= _EDX;
  }
  return v9;
}
