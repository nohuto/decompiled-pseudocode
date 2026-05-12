/*
 * XREFs of RaidBusEnumeratorProbeLunZero @ 0x1C0014634
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C0017C9C (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorGetUnit @ 0x1C00164A4 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0016988 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C00177A8 (RaidBusEnumeratorReleaseUnit.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall RaidBusEnumeratorProbeLunZero(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _BYTE v5[104]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v5, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v5);
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumProbeLunZeroCallback, a1, a2, (unsigned int)v5, 36);
    RaidBusEnumeratorReleaseUnit(a1, v5);
    return v5[93] == 0 ? 0xC000000E : 0;
  }
  return result;
}
