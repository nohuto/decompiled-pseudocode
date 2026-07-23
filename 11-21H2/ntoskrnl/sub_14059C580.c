/*
 * XREFs of sub_14059C580 @ 0x14059C580
 * Callers:
 *     sub_14096EEE8 @ 0x14096EEE8 (sub_14096EEE8.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E22B0 @ 0x1402E22B0 (sub_1402E22B0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403CF728 @ 0x1403CF728 (sub_1403CF728.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG __fastcall sub_14059C580(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  ULONG v9; // edi
  unsigned __int64 v10; // r15
  char v11; // bl
  LONG result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf

  v3 = (volatile LONG *)(a2 + 232);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 232));
  v8 = *(_QWORD *)(a2 + 112);
  v9 = *(_DWORD *)a2;
  v10 = v7;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), *(_DWORD *)a2, a3);
  RtlClearBits((PRTL_BITMAP)(v8 + 24), v9, a3);
  LOBYTE(v8) = *(_BYTE *)(a2 + 206);
  *(_QWORD *)a2 += a3;
  *(_QWORD *)(a2 + 24) += a3;
  *(_QWORD *)(a2 + 48) += a3;
  v11 = v8 & 1;
  ++*(_DWORD *)(a2 + 128);
  sub_1402E22B0(a2, 0, v9);
  sub_1403CF728(*(_QWORD *)(a2 + 248), 0LL, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  result = dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v11 )
    return KeSetEvent((PRKEVENT)(a1 + 904), 0, 0);
  return result;
}
