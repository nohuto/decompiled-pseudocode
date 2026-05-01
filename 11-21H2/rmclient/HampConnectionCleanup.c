/*
 * XREFs of HampConnectionCleanup @ 0x180006684
 * Callers:
 *     HampConnectionDestroy @ 0x180006630 (HampConnectionDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall HampConnectionCleanup(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_DWORD *)(a1 + 112);
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                if ( v6 == 1 )
                  NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021CC0, 1u, 0LL, a1);
              }
              else
              {
                NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021DB0, 1u, 0LL, a1);
              }
            }
            else
            {
              NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021D80, 1u, 0LL, a1);
            }
          }
          else
          {
            NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180022040, 1u, 0LL, a1);
          }
        }
        else
        {
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021B10, 1u, 0LL, a1);
        }
      }
      else
      {
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021D50, 1u, 0LL, a1);
      }
    }
    else
    {
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, a1);
    }
  }
}
