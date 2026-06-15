/*
 * XREFs of ?SpatialAudioSettingsChanged@CSpatialProperties@@QEAAXXZ @ 0x1800478F0
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801525C8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 */

void __fastcall CSpatialProperties::SpatialAudioSettingsChanged(LPCRITICAL_SECTION lpCriticalSection)
{
  _DWORD *v2; // rcx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int16 v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  HANDLE LockSemaphore; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( lpCriticalSection[1].DebugInfo )
  {
    EnterCriticalSection(lpCriticalSection);
    v2 = *(_DWORD **)&lpCriticalSection[1].LockCount;
    if ( *v2 > 4u && tlgKeywordOn((__int64)v2, 16LL) )
    {
      v7 = BYTE2(lpCriticalSection[192].LockSemaphore);
      LockSemaphore = lpCriticalSection[1].LockSemaphore;
      v6 = WORD2(lpCriticalSection[193].DebugInfo);
      v9 = *(_QWORD *)&lpCriticalSection[1].DebugInfo[1].Type;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_1801983F8,
        v4,
        v5,
        (__int64)&v9,
        (__int64)&v6,
        (__int64)&LockSemaphore,
        (__int64)&v7);
    }
    if ( HIDWORD(lpCriticalSection[193].DebugInfo) == 1 )
      HIDWORD(lpCriticalSection[193].DebugInfo) = 3;
    LeaveCriticalSection(lpCriticalSection);
  }
}
