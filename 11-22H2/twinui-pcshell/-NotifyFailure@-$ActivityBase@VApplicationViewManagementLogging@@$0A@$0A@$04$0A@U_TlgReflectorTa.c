/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800450A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800452AC (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180045334 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // rcx
  int v7; // eax
  int v9; // [rsp+B0h] [rbp-80h] BYREF
  int v10; // [rsp+B4h] [rbp-7Ch] BYREF
  int v11; // [rsp+B8h] [rbp-78h] BYREF
  int v12; // [rsp+BCh] [rbp-74h] BYREF
  int v13; // [rsp+C0h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v15; // [rsp+D0h] [rbp-60h] BYREF
  int v16; // [rsp+D8h] [rbp-58h]
  __int64 v17; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v21; // [rsp+100h] [rbp-30h] BYREF
  __int64 v22; // [rsp+108h] [rbp-28h] BYREF
  __int64 v23; // [rsp+110h] [rbp-20h] BYREF
  __int64 v24; // [rsp+118h] [rbp-18h] BYREF
  __int64 v25[6]; // [rsp+120h] [rbp-10h] BYREF
  PSRWLOCK fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v27; // [rsp+168h] [rbp+38h] BYREF
  __int64 v28; // [rsp+170h] [rbp+40h] BYREF
  __int64 v29; // [rsp+178h] [rbp+48h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           (PBOOL)&fPending,
           &Context)
      && (_DWORD)fPending )
    {
      v15 = (__int64)&`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DDC8;
      qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v16 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v15);
    }
    v4 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v4 > 2u )
    {
      v17 = *((_QWORD *)a2 + 6);
      LODWORD(v27) = a2[17];
      LODWORD(v28) = a2[4];
      v18 = *((_QWORD *)a2 + 15);
      v5 = *(_QWORD *)(a1 + 48);
      v19 = *((_QWORD *)a2 + 14);
      LODWORD(v29) = a2[26];
      v20 = *((_QWORD *)a2 + 12);
      v21 = *((_QWORD *)a2 + 11);
      v9 = a2[20];
      v22 = *((_QWORD *)a2 + 9);
      v10 = a2[8];
      v23 = *((_QWORD *)a2 + 3);
      v11 = *a2;
      v24 = *((_QWORD *)a2 + 16);
      v12 = a2[16];
      v25[0] = *((_QWORD *)a2 + 7);
      v13 = a2[2];
      v15 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v4,
        (int)&dword_180842E3F,
        v5 + 8,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)v25,
        (__int64)&v12,
        (__int64)&v24,
        (__int64)&v11,
        (__int64)&v23,
        (__int64)&v10,
        (__int64)&v22,
        (__int64)&v9,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v29,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v17);
    }
  }
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &fPending);
  v6 = *(_DWORD **)(a1 + 48);
  v7 = a2[2];
  if ( v7 != v6[22] && (v7 != v6[19] || (int)v6[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v6 + 20), (const struct wil::FailureInfo *)a2);
  if ( fPending )
    ReleaseSRWLockExclusive(fPending);
  return 1;
}
