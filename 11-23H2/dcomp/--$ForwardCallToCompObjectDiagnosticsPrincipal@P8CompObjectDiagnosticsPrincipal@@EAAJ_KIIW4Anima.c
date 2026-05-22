/*
 * XREFs of ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIIW42@W43@V45@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0II123@Z @ 0x18019E5A8
 * Callers:
 *     ?AnimationEnded@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@I_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019EC30 (-AnimationEnded@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A998 (--1-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$TryGetPrincipal@VCompObjectDiagnosticsPrincipal@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIPEAPEAVCompObjectDiagnosticsPrincipal@@@Z @ 0x18019E7F0 (--$TryGetPrincipal@VCompObjectDiagnosticsPrincipal@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIPE.c)
 */

__int64 __fastcall CompObjectDiagnosticsRootPrincipal::ForwardCallToCompObjectDiagnosticsPrincipal<long (CompObjectDiagnosticsPrincipal::*)(unsigned __int64,unsigned int,unsigned int,enum AnimationEndedReasonType,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>),unsigned __int64,unsigned int,unsigned int,enum AnimationEndedReasonType,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        __int128 *a9)
{
  unsigned int v9; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v16; // [rsp+40h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(int *)(v12 + 8) <= 0 )
    v13 = 0LL;
  else
    v13 = *(_QWORD *)(v12 + 16);
  v17 = 0LL;
  Microsoft::Bamo::BaseBamoConnection::TryGetPrincipal<CompObjectDiagnosticsPrincipal>(v13, a3, &v17);
  if ( v17 )
  {
    v14 = v17 + *(int *)(a2 + 8);
    v16 = *a9;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int, __int128 *))a2)(
           v14,
           a4,
           a5,
           a6,
           a7,
           a8,
           &v16);
  }
  wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v17);
  return v9;
}
