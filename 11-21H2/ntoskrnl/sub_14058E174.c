/*
 * XREFs of sub_14058E174 @ 0x14058E174
 * Callers:
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_14058E174(unsigned __int64 a1)
{
  bool v2; // si
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rax
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax

  v2 = 0;
  v3 = sub_1402828F0(64, 0x20uLL, 0x6C42694Du);
  v4 = v3;
  if ( !v3 )
    return (char)v3;
  v5 = ExAcquireSpinLockExclusive(&dword_140C51E90);
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
    goto LABEL_19;
  v6 = (_QWORD *)qword_140C51E80;
  while ( v6 )
  {
    if ( a1 <= v6[3] )
    {
      if ( a1 >= v6[3] )
        goto LABEL_19;
      v6 = (_QWORD *)*v6;
    }
    else
    {
      v6 = (_QWORD *)v6[1];
    }
  }
  v4[3] = a1;
  v7 = 0;
  v8 = (_QWORD *)qword_140C51E80;
  if ( !qword_140C51E80 )
    goto LABEL_18;
  while ( a1 < v8[3] )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_18;
LABEL_16:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_16;
  v7 = 1;
LABEL_18:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C51E80, (unsigned __int64)v8, v7, v4);
  v10 = qword_140C51E98-- == 1;
  v4 = 0LL;
  v2 = v10;
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51E90);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  LOBYTE(v3) = v2;
  return (char)v3;
}
