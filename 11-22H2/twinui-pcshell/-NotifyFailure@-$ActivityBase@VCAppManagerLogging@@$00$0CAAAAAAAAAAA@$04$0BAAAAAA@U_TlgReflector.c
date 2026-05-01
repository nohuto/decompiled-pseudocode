/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803BBCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180045334 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800BB1A0 (-LockExclusive@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18038C718 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_18038C718.c)
 */

char __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rdx
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r8
  _DWORD *v16; // rcx
  int v17; // eax
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  int v20; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v21; // [rsp+B8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32; // [rsp+110h] [rbp-20h] BYREF
  int v33; // [rsp+118h] [rbp-18h]
  __int64 v34; // [rsp+120h] [rbp-10h] BYREF
  __int64 v35; // [rsp+128h] [rbp-8h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v37; // [rsp+168h] [rbp+38h] BYREF
  __int64 v38; // [rsp+170h] [rbp+40h] BYREF
  __int64 v39; // [rsp+178h] [rbp+48h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v23 = 0LL;
      if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &v23)
        && (_DWORD)fPending )
      {
        v32 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
        v23 = &qword_18098DB60;
        qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        v33 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v32, v10, v11);
      }
      v12 = (_DWORD *)*((_QWORD *)v23 + 1);
      if ( *v12 > 2u && tlgKeywordOn((__int64)v12, 0x200000000000LL) )
      {
        v31 = *((_QWORD *)a2 + 6);
        LODWORD(v37) = a2[17];
        LODWORD(v38) = a2[4];
        v30 = *((_QWORD *)a2 + 15);
        v15 = a1[6];
        v29 = *((_QWORD *)a2 + 14);
        LODWORD(v39) = a2[26];
        v28 = *((_QWORD *)a2 + 12);
        v27 = *((_QWORD *)a2 + 11);
        LODWORD(v21) = a2[20];
        v26 = *((_QWORD *)a2 + 9);
        v20 = a2[8];
        v25 = *((_QWORD *)a2 + 3);
        v19 = *a2;
        v34 = *((_QWORD *)a2 + 16);
        LODWORD(v24) = a2[16];
        v35 = *((_QWORD *)a2 + 7);
        LODWORD(Context) = a2[2];
        v32 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v13,
          (int)&dword_1808427AF,
          v15 + 8,
          v14,
          (__int64)&v32,
          (__int64)&Context,
          (const wchar_t **)&v35,
          (__int64)&v24,
          (const wchar_t **)&v34,
          (__int64)&v19,
          (const WCHAR **)&v25,
          (__int64)&v20,
          (const wchar_t **)&v26,
          (__int64)&v21,
          (const wchar_t **)&v27,
          (const WCHAR **)&v28,
          (__int64)&v39,
          (const wchar_t **)&v29,
          (const WCHAR **)&v30,
          (__int64)&v38,
          (__int64)&v37,
          (const wchar_t **)&v31);
      }
    }
    else
    {
      Context = 0LL;
      if ( __std_init_once_begin_initialize(
             &`CAppManagerLogging::Instance'::`2'::wrapper,
             0,
             (PBOOL)&fPending,
             &Context)
        && (_DWORD)fPending )
      {
        v32 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
        Context = &qword_18098DB60;
        qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        v33 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v32, v4, v5);
      }
      v6 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v6 > 2u && tlgKeywordOn((__int64)v6, 0x200000000000LL) )
      {
        v9 = a1[6];
        v23 = (LPVOID)*((_QWORD *)a2 + 15);
        v24 = *((_QWORD *)a2 + 14);
        LODWORD(v37) = a2[26];
        v25 = *((_QWORD *)a2 + 12);
        v26 = *((_QWORD *)a2 + 11);
        LODWORD(v38) = a2[20];
        v27 = *((_QWORD *)a2 + 9);
        LODWORD(v39) = a2[8];
        v28 = *((_QWORD *)a2 + 3);
        v19 = *a2;
        v29 = *((_QWORD *)a2 + 16);
        v20 = a2[16];
        v30 = *((_QWORD *)a2 + 7);
        LODWORD(v21) = a2[2];
        v31 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v7,
          (unsigned __int8 *)dword_18084269A,
          (const GUID *)(v9 + 8),
          v8,
          (__int64)&v31,
          (__int64)&v21,
          (const wchar_t **)&v30,
          (__int64)&v20,
          (const wchar_t **)&v29,
          (__int64)&v19,
          (const WCHAR **)&v28,
          (__int64)&v39,
          (const wchar_t **)&v27,
          (__int64)&v38,
          (const wchar_t **)&v26,
          (const WCHAR **)&v25,
          (__int64)&v37,
          (const wchar_t **)&v24,
          (const WCHAR **)&v23);
      }
    }
  }
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &fPending);
  v16 = (_DWORD *)a1[6];
  v17 = a2[2];
  if ( v17 != v16[22] && (v17 != v16[19] || (int)v16[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v16 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
