/*
 * XREFs of sub_1403CF758 @ 0x1403CF758
 * Callers:
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     sub_14084B418 @ 0x14084B418 (sub_14084B418.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1403CF758(__int64 a1, int a2)
{
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  if ( !*(_QWORD *)(a1 + 56) )
    return;
  v4 = (unsigned __int64 *)(a1 + 256);
  v5 = ExAcquireSpinLockExclusive(&dword_140C531C8);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C531C0, v4);
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v7 = 0;
  v8 = (_QWORD *)qword_140C531C0;
  if ( !qword_140C531C0 )
    goto LABEL_4;
  while ( v6 < *(v8 - 25) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_4;
LABEL_10:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_10;
  v7 = 1;
LABEL_4:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C531C0, (unsigned __int64)v8, v7, v4);
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C531C8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
}
