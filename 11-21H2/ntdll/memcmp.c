/*
 * XREFs of memcmp @ 0x180097B10
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180009710 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwpGenerateFileName @ 0x18000ACA8 (EtwpGenerateFileName.c)
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 *     EtwpFindGuidEntry @ 0x180016878 (EtwpFindGuidEntry.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18004D268 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     EtwpRegistrationCompare @ 0x1800750E8 (EtwpRegistrationCompare.c)
 *     RtlSidHashLookup @ 0x18007E670 (RtlSidHashLookup.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x18007EE10 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlpWnfNameSubscriptionCompareByStateName @ 0x180080B8C (RtlpWnfNameSubscriptionCompareByStateName.c)
 *     EtwpGuidEntryCompare @ 0x180088934 (EtwpGuidEntryCompare.c)
 *     RtlReplaceSidInSd @ 0x1800F1C40 (RtlReplaceSidInSd.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800F54D4 (RtlpIsAttributeAceInSacl.c)
 *     RtlFindUnicodeSubstring @ 0x1800F5EF0 (RtlFindUnicodeSubstring.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180107DCC (RtlpIsNameInExpressionPrivate.c)
 *     RtlpStackDbEntryIsEqual @ 0x180127ED8 (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x180127FE4 (RtlpStackDbSegmentComparitor.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
