/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C024D55C
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024CE58 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00AB4C8 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C02AA304 (GreGetHFONT.c)
 *     GreGetMapMode @ 0x1C02D0428 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int MapMode; // eax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(GetDPIServerInfo((__int64)a1) + 24);
  if ( GreGetHFONT(a1) != v2 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v4 = 1;
  if ( MapMode != 1 )
    return 0;
  return v4;
}
