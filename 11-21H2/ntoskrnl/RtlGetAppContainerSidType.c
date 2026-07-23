/*
 * XREFs of RtlGetAppContainerSidType @ 0x140696D90
 * Callers:
 *     sub_140696944 @ 0x140696944 (sub_140696944.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     sub_1409B9218 @ 0x1409B9218 (sub_1409B9218.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerSidType(PSID AppContainerSid, PAPPCONTAINER_SID_TYPE AppContainerSidType)
{
  UCHAR v4; // cl

  if ( *((_BYTE *)AppContainerSid + 1) >= 2u
    && *(_BYTE *)AppContainerSid == 1
    && RtlCompareMemory((char *)AppContainerSid + 2, &Source2, 6uLL) == 6
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
