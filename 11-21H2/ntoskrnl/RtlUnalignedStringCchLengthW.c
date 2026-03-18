/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x1402DF9D0
 * Callers:
 *     _PnpParseIndirectResourceString @ 0x1406974B8 (_PnpParseIndirectResourceString.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpParseIndirectInfString @ 0x1406C47D8 (_PnpParseIndirectInfString.c)
 *     _PnpDeletePropertyWorker @ 0x1406DB1B4 (_PnpDeletePropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407446E0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpSetPropertyWorker @ 0x140772790 (_PnpSetPropertyWorker.c)
 *     _RegRtlCreateTreeTransacted @ 0x140772B6C (_RegRtlCreateTreeTransacted.c)
 *     _PnpGetGenericStoreProperty @ 0x14077DF24 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x14077FAC0 (_CmValidateDeviceName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D760 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140A3037C (DrvDbValidateDeviceIdName.c)
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
