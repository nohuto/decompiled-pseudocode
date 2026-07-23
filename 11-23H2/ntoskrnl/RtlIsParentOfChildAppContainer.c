/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1409BC498
 * Callers:
 *     SepSetTokenCapabilities @ 0x1406BD648 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140714F70 (SepSetTokenPackage.c)
 *     SeTokenCanImpersonate @ 0x140735190 (SeTokenCanImpersonate.c)
 *     SepCheckCreateLowBox @ 0x1407F46E4 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1409D1BE4 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140297D60 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1407F4670 (RtlGetAppContainerSidType.c)
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
