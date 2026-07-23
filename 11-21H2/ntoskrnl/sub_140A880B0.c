/*
 * XREFs of sub_140A880B0 @ 0x140A880B0
 * Callers:
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A85150 @ 0x140A85150 (sub_140A85150.c)
 *     sub_140A85600 @ 0x140A85600 (sub_140A85600.c)
 *     sub_140A856B0 @ 0x140A856B0 (sub_140A856B0.c)
 *     sub_140A859A0 @ 0x140A859A0 (sub_140A859A0.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86C30 @ 0x140A86C30 (sub_140A86C30.c)
 *     sub_140A86EA0 @ 0x140A86EA0 (sub_140A86EA0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A8798C @ 0x140A8798C (sub_140A8798C.c)
 *     sub_140A8833C @ 0x140A8833C (sub_140A8833C.c)
 */

__int64 __fastcall sub_140A880B0(__int64 a1, _SLIST_ENTRY *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  _SLIST_ENTRY *Next; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rdi
  unsigned int v13; // esi
  char *i; // rdi
  __int64 v15; // rcx
  unsigned int v16; // r9d
  ULONG_PTR v17; // r8
  __int64 v18; // rdx
  _SLIST_ENTRY *v19; // rcx

  if ( !a2 || LODWORD(a2->Next) != -1393569779 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v5 = *((_QWORD *)&a2->Next + 1);
  Next = a2[1].Next;
  if ( *(_SLIST_ENTRY **)(v5 + 8) != (_SLIST_ENTRY *)(&a2->Next + 1) || Next->Next != (_SLIST_ENTRY *)(&a2->Next + 1) )
    __fastfail(3u);
  Next->Next = (_SLIST_ENTRY *)v5;
  *(_QWORD *)(v5 + 8) = Next;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 120));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  LODWORD(a2->Next) = 0;
  v12 = *((_QWORD *)&a2[2].Next + 1);
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v12 + 24), *((PMDL *)&a2[2].Next + 1));
    IoFreeMdl((PMDL)v12);
  }
  MmUnmapLockedPages(a2[4].Next, *((PMDL *)&a2[3].Next + 1));
  v13 = 0;
  for ( i = (char *)(&a2[5].Next + 1); v13 < *((_DWORD *)&a2[1].Next + 3); i += 32 )
  {
    v15 = *((_QWORD *)i + 2);
    if ( *(_QWORD *)i )
    {
      v16 = *((_DWORD *)i + 2);
      v17 = (*(_DWORD *)i & 0xFFF) + v15 + 4096;
    }
    else
    {
      v17 = 0LL;
      v16 = 0;
    }
    sub_140A8798C(v15, 0x3000u, v17, v16);
    v18 = *((_QWORD *)i + 2);
    *((_DWORD *)i + 3) = 0;
    if ( !(unsigned int)sub_140A8833C(a1, v18, v13) )
      ExFreePoolWithTag(*((PVOID *)i + 2), 0);
    ++v13;
  }
  IoFreeMdl(*((PMDL *)&a2[3].Next + 1));
  v19 = (_SLIST_ENTRY *)*((_QWORD *)&a2[4].Next + 1);
  if ( v19 )
    sub_1402DB870(v19);
  memset(a2, 0, 0x78uLL);
  sub_1402DB870(a2);
  return 1LL;
}
