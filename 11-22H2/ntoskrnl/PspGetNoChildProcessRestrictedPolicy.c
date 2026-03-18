/*
 * XREFs of PspGetNoChildProcessRestrictedPolicy @ 0x1407EA400
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     SeTokenGetNoChildProcessRestricted @ 0x1402265FC (SeTokenGetNoChildProcessRestricted.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 */

__int64 __fastcall PspGetNoChildProcessRestrictedPolicy(__int64 a1)
{
  ULONG_PTR v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenGetNoChildProcessRestricted(v2, &v4, &v5, &v6);
  ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v2, 0x79517350u);
  if ( v4 )
    return (unsigned int)v5 + 1;
  else
    return v6 ? 3 : 0;
}
