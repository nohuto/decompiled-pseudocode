/*
 * XREFs of ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x180005E3C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000411C (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?FallBackToBDD@@YA_NXZ @ 0x180004898 (-FallBackToBDD@@YA_NXZ.c)
 *     ?ForceBasicDisplayAdapter@@YA_NXZ @ 0x180004A24 (-ForceBasicDisplayAdapter@@YA_NXZ.c)
 *     ?SkipRestartHeuristic@@YA_NXZ @ 0x180005F88 (-SkipRestartHeuristic@@YA_NXZ.c)
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
    v3 = byte_180015A58;
    if ( byte_180015A58
      && (byte_180015A58 &= -((unsigned __int64)(*(_QWORD *)&a1 - qword_180015B40) < 0x23C34600),
          ((unsigned __int8)v3 & (unsigned __int8)-((unsigned __int64)(*(_QWORD *)&a1 - qword_180015B40) < 0x23C34600)) != 0) )
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
      byte_180015A58 = 1;
      v4 = 0;
      qword_180015B40 = (__int64)a1;
    }
    v2 = 0;
    goto LABEL_13;
  }
  if ( FallBackToBDD() || byte_180015A70 )
  {
    v2 = 0;
    byte_180015A70 = 1;
  }
  return v2;
}
