/*
 * XREFs of RtlFindAceByType @ 0x140349610
 * Callers:
 *     sub_140205B1C @ 0x140205B1C (sub_140205B1C.c)
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     sub_1402A4A60 @ 0x1402A4A60 (sub_1402A4A60.c)
 *     sub_1403763A8 @ 0x1403763A8 (sub_1403763A8.c)
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     sub_1405F4288 @ 0x1405F4288 (sub_1405F4288.c)
 *     sub_14064C418 @ 0x14064C418 (sub_14064C418.c)
 *     sub_1406C9990 @ 0x1406C9990 (sub_1406C9990.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_140728450 @ 0x140728450 (sub_140728450.c)
 *     sub_140728DA0 @ 0x140728DA0 (sub_140728DA0.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1409BA380 @ 0x1409BA380 (sub_1409BA380.c)
 *     sub_1409CE660 @ 0x1409CE660 (sub_1409CE660.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r10
  unsigned int v5; // r11d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
