/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1406BB168
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1406BA670 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x1406BAEA0 (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x1406BB560 (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x1407CAC20 (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     NtFilterToken @ 0x1407F1B20 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
