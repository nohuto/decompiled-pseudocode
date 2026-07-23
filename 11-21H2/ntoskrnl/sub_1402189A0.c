/*
 * XREFs of sub_1402189A0 @ 0x1402189A0
 * Callers:
 *     sub_140218310 @ 0x140218310 (sub_140218310.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402189A0(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v5; // cl
  _QWORD *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf

  v3 = a1 << 25 >> 16;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && v5 <= 0xFu )
      {
        v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v11 + 20) |= (-1 << (v5 + 1)) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140D311C0);
  v6 = (_QWORD *)BugCheckParameter3;
  v7 = 0LL;
  if ( BugCheckParameter3 )
  {
    do
    {
      v8 = *(v6 - 23);
      if ( v3 > v8 + (unsigned int)(*((_DWORD *)v6 - 42) - 1) )
      {
        v6 = (_QWORD *)v6[1];
      }
      else
      {
        if ( v3 >= v8 )
        {
          if ( v6 )
            v7 = (__int64)(v6 - 29);
          break;
        }
        v6 = (_QWORD *)*v6;
      }
    }
    while ( v6 );
  }
  if ( a2 )
  {
    if ( !v7 )
    {
      v7 = qword_140C4F5E0;
      if ( qword_140C4F5E0 )
      {
        v10 = *(_QWORD *)(qword_140C4F5E0 + 48);
        if ( v3 < v10 || v3 > v10 + (unsigned int)(*(_DWORD *)(qword_140C4F5E0 + 64) - 1) )
          v7 = 0LL;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140D311C0);
  if ( CurrentIrql < 0xFu )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v7;
}
