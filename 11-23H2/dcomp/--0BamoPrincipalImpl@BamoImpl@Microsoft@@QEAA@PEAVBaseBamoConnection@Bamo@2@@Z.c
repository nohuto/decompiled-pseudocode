/*
 * XREFs of ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18019C5A4
 * Callers:
 *     ??0CompObjectDiagnosticsPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAVCompositor@Composition@UI@Windows@@PEAVDebugReference@Private@456@PEAUIDebugAnimationCallback@8456@@Z @ 0x18019C604 (--0CompObjectDiagnosticsPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAVComp.c)
 *     ??0CompObjectDiagnosticsRootPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAK@Z @ 0x18019E89C (--0CompObjectDiagnosticsRootPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAK.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  __int64 v3; // rcx
  Microsoft::BamoImpl::BamoPrincipalImpl *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 56LL))(a2)
                 + 96);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *((_DWORD *)this + 6) = 0;
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
