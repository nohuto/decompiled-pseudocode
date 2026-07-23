/*
 * XREFs of sub_1406EA1C8 @ 0x1406EA1C8
 * Callers:
 *     sub_1406EA120 @ 0x1406EA120 (sub_1406EA120.c)
 * Callees:
 *     sub_14025D1A4 @ 0x14025D1A4 (sub_14025D1A4.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1403DCFAC @ 0x1403DCFAC (sub_1403DCFAC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14085ED9C @ 0x14085ED9C (sub_14085ED9C.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 */

__int64 __fastcall sub_1406EA1C8(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx

  sub_14025D1A4();
  v2 = 0;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( _InterlockedExchange(dword_140D3B298, 0) )
    {
      v4 = a1 - 4096;
      if ( v4 )
      {
        sub_1403DCFAC();
        if ( dword_140D3B120 )
          v2 = sub_14090BC6C(v4);
        sub_14042A5E0(v6, v5);
        sub_14085ED9C();
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return v2;
}
