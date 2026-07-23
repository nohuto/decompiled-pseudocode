/*
 * XREFs of sub_140284860 @ 0x140284860
 * Callers:
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 * Callees:
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140284860(__int64 a1)
{
  __int64 v1; // rbp
  bool v2; // si
  unsigned __int8 v3; // bl
  __int64 v4; // rax
  ULONG_PTR *v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0;
  v3 = 17;
  v12 = 17;
  if ( a1 )
  {
    v4 = sub_14028494C(a1, 1LL, &v12);
    v1 = v4;
    if ( !v4 )
      return 1;
    v3 = v12;
    v5 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF));
  }
  else
  {
    v5 = &StartContext;
  }
  if ( (unsigned int)sub_140285380(v5, (_BYTE)dword_140D051DC != 0 ? 0x4000LL : 450LL) )
  {
    v2 = 1;
  }
  else
  {
    if ( v5[2160] < v5[2188] + 800 )
      v2 = (unsigned int)sub_140285380(v5, 80LL) != 0;
    v3 = v12;
  }
  if ( v3 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v3 = v12;
          v10 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  return v2;
}
