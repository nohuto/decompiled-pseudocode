/*
 * XREFs of memcmp @ 0x180093310
 * Callers:
 *     RtlpCompareActivationContextGuidSectionEntryByGuid @ 0x180002D90 (RtlpCompareActivationContextGuidSectionEntryByGuid.c)
 *     RtlEqualSid @ 0x180010830 (RtlEqualSid.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18002CB84 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     EtwpFindGuidEntry @ 0x18003234C (EtwpFindGuidEntry.c)
 *     EtwpValidateLoggerInfo @ 0x18005BB50 (EtwpValidateLoggerInfo.c)
 *     EtwpGenerateFileName @ 0x18005F488 (EtwpGenerateFileName.c)
 *     EtwpRegistrationCompare @ 0x18006DE80 (EtwpRegistrationCompare.c)
 *     RtlSidHashLookup @ 0x180075070 (RtlSidHashLookup.c)
 *     RtlpWnfNameSubscriptionCompareByStateName @ 0x18007C1DC (RtlpWnfNameSubscriptionCompareByStateName.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18007F100 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwpGuidEntryCompare @ 0x180084660 (EtwpGuidEntryCompare.c)
 *     RtlFindUnicodeSubstring @ 0x180086860 (RtlFindUnicodeSubstring.c)
 *     RtlReplaceSidInSd @ 0x1800F2AB0 (RtlReplaceSidInSd.c)
 *     RtlpNormalizeAcl @ 0x1800F45D0 (RtlpNormalizeAcl.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800F664C (RtlpIsAttributeAceInSacl.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x180102760 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180108F4C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpStackDbEntryIsEqual @ 0x18012E040 (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x18012E14C (RtlpStackDbSegmentComparitor.c)
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
