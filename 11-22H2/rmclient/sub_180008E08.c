/*
 * XREFs of sub_180008E08 @ 0x180008E08
 * Callers:
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 * Callees:
 *     HamFreeBuffer_0 @ 0x180009A20 (HamFreeBuffer_0.c)
 */

void __fastcall sub_180008E08(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *(_QWORD *)a1 )
  {
    if ( *(_BYTE *)(a1 + 156) )
    {
      switch ( *(_BYTE *)(a1 + 156) )
      {
        case 1:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209E0, 1u, 0LL, a1);
          break;
        case 2:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B88, 1u, 0LL, a1);
          break;
        case 3:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020EF0, 1u, 0LL, a1);
          break;
        case 4:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020920, 1u, 0LL, a1);
          break;
        default:
          a2 = (unsigned int)*(unsigned __int8 *)(a1 + 156) - 5;
          if ( *(_BYTE *)(a1 + 156) == 5 )
          {
            NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020CE0, 1u, 0LL, a1);
          }
          else if ( *(_BYTE *)(a1 + 156) == 6 )
          {
            NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B58, 1u, 0LL, a1);
          }
          break;
      }
    }
    else
    {
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 2u, 0LL, a1);
    }
  }
  v5 = *(_QWORD *)(a1 + 136);
  if ( v5 )
    HamFreeBuffer_0(v5, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 144);
  if ( v6 )
    HamFreeBuffer_0(v6, a2, a3, a4);
}
