/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800604F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18000164C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x180001904 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001904.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045260 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800603B8 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x1800627C8 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // r9
  const struct _tlgProvider_t *v5; // r9
  _DWORD *v6; // rcx
  int v7; // eax
  int v9; // [rsp+B0h] [rbp-80h] BYREF
  int v10; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v11; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v12; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v13; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v14; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v16; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v18; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v19; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v20; // [rsp+100h] [rbp-30h] BYREF
  __int64 v21; // [rsp+108h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  __int64 v24; // [rsp+148h] [rbp+18h] BYREF
  __int64 v25; // [rsp+150h] [rbp+20h] BYREF
  __int64 v26; // [rsp+158h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
  {
    v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    if ( *(_DWORD *)v5 > 2u )
    {
      v19 = *((_QWORD *)a2 + 6);
      LODWORD(SRWLock) = a2[17];
      LODWORD(v24) = a2[4];
      v18 = *((_QWORD *)a2 + 15);
      v17 = *((_QWORD *)a2 + 14);
      LODWORD(v25) = a2[26];
      v16 = *((_QWORD *)a2 + 12);
      v15 = *((_QWORD *)a2 + 11);
      LODWORD(v26) = a2[20];
      v14 = *((_QWORD *)a2 + 9);
      v10 = a2[8];
      v13 = *((_QWORD *)a2 + 3);
      v9 = *a2;
      v20 = *((_QWORD *)a2 + 16);
      LODWORD(v11) = a2[16];
      v21 = *((_QWORD *)a2 + 7);
      LODWORD(v12) = a2[2];
      v22[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v5,
        (int)&dword_180190DB8,
        a1[6] + 8,
        (__int64)v5,
        (__int64)v22,
        (__int64)&v12,
        (const unsigned __int16 **)&v21,
        (__int64)&v11,
        (const unsigned __int16 **)&v20,
        (__int64)&v9,
        (const WCHAR **)&v13,
        (__int64)&v10,
        (const unsigned __int16 **)&v14,
        (__int64)&v26,
        (const unsigned __int16 **)&v15,
        (const WCHAR **)&v16,
        (__int64)&v25,
        (const unsigned __int16 **)&v17,
        (const WCHAR **)&v18,
        (__int64)&v24,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v19);
    }
  }
  else
  {
    v4 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    if ( *(_DWORD *)v4 > 2u
      && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
    {
      v12 = *((_QWORD *)a2 + 15);
      v11 = *((_QWORD *)a2 + 14);
      LODWORD(SRWLock) = a2[26];
      v13 = *((_QWORD *)a2 + 12);
      v14 = *((_QWORD *)a2 + 11);
      LODWORD(v24) = a2[20];
      v15 = *((_QWORD *)a2 + 9);
      LODWORD(v25) = a2[8];
      v16 = *((_QWORD *)a2 + 3);
      LODWORD(v26) = *a2;
      v17 = *((_QWORD *)a2 + 16);
      v9 = a2[16];
      v18 = *((_QWORD *)a2 + 7);
      v10 = a2[2];
      v19 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        (int)v4,
        (int)&dword_18019111D,
        a1[6] + 8,
        (__int64)v4,
        (__int64)&v19,
        (__int64)&v10,
        (const unsigned __int16 **)&v18,
        (__int64)&v9,
        (const unsigned __int16 **)&v17,
        (__int64)&v26,
        (const WCHAR **)&v16,
        (__int64)&v25,
        (const unsigned __int16 **)&v15,
        (__int64)&v24,
        (const unsigned __int16 **)&v14,
        (const WCHAR **)&v13,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v11,
        (const WCHAR **)&v12);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v6 = (_DWORD *)a1[6];
  v7 = a2[2];
  if ( v7 != v6[22] && (v7 != v6[19] || (int)v6[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v6 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
