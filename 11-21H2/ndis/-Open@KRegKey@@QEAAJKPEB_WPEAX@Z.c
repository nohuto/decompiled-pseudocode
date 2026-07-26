/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010E7A4 (ndisBindReadFilterDriverFromV3Registry.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C010F89C (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010FC08 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0110310 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0110388 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011103C (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011177C (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0112258 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C01124EC (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C011FC18 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0120188 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C01209F0 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C012E7DC (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C012EA74 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C012F2E0 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C012F428 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C012F574 (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C012F6BC (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisIsBindPathEnabled @ 0x1C0130C30 (ndisIsBindPathEnabled.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C0130F48 (ndisLoadNamedFilterAltitudes.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01310A0 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C0131264 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01313BC (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0134730 (-Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01531F8 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ??$invoke@P6AJPEAX@ZAEAPEAX@wistd@@YAJ$$QEAP6AJPEAX@ZAEAPEAX@Z @ 0x1C00346C4 (--$invoke@P6AJPEAX@ZAEAPEAX@wistd@@YAJ$$QEAP6AJPEAX@ZAEAPEAX@Z.c)
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, const wchar_t *a3, void *a4)
{
  __int64 v5; // r10
  const wchar_t *v6; // rax
  unsigned int v7; // ebx
  HANDLE v8; // rdi
  void *m_ptr; // [rsp+20h] [rbp-50h] BYREF
  NTSTATUS (__stdcall *v11)(HANDLE); // [rsp+28h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v12 = 0LL;
  if ( a3 )
  {
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
    if ( !v5 )
      return 3221225485LL;
    *((_QWORD *)&v12 + 1) = a3;
    LOWORD(v12) = -2 - 2 * v5;
    WORD1(v12) = -2 * v5;
  }
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = a4;
  v7 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
  v8 = KeyHandle;
  if ( this->m_ptr )
  {
    m_ptr = this->m_ptr;
    v11 = ZwClose;
    wistd::invoke<long (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v11, &m_ptr);
  }
  this->m_ptr = v8;
  return v7;
}
