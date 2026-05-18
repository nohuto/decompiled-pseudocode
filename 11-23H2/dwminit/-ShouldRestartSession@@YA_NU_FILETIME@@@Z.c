/*
 * XREFs of ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000B7CC
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000A454 (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000AB98 (-FallBackToBDD@@YA_NXZ.c)
 *     ?ForceBasicDisplayAdapter@@YA_NXZ @ 0x18000AD24 (-ForceBasicDisplayAdapter@@YA_NXZ.c)
 *     ?SkipRestartHeuristic@@YA_NXZ @ 0x18000B918 (-SkipRestartHeuristic@@YA_NXZ.c)
 */

char __fastcall ShouldRestartSession(struct _FILETIME a1)
{
  char v2; // di
  char v3; // cl
  int v4; // eax
  bool v5; // zf

  v2 = 1;
  if ( SkipRestartHeuristic() )
    return 0;
  if ( !ForceBasicDisplayAdapter() )
  {
    v3 = byte_180016B98;
    if ( byte_180016B98
      && (byte_180016B98 &= -((unsigned __int64)(*(_QWORD *)&a1 - qword_180016C68) < 0x23C34600),
          ((unsigned __int8)v3 & (unsigned __int8)-((unsigned __int64)(*(_QWORD *)&a1 - qword_180016C68) < 0x23C34600)) != 0) )
    {
      v4 = gDwmNumRetriesSoFar;
      if ( gDwmNumRetriesSoFar >= 7 )
      {
        v5 = !FallBackToBDD();
        v4 = gDwmNumRetriesSoFar;
        v2 = v5;
LABEL_13:
        gDwmNumRetriesSoFar = v4 + 1;
        return v2;
      }
    }
    else
    {
      byte_180016B98 = 1;
      v4 = 0;
      qword_180016C68 = (__int64)a1;
    }
    v2 = 0;
    goto LABEL_13;
  }
  if ( FallBackToBDD() || byte_180016BA8 )
  {
    v2 = 0;
    byte_180016BA8 = 1;
  }
  return v2;
}
