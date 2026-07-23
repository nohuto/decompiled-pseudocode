/*
 * XREFs of RtlTestProtectedAccess @ 0x1406B828C
 * Callers:
 *     PspCheckForInvalidAccessByProtection @ 0x1406B825C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406B908C (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x1406B90C0 (PspValidateCreateProcessProtection.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PopBlackBoxUpdate @ 0x140785850 (PopBlackBoxUpdate.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1407FC82C (EtwCheckSecurityLoggerAccess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  int v3; // eax

  if ( (Target.Level & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
    return 0;
  v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4)];
  return _bittest(&v3, Target.Level >> 4);
}
