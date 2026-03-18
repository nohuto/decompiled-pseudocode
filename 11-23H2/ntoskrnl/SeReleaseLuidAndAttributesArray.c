/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1406BB138
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1406BA640 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x1406BAE70 (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x1406BB530 (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x1407CA950 (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     NtFilterToken @ 0x1407F1850 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
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
