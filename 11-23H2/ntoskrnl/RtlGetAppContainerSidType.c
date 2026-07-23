/*
 * XREFs of RtlGetAppContainerSidType @ 0x1407F4670
 * Callers:
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4E30 (SepValidateReferencedCachedHandles.c)
 *     RtlGetAppContainerParent @ 0x1409BC270 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC498 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140297D50 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerSidType(PSID AppContainerSid, PAPPCONTAINER_SID_TYPE AppContainerSidType)
{
  UCHAR v4; // cl

  if ( *((_BYTE *)AppContainerSid + 1) >= 2u
    && *(_BYTE *)AppContainerSid == 1
    && RtlCompareMemory((char *)AppContainerSid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)AppContainerSid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(AppContainerSid);
    if ( v4 == 8 )
    {
      *AppContainerSidType = ParentAppContainerSidType;
      return 0;
    }
    if ( v4 == 12 )
    {
      *AppContainerSidType = ChildAppContainerSidType;
      return 0;
    }
    *AppContainerSidType = InvalidAppContainerSidType;
  }
  else
  {
    *AppContainerSidType = NotAppContainerSidType;
  }
  return -1073700352;
}
