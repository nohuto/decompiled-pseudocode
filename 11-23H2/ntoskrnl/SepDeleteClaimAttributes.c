/*
 * XREFs of SepDeleteClaimAttributes @ 0x1409D15BC
 * Callers:
 *     SepTokenDeleteMethod @ 0x140729790 (SepTokenDeleteMethod.c)
 *     SepDeleteLogonSessionClaims @ 0x14076D6C0 (SepDeleteLogonSessionClaims.c)
 *     SepSetTokenClaims @ 0x1407CF688 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteClaimAttributes(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  void *v7; // rcx

  if ( P )
  {
    v5 = (_DWORD *)*((_QWORD *)P + 72);
    if ( v5 )
    {
      AuthzBasepFreeSecurityAttributesList(v5, a2, a3, a4);
      ExFreePoolWithTag(*((PVOID *)P + 72), 0);
      *((_QWORD *)P + 72) = 0LL;
    }
    v6 = (_DWORD *)*((_QWORD *)P + 73);
    if ( v6 )
    {
      AuthzBasepFreeSecurityAttributesList(v6, a2, a3, a4);
      ExFreePoolWithTag(*((PVOID *)P + 73), 0);
      *((_QWORD *)P + 73) = 0LL;
    }
    v7 = (void *)*((_QWORD *)P + 1);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *((_QWORD *)P + 1) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
