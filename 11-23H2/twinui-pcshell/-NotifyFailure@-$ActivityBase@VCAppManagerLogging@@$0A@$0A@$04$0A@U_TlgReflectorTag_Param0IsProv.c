/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18039DD80
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800232B4 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180045334 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rcx
  int v10; // eax
  int v12; // [rsp+B0h] [rbp-80h] BYREF
  int v13; // [rsp+B4h] [rbp-7Ch] BYREF
  int v14; // [rsp+B8h] [rbp-78h] BYREF
  int v15; // [rsp+BCh] [rbp-74h] BYREF
  int v16; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-60h] BYREF
  int v19; // [rsp+D8h] [rbp-58h]
  __int64 v20; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v24; // [rsp+100h] [rbp-30h] BYREF
  __int64 v25; // [rsp+108h] [rbp-28h] BYREF
  __int64 v26; // [rsp+110h] [rbp-20h] BYREF
  __int64 v27; // [rsp+118h] [rbp-18h] BYREF
  __int64 v28; // [rsp+120h] [rbp-10h] BYREF
  RTL_SRWLOCK *fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v30; // [rsp+168h] [rbp+38h] BYREF
  __int64 v31; // [rsp+170h] [rbp+40h] BYREF
  __int64 v32; // [rsp+178h] [rbp+48h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v18, v5, v6);
    }
    v7 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v7 > 2u )
    {
      v20 = *((_QWORD *)a2 + 6);
      LODWORD(v30) = a2[17];
      LODWORD(v31) = a2[4];
      v21 = *((_QWORD *)a2 + 15);
      v8 = *(_QWORD *)(a1 + 48);
      v22 = *((_QWORD *)a2 + 14);
      LODWORD(v32) = a2[26];
      v23 = *((_QWORD *)a2 + 12);
      v24 = *((_QWORD *)a2 + 11);
      v12 = a2[20];
      v25 = *((_QWORD *)a2 + 9);
      v13 = a2[8];
      v26 = *((_QWORD *)a2 + 3);
      v14 = *a2;
      v27 = *((_QWORD *)a2 + 16);
      v15 = a2[16];
      v28 = *((_QWORD *)a2 + 7);
      v16 = a2[2];
      v18 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v7,
        (int)&dword_180842E3F,
        v8 + 8,
        v4,
        (__int64)&v18,
        (__int64)&v16,
        (const wchar_t **)&v28,
        (__int64)&v15,
        (const wchar_t **)&v27,
        (__int64)&v14,
        (const WCHAR **)&v26,
        (__int64)&v13,
        (const wchar_t **)&v25,
        (__int64)&v12,
        (const wchar_t **)&v24,
        (const WCHAR **)&v23,
        (__int64)&v32,
        (const wchar_t **)&v22,
        (const WCHAR **)&v21,
        (__int64)&v31,
        (__int64)&v30,
        (const wchar_t **)&v20);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &fPending);
  v9 = *(_DWORD **)(a1 + 48);
  v10 = a2[2];
  if ( v10 != v9[22] && (v10 != v9[19] || (int)v9[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v9 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
