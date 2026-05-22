/*
 * XREFs of ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIW42@V34@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0I12@Z @ 0x18019E73C
 * Callers:
 *     ?DebuggingStarted@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@I_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019F040 (-DebuggingStarted@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A998 (--1-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$TryGetPrincipal@VCompObjectDiagnosticsPrincipal@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIPEAPEAVCompObjectDiagnosticsPrincipal@@@Z @ 0x18019E7F0 (--$TryGetPrincipal@VCompObjectDiagnosticsPrincipal@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIPE.c)
 */

__int64 __fastcall CompObjectDiagnosticsRootPrincipal::ForwardCallToCompObjectDiagnosticsPrincipal<long (CompObjectDiagnosticsPrincipal::*)(unsigned __int64,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>),unsigned __int64,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int128 *a7)
{
  unsigned int v7; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(int *)(v10 + 8) <= 0 )
    v11 = 0LL;
  else
    v11 = *(_QWORD *)(v10 + 16);
  v15 = 0LL;
  Microsoft::Bamo::BaseBamoConnection::TryGetPrincipal<CompObjectDiagnosticsPrincipal>(v11, a3, &v15);
  if ( v15 )
  {
    v12 = v15 + *(int *)(a2 + 8);
    v14 = *a7;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *))a2)(v12, a4, a5, a6, &v14);
  }
  wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v15);
  return v7;
}
