/*
 * XREFs of sub_140251340 @ 0x140251340
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14033E280 @ 0x14033E280 (sub_14033E280.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 * Callees:
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140251340(__int64 *BugCheckParameter2)
{
  __int64 v1; // rdi
  KIRQL v3; // al
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v1 = *BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  ++*(_QWORD *)(v1 + 40);
  v4 = v3;
  v5 = *(_DWORD *)(v1 + 56);
  if ( (v5 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v5 & 0x400) == 0 )
    sub_140286EC0((ULONG_PTR)BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
