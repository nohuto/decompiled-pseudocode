/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180759380
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180045334 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x18017CE00 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18038C718 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_18038C718.c)
 */

char __fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r8
  _DWORD *v13; // rcx
  int v14; // eax
  int v16; // [rsp+B0h] [rbp-80h] BYREF
  int v17; // [rsp+B4h] [rbp-7Ch] BYREF
  int v18; // [rsp+B8h] [rbp-78h] BYREF
  int v19; // [rsp+BCh] [rbp-74h] BYREF
  int v20; // [rsp+C0h] [rbp-70h] BYREF
  int v21; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v22; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+100h] [rbp-30h] BYREF
  __int64 v30; // [rsp+108h] [rbp-28h] BYREF
  __int64 v31; // [rsp+110h] [rbp-20h] BYREF
  __int64 v32; // [rsp+118h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp-10h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v9 = (_DWORD *)wil::details::static_lazy<TaskbarLogging>::get(
                       v4,
                       (void (__cdecl *)())_lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_)[1];
      if ( *v9 > 2u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
      {
        v29 = *((_QWORD *)a2 + 6);
        v21 = a2[17];
        v20 = a2[4];
        v28 = *((_QWORD *)a2 + 15);
        v12 = a1[6];
        v27 = *((_QWORD *)a2 + 14);
        v19 = a2[26];
        v26 = *((_QWORD *)a2 + 12);
        v25 = *((_QWORD *)a2 + 11);
        v18 = a2[20];
        v24 = *((_QWORD *)a2 + 9);
        v17 = a2[8];
        v23 = *((_QWORD *)a2 + 3);
        v16 = *a2;
        v30 = *((_QWORD *)a2 + 16);
        LODWORD(v22) = a2[16];
        v31 = *((_QWORD *)a2 + 7);
        LODWORD(SRWLock) = a2[2];
        v32 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v10,
          (int)&dword_1808427AF,
          v12 + 8,
          v11,
          (__int64)&v32,
          (__int64)&SRWLock,
          (const wchar_t **)&v31,
          (__int64)&v22,
          (const wchar_t **)&v30,
          (__int64)&v16,
          (const WCHAR **)&v23,
          (__int64)&v17,
          (const wchar_t **)&v24,
          (__int64)&v18,
          (const wchar_t **)&v25,
          (const WCHAR **)&v26,
          (__int64)&v19,
          (const wchar_t **)&v27,
          (const WCHAR **)&v28,
          (__int64)&v20,
          (__int64)&v21,
          (const wchar_t **)&v29);
      }
    }
    else
    {
      v5 = (_DWORD *)wil::details::static_lazy<TaskbarLogging>::get(
                       v4,
                       (void (__cdecl *)())_lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_)[1];
      if ( *v5 > 2u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
      {
        v8 = a1[6];
        SRWLock = (PSRWLOCK)*((_QWORD *)a2 + 15);
        v22 = *((_QWORD *)a2 + 14);
        v16 = a2[26];
        v23 = *((_QWORD *)a2 + 12);
        v24 = *((_QWORD *)a2 + 11);
        v17 = a2[20];
        v25 = *((_QWORD *)a2 + 9);
        v18 = a2[8];
        v26 = *((_QWORD *)a2 + 3);
        v19 = *a2;
        v27 = *((_QWORD *)a2 + 16);
        v20 = a2[16];
        v28 = *((_QWORD *)a2 + 7);
        v21 = a2[2];
        v29 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v6,
          (unsigned __int8 *)dword_18084269A,
          (const GUID *)(v8 + 8),
          v7,
          (__int64)&v29,
          (__int64)&v21,
          (const wchar_t **)&v28,
          (__int64)&v20,
          (const wchar_t **)&v27,
          (__int64)&v19,
          (const WCHAR **)&v26,
          (__int64)&v18,
          (const wchar_t **)&v25,
          (__int64)&v17,
          (const wchar_t **)&v24,
          (const WCHAR **)&v23,
          (__int64)&v16,
          (const wchar_t **)&v22,
          (const WCHAR **)&SRWLock);
      }
    }
  }
  SRWLock = 0LL;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v13 = (_DWORD *)a1[6];
  v14 = a2[2];
  if ( v14 != v13[22] && (v14 != v13[19] || (int)v13[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v13 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
