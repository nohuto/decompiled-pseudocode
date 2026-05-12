/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x1C001C7E4
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C001AD6C (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0038CE0 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001AE84 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C001BF3C (RaidBusEnumeratorReleaseUnit.c)
 *     RaidAdapterFindZombieUnit @ 0x1C001C8BC (RaidAdapterFindZombieUnit.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C003C948 (RaidBusEnumeratorProbeLunZero.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int8 i; // bl
  int v8; // edi
  _BYTE v9[96]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v10; // [rsp+90h] [rbp+8h]

  memset(v9, 0, sizeof(v9));
  result = RaidBusEnumeratorGetUnit(a1, a2, (__int64)v9);
  if ( (int)result >= 0 )
  {
    if ( (int)RaidBusEnumeratorGetLunListFromTarget(a1, a2, (int)v9, a3) < 0 )
    {
      v8 = RaidBusEnumeratorProbeLunZero(a1, a2);
      memset(a3, 0, 0xFFuLL);
      if ( v8 >= 0 )
        *a3 = 0x101010101010101LL;
    }
    RaidBusEnumeratorReleaseUnit(a1, (__int64)v9);
    v10 = a2;
    for ( i = 0; i != 0xFF; ++i )
    {
      BYTE2(v10) = i;
      if ( RaidAdapterFindUnit(*a1, v10) || RaidAdapterFindZombieUnit(*a1, v10) )
        *((_BYTE *)a3 + i) = 1;
    }
    return 0LL;
  }
  return result;
}
