/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180151040
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076664 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18008F060 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180090D90 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

char __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  __int64 v4; // r9
  _DWORD *v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rcx
  int v8; // eax
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v12; // [rsp+B0h] [rbp-80h] BYREF
  int v13; // [rsp+B4h] [rbp-7Ch] BYREF
  int v14; // [rsp+B8h] [rbp-78h] BYREF
  int v15; // [rsp+BCh] [rbp-74h] BYREF
  int v16; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-60h] BYREF
  int v19; // [rsp+D8h] [rbp-58h]
  const wchar_t *v20; // [rsp+E0h] [rbp-50h] BYREF
  const WCHAR *v21; // [rsp+E8h] [rbp-48h] BYREF
  const wchar_t *v22; // [rsp+F0h] [rbp-40h] BYREF
  const WCHAR *v23; // [rsp+F8h] [rbp-38h] BYREF
  const wchar_t *v24; // [rsp+100h] [rbp-30h] BYREF
  const wchar_t *v25; // [rsp+108h] [rbp-28h] BYREF
  const WCHAR *v26; // [rsp+110h] [rbp-20h] BYREF
  const wchar_t *v27; // [rsp+118h] [rbp-18h] BYREF
  const wchar_t *v28; // [rsp+120h] [rbp-10h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+160h] [rbp+30h] BYREF
  int v30; // [rsp+168h] [rbp+38h] BYREF
  int v31; // [rsp+170h] [rbp+40h] BYREF
  int v32; // [rsp+178h] [rbp+48h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v18, v10, v11);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 2u )
  {
    v20 = (const wchar_t *)*((_QWORD *)a2 + 6);
    v30 = a2[17];
    v31 = a2[4];
    v21 = (const WCHAR *)*((_QWORD *)a2 + 15);
    v6 = *(_QWORD *)(a1 + 48);
    v22 = (const wchar_t *)*((_QWORD *)a2 + 14);
    v32 = a2[26];
    v23 = (const WCHAR *)*((_QWORD *)a2 + 12);
    v24 = (const wchar_t *)*((_QWORD *)a2 + 11);
    v12 = a2[20];
    v25 = (const wchar_t *)*((_QWORD *)a2 + 9);
    v13 = a2[8];
    v26 = (const WCHAR *)*((_QWORD *)a2 + 3);
    v14 = *a2;
    v27 = (const wchar_t *)*((_QWORD *)a2 + 16);
    v15 = a2[16];
    v28 = (const wchar_t *)*((_QWORD *)a2 + 7);
    v16 = a2[2];
    v18 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)v5,
      (unsigned __int8 *)&unk_18069D587,
      (const GUID *)(v6 + 8),
      v4,
      (__int64)&v18,
      (__int64)&v16,
      &v28,
      (__int64)&v15,
      &v27,
      (__int64)&v14,
      &v26,
      (__int64)&v13,
      &v25,
      (__int64)&v12,
      &v24,
      &v23,
      (__int64)&v32,
      &v22,
      &v21,
      (__int64)&v31,
      (__int64)&v30,
      &v20);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &fPending);
  v7 = *(_DWORD **)(a1 + 48);
  v8 = a2[2];
  if ( v8 != v7[22] && (v8 != v7[19] || (int)v7[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v7 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&fPending);
  return 1;
}
