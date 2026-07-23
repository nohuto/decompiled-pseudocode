/*
 * XREFs of sub_140281480 @ 0x140281480
 * Callers:
 *     sub_1406E2C14 @ 0x1406E2C14 (sub_1406E2C14.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_1403106E0 @ 0x1403106E0 (sub_1403106E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1406F608C @ 0x1406F608C (sub_1406F608C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140281480(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  unsigned int v2; // edi
  int v3; // r13d
  _QWORD *v4; // r15
  __int64 v7; // r14
  _DWORD *v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 i; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (*(_BYTE *)(v7 + 1848) & 7) == 2 )
    v8 = &unk_140C53D00;
  else
    v8 = (_DWORD *)(v7 + 1856);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    sub_140461A66(v8, CurrentIrql);
  else
    sub_14030F870(v8, CurrentIrql);
  v8[1] = 0;
  for ( i = *(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( v2 <= 1 && *(_DWORD *)(i + 64) == 2 )
      ++v2;
    if ( (_QWORD *)i == BugCheckParameter3 )
    {
      v3 = 1;
      if ( v4 )
        *v4 = *(_QWORD *)i;
      else
        *(_QWORD *)(BugCheckParameter2 + 56) = *(_QWORD *)i | *(_DWORD *)(BugCheckParameter2 + 56) & 0xF;
    }
    if ( v2 > 1 && v3 )
      break;
    v4 = (_QWORD *)i;
  }
  sub_14030FA80(v7 + 1664, CurrentIrql);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    sub_1406F608C(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v2 == 1 )
  {
    v12 = (unsigned __int8)sub_1403106E0(BugCheckParameter2, v11);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 48), 0xFFFFFFF7);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 48), 0xFFFFFFFC);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
  }
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
