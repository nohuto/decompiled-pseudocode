/*
 * XREFs of ?SpatialAudioSettingsChanged@CSpatialProperties@@QEAAXXZ @ 0x18013F510
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18013CA20 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 */

void __fastcall CSpatialProperties::SpatialAudioSettingsChanged(LPCRITICAL_SECTION lpCriticalSection)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int16 v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  HANDLE LockSemaphore; // [rsp+60h] [rbp+18h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+68h] [rbp+20h] BYREF

  if ( lpCriticalSection[1].DebugInfo )
  {
    EnterCriticalSection(lpCriticalSection);
    v4 = *(_QWORD *)&lpCriticalSection[1].LockCount;
    if ( *(_DWORD *)v4 > 4u
      && (*(_BYTE *)(v4 + 16) & 0x10) != 0
      && (*(_QWORD *)(v4 + 24) & 0x10LL) == *(_QWORD *)(v4 + 24) )
    {
      v6 = BYTE2(lpCriticalSection[192].LockSemaphore);
      LockSemaphore = lpCriticalSection[1].LockSemaphore;
      v5 = WORD2(lpCriticalSection[193].DebugInfo);
      Blink = lpCriticalSection[1].DebugInfo->ProcessLocksList.Blink;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v4,
        byte_18018E16D,
        v2,
        v3,
        (void **)&Blink,
        (__int64)&v5,
        (__int64)&LockSemaphore,
        (__int64)&v6);
    }
    if ( HIDWORD(lpCriticalSection[193].DebugInfo) == 1 )
      HIDWORD(lpCriticalSection[193].DebugInfo) = 3;
    LeaveCriticalSection(lpCriticalSection);
  }
}
