/*
 * XREFs of PopPowerRequestGetDiagnosticBuffer @ 0x1407A6878
 * Callers:
 *     PopUmpoSendPowerRequestCreate @ 0x1407A67DC (PopUmpoSendPowerRequestCreate.c)
 * Callees:
 *     PoStoreDiagnosticContext @ 0x14032B7E8 (PoStoreDiagnosticContext.c)
 */

__int64 __fastcall PopPowerRequestGetDiagnosticBuffer(int a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  PVOID *i; // rcx

  for ( i = (PVOID *)PopPowerRequestObjectList; ; i = (PVOID *)*i )
  {
    if ( i == &PopPowerRequestObjectList )
      return 3221226021LL;
    if ( *((_DWORD *)i + 9) == a1 )
      break;
  }
  return PoStoreDiagnosticContext((__int64)i[12], a2, a3);
}
