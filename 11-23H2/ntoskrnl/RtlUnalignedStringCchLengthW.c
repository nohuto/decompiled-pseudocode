/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x14022B66C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpGetGenericStoreProperty @ 0x1406CDA00 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC40 (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x1406CE7C0 (_CmValidateDeviceName.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797A30 (_RegRtlCreateTreeTransacted.c)
 *     _PnpSetPropertyWorker @ 0x140797C44 (_PnpSetPropertyWorker.c)
 *     _PnpParseIndirectResourceString @ 0x14079E424 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1407CB264 (_PnpParseIndirectInfString.c)
 *     _PnpDeletePropertyWorker @ 0x14086F63C (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140875BC4 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BC00 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AB9C (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140A6D7BC (DrvDbValidateDeviceIdName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( !psz )
  {
    result = -1073741811;
LABEL_12:
    if ( pcchLength )
      *pcchLength = 0LL;
    return result;
  }
  v3 = cchMax;
  do
  {
    if ( !*psz )
      break;
    ++psz;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( v3 )
      *pcchLength = cchMax - v3;
    else
      *pcchLength = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
