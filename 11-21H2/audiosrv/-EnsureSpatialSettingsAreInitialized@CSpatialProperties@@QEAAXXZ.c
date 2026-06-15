/*
 * XREFs of ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ @ 0x18005CFD4
 * Callers:
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180022E60 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___ @ 0x18004B3DC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CEndpoint.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x18013C29C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWrite.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::EnsureSpatialSettingsAreInitialized(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION *Blink; // r14
  char v8; // bl
  int v9; // eax
  LONG v10; // eax
  int v11; // eax
  int v12; // r9d
  __int64 v13; // r8
  int v14; // [rsp+50h] [rbp+7h] BYREF
  LONG v15; // [rsp+54h] [rbp+Bh] BYREF
  int v16; // [rsp+58h] [rbp+Fh] BYREF
  LONG v17; // [rsp+5Ch] [rbp+13h] BYREF
  int v18; // [rsp+60h] [rbp+17h] BYREF
  LPCRITICAL_SECTION v19; // [rsp+68h] [rbp+1Fh] BYREF
  GUID *v20; // [rsp+70h] [rbp+27h] BYREF
  GUID v21; // [rsp+78h] [rbp+2Fh] BYREF

  v5 = 0;
  v14 = 0;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  v15 = 0;
  if ( !LOBYTE(lpCriticalSection[2].OwningThread) )
  {
    DebugInfo = lpCriticalSection[1].DebugInfo;
    if ( DebugInfo )
    {
      Blink = (struct _RTL_CRITICAL_SECTION *)DebugInfo->ProcessLocksList.Blink;
      if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(lpCriticalSection, a2, a3, a4)
        || (v8 = 1, (int)GetDefaultSpatialSettingsForEndpoint(Blink, &v14, &v21, &v15) < 0) )
      {
        v8 = 0;
      }
      EnterCriticalSection(lpCriticalSection);
      v19 = lpCriticalSection;
      if ( v8 )
      {
        if ( !LOBYTE(lpCriticalSection[2].OwningThread)
          && (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)lpCriticalSection[1].SpinCount + 112LL))(
               lpCriticalSection[1].SpinCount,
               &v14) < 0 )
        {
          BYTE2(lpCriticalSection[192].LockSemaphore) = 1;
          memset_0((char *)&lpCriticalSection[3].DebugInfo + 4, 0, 0x48uLL);
          memset_0(&lpCriticalSection[5], 0, 0x1D52uLL);
          HIDWORD(lpCriticalSection[4].SpinCount) = 0;
          v9 = v14;
          HIDWORD(lpCriticalSection[3].DebugInfo) = v14;
          LODWORD(lpCriticalSection[4].LockSemaphore) = v9;
          *(GUID *)&lpCriticalSection[3].OwningThread = v21;
          v10 = v15;
          LOBYTE(v5) = v15 != 0;
          LODWORD(lpCriticalSection[4].SpinCount) = v5;
          lpCriticalSection[3].RecursionCount = v10;
          v11 = (*(__int64 (__fastcall **)(HANDLE, char *, _QWORD, _QWORD))(*(_QWORD *)lpCriticalSection[1].LockSemaphore
                                                                          + 48LL))(
                  lpCriticalSection[1].LockSemaphore,
                  (char *)&lpCriticalSection[3].DebugInfo + 4,
                  0LL,
                  0LL);
          v13 = *(_QWORD *)&lpCriticalSection[1].LockCount;
          if ( *(_DWORD *)v13 > 4u
            && (*(_BYTE *)(v13 + 16) & 0x10) != 0
            && (*(_QWORD *)(v13 + 24) & 0x10LL) == *(_QWORD *)(v13 + 24) )
          {
            v16 = v11;
            v17 = v15;
            v18 = v14;
            v20 = &v21;
            v19 = Blink;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v13,
              (unsigned int)&unk_18018E240,
              v13,
              v12,
              (__int64)&v19,
              (__int64)&v20,
              (__int64)&v18,
              (__int64)&v17,
              (__int64)&v16);
          }
        }
      }
      LOBYTE(lpCriticalSection[2].OwningThread) = 1;
      LeaveCriticalSection(lpCriticalSection);
    }
  }
}
