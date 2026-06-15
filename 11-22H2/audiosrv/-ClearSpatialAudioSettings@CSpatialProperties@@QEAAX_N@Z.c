/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z @ 0x180044C90
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18002EE90 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x1800605B8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 * Callees:
 *     BlockSpatialAudioRegistryGates @ 0x18001E4B4 (BlockSpatialAudioRegistryGates.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180152B84 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::ClearSpatialAudioSettings(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  _DWORD *v4; // rcx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // r9
  _QWORD v8[2]; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  HANDLE LockSemaphore; // [rsp+88h] [rbp+38h] BYREF

  EnterCriticalSection(this);
  v8[1] = this;
  if ( this[1].DebugInfo && this[1].LockSemaphore )
  {
    v4 = *(_DWORD **)&this[1].LockCount;
    if ( *v4 > 4u && tlgKeywordOn((__int64)v4, 16LL) )
    {
      LOBYTE(v9) = BYTE2(this[192].LockSemaphore);
      LOBYTE(v10) = a2;
      LockSemaphore = this[1].LockSemaphore;
      v8[0] = *(_QWORD *)(v7 + 48);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v5,
        (unsigned int)&unk_18019846F,
        v6,
        v7,
        (__int64)v8,
        (__int64)&LockSemaphore,
        (__int64)&v10,
        (__int64)&v9);
    }
    if ( a2
      || !BYTE2(this[192].LockSemaphore)
      || (*(int (__fastcall **)(ULONG_PTR))(*(_QWORD *)this[1].SpinCount + 24LL))(this[1].SpinCount) < 0
      || (LODWORD(LockSemaphore) = 0,
          v10 = 0,
          v9 = 0,
          (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)this[1].SpinCount + 112LL))(this[1].SpinCount, &v9) < 0)
      || v9
      || (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)this[1].SpinCount + 128LL))(this[1].SpinCount, &v10) < 0
      || v10
      || (*(int (__fastcall **)(ULONG_PTR, HANDLE *))(*(_QWORD *)this[1].SpinCount + 184LL))(
           this[1].SpinCount,
           &LockSemaphore) < 0
      || (_DWORD)LockSemaphore )
    {
      HIDWORD(this[2].OwningThread) = 0;
      if ( a2 )
        memset_0((char *)&this[3].DebugInfo + 4, 0, 0x48uLL);
      HIDWORD(this[3].DebugInfo) = 0;
      LODWORD(this[4].SpinCount) = 0;
      HIDWORD(this[4].LockSemaphore) = BlockSpatialAudioRegistryGates();
      HIDWORD(this[4].SpinCount) = 0;
      memset_0(&this[5], 0, 0x1D52uLL);
      (*(void (__fastcall **)(HANDLE, char *, _QWORD, _QWORD))(*(_QWORD *)this[1].LockSemaphore + 48LL))(
        this[1].LockSemaphore,
        (char *)&this[3].DebugInfo + 4,
        0LL,
        0LL);
      BYTE2(this[192].LockSemaphore) = 1;
    }
  }
  LeaveCriticalSection(this);
}
