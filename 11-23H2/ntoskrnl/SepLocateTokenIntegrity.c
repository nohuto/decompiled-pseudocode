/*
 * XREFs of SepLocateTokenIntegrity @ 0x140370E18
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140225CC0 (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CDDE4 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepLocateTokenIntegrity(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v1 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 152) + 16 * v1;
}
