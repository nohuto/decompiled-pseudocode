/*
 * XREFs of PfSnAltProfileFindByScenarioId @ 0x1407E06FC
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1407606E8 (PfSnBeginAppLaunch.c)
 *     PfSnSetAltPrefetchParam @ 0x14097FBF8 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x14097F898 (PfSnAltProfileTreeCompareByScenarioId.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByScenarioId(wchar_t *Str2)
{
  unsigned __int64 Root; // rbx
  int v3; // edi
  int v4; // eax
  unsigned __int64 v5; // rax

  Root = (unsigned __int64)Tree.Root;
  if ( (*(_BYTE *)&Tree.0 & 1) != 0 && Tree.Root )
    Root = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
  v3 = *(_BYTE *)&Tree.0 & 1;
  while ( Root )
  {
    v4 = PfSnAltProfileTreeCompareByScenarioId(Str2);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        break;
      v5 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v5 = *(_QWORD *)Root;
    }
    if ( v3 && v5 )
      Root ^= v5;
    else
      Root = v5;
  }
  if ( Root )
    return Root - 24;
  else
    return 0LL;
}
