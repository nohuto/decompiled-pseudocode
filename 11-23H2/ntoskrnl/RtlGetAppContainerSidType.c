/*
 * XREFs of RtlGetAppContainerSidType @ 0x1407F43A0
 * Callers:
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x1407F4B60 (SepValidateReferencedCachedHandles.c)
 *     RtlGetAppContainerParent @ 0x1409BC070 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC298 (RtlIsParentOfChildAppContainer.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCBCC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140297AC0 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140429820 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
