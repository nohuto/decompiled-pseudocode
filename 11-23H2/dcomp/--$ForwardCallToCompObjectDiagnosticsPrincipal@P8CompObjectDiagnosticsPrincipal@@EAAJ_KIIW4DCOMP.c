/*
 * XREFs of ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIIW42@V34@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0II12@Z @ 0x18019E678
 * Callers:
 *     ?AnimationStarted@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@I_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019EE40 (-AnimationStarted@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub.c)
 *     ?PropertyChanged@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@I_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019F440 (-PropertyChanged@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A998 (--1-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$TryGetPrincipal@VCompObjectDiagnosticsPrincipal@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIPEAPEAVCompObjectDiagnosticsPrincipal@@@Z @ 0x18019E7F0 (--$TryGetPrincipal@VCompObjectDiagnosticsPrincipal@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIPE.c)
 */

__int64 __fastcall CompObjectDiagnosticsRootPrincipal::ForwardCallToCompObjectDiagnosticsPrincipal<long (CompObjectDiagnosticsPrincipal::*)(unsigned __int64,unsigned int,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>),unsigned __int64,unsigned int,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int128 *a8)
{
  unsigned int v8; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(int *)(v11 + 8) <= 0 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(v11 + 16);
  v16 = 0LL;
  Microsoft::Bamo::BaseBamoConnection::TryGetPrincipal<CompObjectDiagnosticsPrincipal>(v12, a3, &v16);
  if ( v16 )
  {
    v13 = v16 + *(int *)(a2 + 8);
    v15 = *a8;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int128 *))a2)(v13, a4, a5, a6, a7, &v15);
  }
  wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v16);
  return v8;
}
