/*
 * XREFs of SepLocateTokenIntegrity @ 0x140370C78
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140225BB0 (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CDBE4 (SepGetDefaultsSubjectContext.c)
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
