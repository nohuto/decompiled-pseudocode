/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x18008CD54
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C848 (--$_Construct_n@$$V@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spect.c)
 * Callees:
 *     ?_Tidy@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAXXZ @ 0x180085D14 (-_Tidy@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@@st.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Spectre::Utils::Math::Vector3>>::~_Tidy_guard<std::vector<Spectre::Utils::Math::Vector3>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<Spectre::Utils::Math::Vector3>::_Tidy(v1);
}
