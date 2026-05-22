/*
 * XREFs of ?DebuggingStarted@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@I_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019F040
 * Callers:
 *     <none>
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIW42@V34@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0I12@Z @ 0x18019E73C (--$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIW4DCOMPO.c)
 */

__int64 __fastcall CompObjectDiagnosticsRootPrincipal::DebuggingStarted(
        gsl::details *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 (__fastcall *v9)(CompObjectDiagnosticsPrincipal *, __int64, unsigned int, unsigned int, __int128 *); // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF

  if ( !a7 && a8 )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  v10 = 0;
  *(_QWORD *)&v11 = a8;
  v9 = CompObjectDiagnosticsPrincipal::DebuggingStarted;
  *((_QWORD *)&v11 + 1) = a7;
  return CompObjectDiagnosticsRootPrincipal::ForwardCallToCompObjectDiagnosticsPrincipal<long (CompObjectDiagnosticsPrincipal::*)(unsigned __int64,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>),unsigned __int64,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>>(
           (__int64)a1,
           (__int64)&v9,
           a3,
           a4,
           a5,
           a6,
           &v11);
}
