/*
 * XREFs of sub_1405A19E0 @ 0x1405A19E0
 * Callers:
 *     sub_14059D69C @ 0x14059D69C (sub_14059D69C.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1405A19E0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  KIRQL v6; // bl
  int v7; // r8d
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf

  v3 = *a1;
  if ( a3 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  if ( !*(_DWORD *)(a2 + 12) )
  {
    v7 = *(_DWORD *)(v3 + 56);
    v8 = 0LL;
    if ( (v7 & 0x20) != 0 )
      v9 = *(_QWORD **)(v3 + 80);
    else
      v9 = (_QWORD *)a1[3];
    if ( !v9 )
      goto LABEL_13;
    do
    {
      if ( v9 == (_QWORD *)a2 )
        break;
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
    while ( v9 );
    if ( v8 )
    {
      *v8 = *v9;
    }
    else
    {
LABEL_13:
      v10 = *v9;
      if ( (v7 & 0x20) != 0 )
        *(_QWORD *)(v3 + 80) = v10;
      else
        a1[3] = v10;
    }
  }
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
}
