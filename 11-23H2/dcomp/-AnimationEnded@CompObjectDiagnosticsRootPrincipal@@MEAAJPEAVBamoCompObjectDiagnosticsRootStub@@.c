/*
 * XREFs of ?AnimationEnded@CompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoCompObjectDiagnosticsRootStub@@I_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019EC30
 * Callers:
 *     <none>
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z_KIIW42@W43@V45@@CompObjectDiagnosticsRootPrincipal@@QEAAJP8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@ZI0II123@Z @ 0x18019E5A8 (--$ForwardCallToCompObjectDiagnosticsPrincipal@P8CompObjectDiagnosticsPrincipal@@EAAJ_KIIW4Anima.c)
 */

__int64 __fastcall CompObjectDiagnosticsRootPrincipal::AnimationEnded(
        gsl::details *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned int a10)
{
  __int64 (__fastcall *v11)(CompObjectDiagnosticsPrincipal *, __int64, unsigned int, int, int, unsigned int, __int128 *); // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp-20h]
  __int128 v13; // [rsp+60h] [rbp-18h] BYREF

  if ( !a9 && a10 )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  v12 = 0;
  *(_QWORD *)&v13 = a10;
  v11 = CompObjectDiagnosticsPrincipal::AnimationEnded;
  *((_QWORD *)&v13 + 1) = a9;
  return CompObjectDiagnosticsRootPrincipal::ForwardCallToCompObjectDiagnosticsPrincipal<long (CompObjectDiagnosticsPrincipal::*)(unsigned __int64,unsigned int,unsigned int,enum AnimationEndedReasonType,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>),unsigned __int64,unsigned int,unsigned int,enum AnimationEndedReasonType,enum DCOMPOSITION_EXPRESSION_TYPE,gsl::span<unsigned char const,-1>>(
           (__int64)a1,
           (__int64)&v11,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           &v13);
}
