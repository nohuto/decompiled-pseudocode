/*
 * XREFs of sub_140590B00 @ 0x140590B00
 * Callers:
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall sub_140590B00(_WORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rdx
  bool v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf

  result = sub_1402828F0(64, 0x30uLL, 0x734B694Du);
  v5 = result;
  if ( result )
  {
    result[3] = *a2 - 1LL;
    result[4] = a2[1];
    *((_WORD *)result + 20) = *a1;
    v6 = ExAcquireSpinLockExclusive(&dword_140C53070);
    v7 = (_QWORD *)qword_140C53068;
    v8 = 0;
    v9 = v6;
    if ( qword_140C53068 )
    {
      v10 = v5[3];
      while ( 1 )
      {
        if ( v10 > v7[3] || v10 >= v7[4] )
        {
          v11 = (_QWORD *)v7[1];
          if ( !v11 )
          {
            v8 = 1;
            break;
          }
        }
        else
        {
          v11 = (_QWORD *)*v7;
          if ( !*v7 )
            break;
        }
        v7 = v11;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C53068, (unsigned __int64)v7, v8, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53070);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    return v5;
  }
  return result;
}
