/*
 * XREFs of sub_1409B9218 @ 0x1409B9218
 * Callers:
 *     sub_14066A17C @ 0x14066A17C (sub_14066A17C.c)
 *     sub_1406E6DFC @ 0x1406E6DFC (sub_1406E6DFC.c)
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 *     sub_1409CEF44 @ 0x1409CEF44 (sub_1409CEF44.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 */

char __fastcall sub_1409B9218(PSID Sid, PSID a2)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  if ( RtlGetAppContainerSidType(Sid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(a2, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(Sid, v4);
      if ( *v5 != *RtlSubAuthoritySid(a2, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
