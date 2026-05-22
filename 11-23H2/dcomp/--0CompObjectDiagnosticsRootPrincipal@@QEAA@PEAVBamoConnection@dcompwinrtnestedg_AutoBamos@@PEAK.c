/*
 * XREFs of ??0CompObjectDiagnosticsRootPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAK@Z @ 0x18019E89C
 * Callers:
 *     ?Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z @ 0x18016C764 (-Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18019C5A4 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

CompObjectDiagnosticsRootPrincipal *__fastcall CompObjectDiagnosticsRootPrincipal::CompObjectDiagnosticsRootPrincipal(
        CompObjectDiagnosticsRootPrincipal *this,
        struct dcompwinrtnestedg_AutoBamos::BamoConnection *a2,
        unsigned int *a3)
{
  CompObjectDiagnosticsRootPrincipal *result; // rax

  *(_QWORD *)this = &BamoCompObjectDiagnosticsRootPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoCompObjectDiagnosticsRootPrincipal::`vftable'{for `ICompObjectDiagnosticsRootPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (CompObjectDiagnosticsRootPrincipal *)((char *)this + 16),
    a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::`vftable';
  *(_QWORD *)this = &CompObjectDiagnosticsRootPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoCompObjectDiagnosticsRootPrincipal::`vftable'{for `ICompObjectDiagnosticsRootPrincipal'};
  result = this;
  *((_QWORD *)this + 7) = a3;
  return result;
}
