/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1409BC348
 * Callers:
 *     SepSetTokenCapabilities @ 0x1406BD618 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140714E10 (SepSetTokenPackage.c)
 *     SeTokenCanImpersonate @ 0x1407354A0 (SeTokenCanImpersonate.c)
 *     SepCheckCreateLowBox @ 0x1407F4A84 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1409D1A94 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402979B0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1407F4A10 (RtlGetAppContainerSidType.c)
 */

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(ParentAppContainerSid, v4);
      if ( *v5 != *RtlSubAuthoritySid(ChildAppContainerSid, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
