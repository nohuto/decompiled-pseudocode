/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01128CC
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119850 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C011B8C4 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C011BA84 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BCC4 (ndisIfOpenInterfaceRegistryKey.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011C558 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C011C7B8 (ndisBindReadFilterDriverFromV3Registry.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C011CEE4 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C011D264 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB2C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C011DC14 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B910 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C012BE98 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C012C76C (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C013A4F8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C013A7A0 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C013AFD8 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C013B168 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C013B2FC (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C013B48C (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisIsBindPathEnabled @ 0x1C013CA98 (ndisIsBindPathEnabled.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C013CDC8 (ndisLoadNamedFilterAltitudes.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF44 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C013D130 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2C0 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0140480 (-Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1C0160358 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, const wchar_t *a3, void *a4)
{
  __int64 v5; // r10
  const wchar_t *v6; // rax
  __int64 result; // rax
  unsigned int v8; // edi
  HANDLE v9; // rsi
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v10 = 0LL;
  if ( !a3 )
  {
LABEL_7:
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = a4;
    v8 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    v9 = KeyHandle;
    if ( this->m_ptr )
      ZwClose(this->m_ptr);
    this->m_ptr = v9;
    return v8;
  }
  v5 = 0x7FFFLL;
  v6 = a3;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    *((_QWORD *)&v10 + 1) = a3;
    LOWORD(v10) = 2 * (0x7FFF - v5);
    WORD1(v10) = v10 + 2;
    goto LABEL_7;
  }
  return result;
}
