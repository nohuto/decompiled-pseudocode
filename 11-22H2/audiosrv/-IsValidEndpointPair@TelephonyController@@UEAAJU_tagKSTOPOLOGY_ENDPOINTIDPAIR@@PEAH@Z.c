/*
 * XREFs of ?IsValidEndpointPair@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAH@Z @ 0x180167530
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?Find@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAU3@@Z @ 0x180166520 (-Find@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@.c)
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x1801667EC (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 */

__int64 __fastcall TelephonyController::IsValidEndpointPair(__int64 **a1, _OWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 *v16; // rax
  int SupportedCellularRoutingPairs; // eax
  _BYTE v19[1048]; // [rsp+20h] [rbp-438h] BYREF

  v3 = 8LL;
  v6 = v19;
  do
  {
    v7 = a2[1];
    *v6 = *a2;
    v8 = a2[2];
    v6[1] = v7;
    v9 = a2[3];
    v6[2] = v8;
    v10 = a2[4];
    v6[3] = v9;
    v11 = a2[5];
    v6[4] = v10;
    v12 = a2[6];
    v6[5] = v11;
    v13 = a2[7];
    a2 += 8;
    v6[6] = v12;
    v6 += 8;
    *(v6 - 1) = v13;
    --v3;
  }
  while ( v3 );
  v14 = *((_QWORD *)a2 + 2);
  v15 = 0;
  *v6 = *a2;
  *((_QWORD *)v6 + 2) = v14;
  if ( a3 )
  {
    v16 = ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find(
            a1 + 9,
            (const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)v19);
    if ( !v16 )
    {
      SupportedCellularRoutingPairs = TelephonyController::GetSupportedCellularRoutingPairs((TelephonyController *)a1);
      if ( SupportedCellularRoutingPairs < 0 )
        return (unsigned int)SupportedCellularRoutingPairs;
      v16 = ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find(
              a1 + 9,
              (const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)v19);
    }
    *a3 = v16 != 0LL;
    return v15;
  }
  return (unsigned int)-2147467261;
}
