/*
 * XREFs of ?DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z @ 0x18019D634
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 *     ?AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019CF70 (-AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSIT.c)
 *     ?AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D1A0 (-AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$sp.c)
 *     ?DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D400 (-DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 *     ?NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D92C (-NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$span@$.c)
 *     ?PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019DCD0 (-PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 * Callees:
 *     <none>
 */

char __fastcall CompObjectDiagnosticsPrincipal::DirectlyTargetsProperty(CompObjectDiagnosticsPrincipal *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _DWORD *i; // rcx

  v2 = *((_QWORD *)this + 12);
  v3 = *((_QWORD *)this + 13);
LABEL_7:
  if ( v2 == v3 )
    return 0;
  for ( i = *(_DWORD **)(*(_QWORD *)v2 + 48LL); ; ++i )
  {
    if ( i == *(_DWORD **)(*(_QWORD *)v2 + 56LL) )
    {
      v2 += 8LL;
      goto LABEL_7;
    }
    if ( *i == a2 )
      break;
  }
  return 1;
}
