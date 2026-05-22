/*
 * XREFs of ?_Change_array@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@AEAAXQEAUContributor@CompObjectDiagnosticsPrincipal@@_K1@Z @ 0x18019E52C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@QEAAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU23@AEAPEAV3@AEBI$$QEAPEAUHSTRING__@@3@Z @ 0x18019C13C (--$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@-$vector.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C104 (--$_Destroy_range@V-$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUC.c)
 */

void __fastcall std::vector<CompObjectDiagnosticsPrincipal::Contributor>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CompObjectDiagnosticsPrincipal::Contributor *v6; // rcx

  v6 = *(CompObjectDiagnosticsPrincipal::Contributor **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>(
      v6,
      *(CompObjectDiagnosticsPrincipal::Contributor **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
