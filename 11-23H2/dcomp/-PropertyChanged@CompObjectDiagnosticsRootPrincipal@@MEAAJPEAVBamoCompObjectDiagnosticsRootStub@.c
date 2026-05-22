/*
 * XREFs of ?PropertyChanged@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@I_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019F440
 * Callers:
 *     <none>
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIIW42@V34@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0II12@Z @ 0x18019E678 (--$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4DCOMP.c)
 */

__int64 __fastcall CompObjectDiagnosticsRootPrincipal::PropertyChanged(
        gsl::details *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        unsigned int a9)
{
  __int64 (__fastcall *v10)(CompObjectDiagnosticsPrincipal *, __int64, unsigned int, int, unsigned int, _OWORD *); // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF

  if ( !a8 && a9 )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  v11 = 0;
  *(_QWORD *)&v12 = a9;
  v10 = CompObjectDiagnosticsPrincipal::PropertyChanged;
  *((_QWORD *)&v12 + 1) = a8;
  return CompObjectDiagnosticsRootPrincipal::ForwardCallToCompObjectDiagnosticsPrincipal<long (CompObjectDiagnosticsPrincipal::*)(unsigned __int64,unsigned int,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>),unsigned __int64,unsigned int,unsigned int,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>>(
           (__int64)a1,
           (__int64)&v10,
           a3,
           a4,
           a5,
           a6,
           a7,
           &v12);
}
