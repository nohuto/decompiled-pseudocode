/*
 * XREFs of SepConvertTokenPrivileges @ 0x14022696C
 * Callers:
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730AD0 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140226990 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}
