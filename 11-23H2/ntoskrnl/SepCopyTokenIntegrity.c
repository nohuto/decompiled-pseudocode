/*
 * XREFs of SepCopyTokenIntegrity @ 0x140226B40
 * Callers:
 *     SeQueryTokenIntegrity @ 0x1402F6584 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x14066ED28 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     SepAdjustPrivileges @ 0x1406BAA20 (SepAdjustPrivileges.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     RtlpSetSecurityObject @ 0x14072BD70 (RtlpSetSecurityObject.c)
 *     NtQueryInformationToken @ 0x140730AD0 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x140734FA0 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SepCopyTokenIntegrity(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *result; // rax

  v2 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v2 == -1 || (result = (_DWORD *)(*(_QWORD *)(a1 + 152) + 16 * v2)) == 0LL )
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)a2 = SeUntrustedMandatorySid;
    *(_DWORD *)(a2 + 8) = 96;
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)result;
    *(_DWORD *)(a2 + 8) = result[2];
  }
  return result;
}
