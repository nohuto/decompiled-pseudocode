/*
 * XREFs of RtlTestProtectedAccess @ 0x1406B828C
 * Callers:
 *     PspCheckForInvalidAccessByProtection @ 0x1406B825C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406B908C (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x1406B90C0 (PspValidateCreateProcessProtection.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     PopBlackBoxUpdate @ 0x140785340 (PopBlackBoxUpdate.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1407FC17C (EtwCheckSecurityLoggerAccess.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v3; // eax

  if ( (a2 & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
    return 0;
  v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
  return _bittest(&v3, a2 >> 4);
}
