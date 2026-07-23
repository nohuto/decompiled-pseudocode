/*
 * XREFs of sub_1402535D8 @ 0x1402535D8
 * Callers:
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 * Callees:
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402535D8(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // bl
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v3 = 0LL;
  result = sub_14028494C(a1, 1LL, &v13);
  v5 = result;
  if ( result )
  {
    if ( a2 != 8LL * *(_QWORD *)(result + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v7 = *(_QWORD *)(result + 120);
      v3 = 8 * v7;
      *(_QWORD *)(v5 + 120) = (a2 >> 3) | v7 & 0xE000000000000000uLL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v6 = v13;
      if ( v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = v13;
        v11 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v6 = v13;
    }
    result = v6;
    __writecr8(v6);
    if ( v3 )
      return sub_140366814(v3);
  }
  return result;
}
