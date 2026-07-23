/*
 * XREFs of sub_14058C0E4 @ 0x14058C0E4
 * Callers:
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1406EB5A4 @ 0x1406EB5A4 (sub_1406EB5A4.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_14058C0E4(__int64 a1)
{
  BOOL v2; // r14d
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf

  v2 = *(_QWORD *)(a1 + 64) != 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = sub_1402869C0((_QWORD *)(a1 + 128), 24);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v4 )
    return sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)), v2, v4);
  return result;
}
