/*
 * XREFs of ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801D7760
 * Callers:
 *     ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1801D711C (-FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z.c)
 *     ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1801D7484 (-GetRunState@Edge@@QEBA-AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D7AEC (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801D7C64 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::IsClientPresent(__int64 a1, int a2)
{
  int v2; // eax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(v2) = *(_QWORD *)(a1 + 40) != 0LL;
    if ( *(_DWORD *)(a1 + 64) )
      v2 |= 2u;
  }
  return (a2 & v2) == a2;
}
