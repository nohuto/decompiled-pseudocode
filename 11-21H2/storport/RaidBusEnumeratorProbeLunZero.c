/*
 * XREFs of RaidBusEnumeratorProbeLunZero @ 0x1C003C948
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C001C7E4 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001B614 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C001BF3C (RaidBusEnumeratorReleaseUnit.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorProbeLunZero(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  char v5; // [rsp+28h] [rbp-70h]
  _BYTE v6[104]; // [rsp+30h] [rbp-68h] BYREF

  memset(v6, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, (__int64)v6);
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorGenericInquiry((__int64)&RaidEnumProbeLunZeroCallback, (__int64)a1, a2, (__int64)v6, 0x24u, v5);
    RaidBusEnumeratorReleaseUnit(a1, (__int64)v6);
    return v6[93] == 0 ? 0xC000000E : 0;
  }
  return result;
}
