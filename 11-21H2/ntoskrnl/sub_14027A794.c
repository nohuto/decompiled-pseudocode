/*
 * XREFs of sub_14027A794 @ 0x14027A794
 * Callers:
 *     sub_1402598CC @ 0x1402598CC (sub_1402598CC.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_14066BA80 @ 0x14066BA80 (sub_14066BA80.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     sub_14070F3A8 @ 0x14070F3A8 (sub_14070F3A8.c)
 * Callees:
 *     sub_14027A950 @ 0x14027A950 (sub_14027A950.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14027A794(__int64 a1, __int64 a2)
{
  ULONG v3; // esi
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  v3 = a2;
  result = sub_14027A950(a1 + 64, a2);
  if ( !result )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
    v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 )
      ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), v3);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    return v6;
  }
  return result;
}
