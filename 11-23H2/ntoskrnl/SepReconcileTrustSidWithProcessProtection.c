/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x1402B35A4
 * Callers:
 *     SeCreateClientSecurityEx @ 0x14071D3B0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14071D550 (SeCreateClientSecurity.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x1402B3600 (SepSidFromProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x1402B3680 (RtlSidDominatesForTrust.c)
 */

NTSTATUS __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  void *v5; // rdi
  PSID v6; // r10
  NTSTATUS result; // eax
  _QWORD *v8; // r11
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  DominatesTrust = 0;
  v5 = (void *)SepSidFromProcessProtection(a2);
  result = RtlSidDominatesForTrust(v5, v6, &DominatesTrust);
  if ( !DominatesTrust )
  {
    *a3 = 1;
    *v8 = v5;
  }
  return result;
}
