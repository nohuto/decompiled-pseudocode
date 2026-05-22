/*
 * XREFs of ??$TryGetPrincipal@VCompObjectDiagnosticsPrincipal@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIPEAPEAVCompObjectDiagnosticsPrincipal@@@Z @ 0x18019E7F0
 * Callers:
 *     ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIIW42@W43@V45@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0II123@Z @ 0x18019E5A8 (--$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4Anima.c)
 *     ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIIW42@V34@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0II12@Z @ 0x18019E678 (--$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMP.c)
 *     ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIW42@V34@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0I12@Z @ 0x18019E73C (--$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPO.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18016A878 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016AC8C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18016EEA4 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::TryGetPrincipal<CompObjectDiagnosticsPrincipal>(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rbx
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  struct Microsoft::BamoImpl::BamoPrincipalImpl *v8; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  *a3 = 0LL;
  v6 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v5 + 96));
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v6, a2);
  v8 = Principal;
  if ( Principal )
  {
    *a3 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)Principal + 56LL))(Principal);
    (**(void (__fastcall ***)(struct Microsoft::BamoImpl::BamoPrincipalImpl *))v8)(v8);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v9);
}
