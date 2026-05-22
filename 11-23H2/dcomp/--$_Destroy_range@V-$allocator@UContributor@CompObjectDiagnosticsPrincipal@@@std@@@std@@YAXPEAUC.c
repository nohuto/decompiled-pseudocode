/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C104
 * Callers:
 *     ??$_Uninitialized_move@PEAUContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@0PEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C4B0 (--$_Uninitialized_move@PEAUContributor@CompObjectDiagnosticsPrincipal@@V-$allocator@UContributor.c)
 *     ??1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019CA68 (--1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ.c)
 *     ?ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019D780 (-ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Compositio.c)
 *     ?_Change_array@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@AEAAXQEAUContributor@CompObjectDiagnosticsPrincipal@@_K1@Z @ 0x18019E52C (-_Change_array@-$vector@UContributor@CompObjectDiagnosticsPrincipal@@V-$allocator@UContributor@C.c)
 * Callees:
 *     ??1Contributor@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019C8BC (--1Contributor@CompObjectDiagnosticsPrincipal@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>(
        CompObjectDiagnosticsPrincipal::Contributor *this,
        CompObjectDiagnosticsPrincipal::Contributor *a2)
{
  CompObjectDiagnosticsPrincipal::Contributor *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CompObjectDiagnosticsPrincipal::Contributor::~Contributor(v3);
      v3 = (CompObjectDiagnosticsPrincipal::Contributor *)((char *)v3 + 32);
    }
    while ( v3 != a2 );
  }
}
