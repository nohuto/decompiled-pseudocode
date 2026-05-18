/*
 * XREFs of ?_Buy_nonzero@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008D46C
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C848 (--$_Construct_n@$$V@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spect.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 */

__int64 __fastcall std::vector<Spectre::Utils::Math::Vector3>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1555555555555555LL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  return std::vector<Spectre::Utils::Math::Vector3>::_Buy_raw();
}
