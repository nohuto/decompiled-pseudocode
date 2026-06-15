/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXXZ @ 0x18013D594
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18004EF4C (-Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18006A144 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     BlockSpatialAudioRegistryGates @ 0x180055048 (BlockSpatialAudioRegistryGates.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18013CDC0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::ClearSpatialAudioSettings(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // r9
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  __int64 LockSemaphore; // r8
  __int64 v5; // rcx
  int v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+78h] [rbp+38h]

  EnterCriticalSection(this);
  v9 = this;
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    LockSemaphore = (__int64)this[1].LockSemaphore;
    if ( LockSemaphore )
    {
      v5 = *(_QWORD *)&this[1].LockCount;
      if ( *(_DWORD *)v5 > 4u
        && (*(_BYTE *)(v5 + 16) & 0x10) != 0
        && (*(_QWORD *)(v5 + 24) & 0x10LL) == *(_QWORD *)(v5 + 24) )
      {
        v6 = BYTE2(this[192].LockSemaphore);
        v7 = LockSemaphore;
        Blink = DebugInfo->ProcessLocksList.Blink;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v5,
          byte_18018E1E4,
          LockSemaphore,
          v2,
          (void **)&Blink,
          (__int64)&v7,
          (__int64)&v6);
      }
      if ( !BYTE2(this[192].LockSemaphore)
        || (*(int (__fastcall **)(ULONG_PTR))(*(_QWORD *)this[1].SpinCount + 24LL))(this[1].SpinCount) < 0
        || (LODWORD(Blink) = 0,
            LODWORD(v7) = 0,
            v6 = 0,
            (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)this[1].SpinCount + 112LL))(this[1].SpinCount, &v6) < 0)
        || v6
        || (*(int (__fastcall **)(ULONG_PTR, __int64 *))(*(_QWORD *)this[1].SpinCount + 128LL))(this[1].SpinCount, &v7) < 0
        || (_DWORD)v7
        || (*(int (__fastcall **)(ULONG_PTR, struct _LIST_ENTRY **))(*(_QWORD *)this[1].SpinCount + 184LL))(
             this[1].SpinCount,
             &Blink) < 0
        || (_DWORD)Blink )
      {
        HIDWORD(this[2].OwningThread) = 0;
        memset_0((char *)&this[3].DebugInfo + 4, 0, 0x48uLL);
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
  }
  LeaveCriticalSection(this);
}
