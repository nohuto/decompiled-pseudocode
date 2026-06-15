/*
 * XREFs of GetSpatialSettingsMonitoringPKey @ 0x180040B6C
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18003685C (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x180040AB8 (--0CSpatialProperties@@QEAA@XZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180062178 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall GetSpatialSettingsMonitoringPKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  const CHAR *v7; // [rsp+60h] [rbp+18h] BYREF

  result = 0LL;
  if ( a1 )
  {
    *(_OWORD *)a1 = PKEY_SpatialAudio_Signaling_Key;
    *(_DWORD *)(a1 + 16) = 2;
  }
  else
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v5 = -2147467261;
      v7 = "GetSpatialSettingsMonitoringPKey";
      v6 = 407;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        0LL,
        (int)&unk_1801953CC,
        a3,
        a4,
        &v7,
        (__int64)&v6,
        (__int64)&v5);
    }
    return 2147500035LL;
  }
  return result;
}
