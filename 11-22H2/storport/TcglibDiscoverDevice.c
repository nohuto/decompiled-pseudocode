/*
 * XREFs of TcglibDiscoverDevice @ 0x1C00797CC
 * Callers:
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidRefreshTcg @ 0x1C005AB14 (RaidRefreshTcg.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x1C007D704 (TcglibpGetProtocolList.c)
 */

__int64 __fastcall TcglibDiscoverDevice(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( a3 )
  {
    result = TcglibpGetProtocolList(a1, &v7);
    if ( (int)result >= 0 )
    {
      if ( (v7 & 7) == 7 )
      {
        memset_0(a2, 0, 0x1860uLL);
        *(_QWORD *)a2 = a1;
        a2[6] = -60928;
        return TcglibpGetCapabilities(a2, a3);
      }
      else
      {
        return 3221225659LL;
      }
    }
  }
  else
  {
    memset_0(a2, 0, 0x1860uLL);
    result = 0LL;
    *(_QWORD *)a2 = a1;
    a2[6] = -60928;
  }
  return result;
}
