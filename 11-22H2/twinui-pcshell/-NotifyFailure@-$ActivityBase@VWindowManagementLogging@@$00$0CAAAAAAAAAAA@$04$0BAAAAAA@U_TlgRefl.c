/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803EFD30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180045334 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18038C718 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_18038C718.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1803EFC80 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r9
  _DWORD *v11; // rcx
  int v12; // eax
  int v14; // [rsp+B0h] [rbp-80h] BYREF
  int v15; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v25; // [rsp+100h] [rbp-30h] BYREF
  __int64 v26; // [rsp+108h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  __int64 v29; // [rsp+148h] [rbp+18h] BYREF
  __int64 v30; // [rsp+150h] [rbp+20h] BYREF
  __int64 v31; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v8 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                       v4,
                       (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
      if ( *v8 > 2u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      {
        v24 = *((_QWORD *)a2 + 6);
        LODWORD(SRWLock) = a2[17];
        LODWORD(v29) = a2[4];
        v23 = *((_QWORD *)a2 + 15);
        v22 = *((_QWORD *)a2 + 14);
        LODWORD(v30) = a2[26];
        v21 = *((_QWORD *)a2 + 12);
        v20 = *((_QWORD *)a2 + 11);
        LODWORD(v31) = a2[20];
        v19 = *((_QWORD *)a2 + 9);
        v15 = a2[8];
        v18 = *((_QWORD *)a2 + 3);
        v14 = *a2;
        v25 = *((_QWORD *)a2 + 16);
        LODWORD(v16) = a2[16];
        v26 = *((_QWORD *)a2 + 7);
        LODWORD(v17) = a2[2];
        v27[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v9,
          (int)&dword_1808427AF,
          a1[6] + 8,
          v10,
          (__int64)v27,
          (__int64)&v17,
          (const wchar_t **)&v26,
          (__int64)&v16,
          (const wchar_t **)&v25,
          (__int64)&v14,
          (const WCHAR **)&v18,
          (__int64)&v15,
          (const wchar_t **)&v19,
          (__int64)&v31,
          (const wchar_t **)&v20,
          (const WCHAR **)&v21,
          (__int64)&v30,
          (const wchar_t **)&v22,
          (const WCHAR **)&v23,
          (__int64)&v29,
          (__int64)&SRWLock,
          (const wchar_t **)&v24);
      }
    }
    else
    {
      v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                       v4,
                       (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
      if ( *v5 > 2u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
      {
        v17 = *((_QWORD *)a2 + 15);
        v16 = *((_QWORD *)a2 + 14);
        LODWORD(SRWLock) = a2[26];
        v18 = *((_QWORD *)a2 + 12);
        v19 = *((_QWORD *)a2 + 11);
        LODWORD(v29) = a2[20];
        v20 = *((_QWORD *)a2 + 9);
        LODWORD(v30) = a2[8];
        v21 = *((_QWORD *)a2 + 3);
        LODWORD(v31) = *a2;
        v22 = *((_QWORD *)a2 + 16);
        v14 = a2[16];
        v23 = *((_QWORD *)a2 + 7);
        v15 = a2[2];
        v24 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v6,
          (unsigned __int8 *)dword_18084269A,
          (const GUID *)(a1[6] + 8LL),
          v7,
          (__int64)&v24,
          (__int64)&v15,
          (const wchar_t **)&v23,
          (__int64)&v14,
          (const wchar_t **)&v22,
          (__int64)&v31,
          (const WCHAR **)&v21,
          (__int64)&v30,
          (const wchar_t **)&v20,
          (__int64)&v29,
          (const wchar_t **)&v19,
          (const WCHAR **)&v18,
          (__int64)&SRWLock,
          (const wchar_t **)&v16,
          (const WCHAR **)&v17);
      }
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v11 = (_DWORD *)a1[6];
  v12 = a2[2];
  if ( v12 != v11[22] && (v12 != v11[19] || (int)v11[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v11 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
