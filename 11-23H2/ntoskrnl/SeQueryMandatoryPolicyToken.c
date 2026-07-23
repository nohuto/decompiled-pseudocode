/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x140370E94
 * Callers:
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x1407F3D84 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
