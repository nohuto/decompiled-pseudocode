/*
 * XREFs of sub_1406D407C @ 0x1406D407C
 * Callers:
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_140AB4464 @ 0x140AB4464 (sub_140AB4464.c)
 */

void __fastcall sub_1406D407C(unsigned __int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v4; // rcx

  if ( a1 < a2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1784, 0LL);
    sub_140AB4464(a2);
  }
  else
  {
    if ( a1 > a2 )
    {
      sub_140AB4464(a2);
      v4 = a1 + 1784;
    }
    else
    {
      v4 = a2 + 1784;
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
}
