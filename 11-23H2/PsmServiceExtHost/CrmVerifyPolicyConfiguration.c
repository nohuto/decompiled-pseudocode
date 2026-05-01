/*
 * XREFs of CrmVerifyPolicyConfiguration @ 0x18004BA3C
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x18002C280 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvActivityAllocate @ 0x180038B3C (CrmSrvActivityAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmVerifyPolicyConfiguration(int a1, _DWORD *a2)
{
  int v2; // eax
  int v4; // eax
  unsigned int v5; // ecx

  if ( a1 == 1301 )
  {
    v4 = 0;
    if ( a2 )
    {
      v5 = 0;
      while ( *a2 < 3u )
      {
        if ( *a2 != 2 )
          v4 = 1;
        ++v5;
        ++a2;
        if ( v5 >= 7 )
        {
          v2 = -(v4 == 0);
          return v2 & 0xC000000D;
        }
      }
    }
    return 3221225485LL;
  }
  else
  {
    v2 = -(a2 != 0LL);
    return v2 & 0xC000000D;
  }
}
