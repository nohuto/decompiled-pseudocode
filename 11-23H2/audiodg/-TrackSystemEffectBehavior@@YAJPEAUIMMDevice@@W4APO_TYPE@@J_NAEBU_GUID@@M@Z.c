/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000D0E0
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000CFD8 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     IsSkipAPOFailureCheck @ 0x14000D26C (IsSkipAPOFailureCheck.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _Init_thread_footer @ 0x140028758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400287C0 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14007651C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, int a3, unsigned __int8 a4, __int64 a5, float a6)
{
  int v6; // esi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 *ThreadLocalStoragePointer; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  int v16; // eax
  int v17; // ecx
  void (__fastcall *v18)(__int64, LPVOID *); // rbx
  BOOL inited; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  __int64 *v23; // [rsp+50h] [rbp-59h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v25; // [rsp+68h] [rbp-41h]
  LPVOID pv; // [rsp+70h] [rbp-39h] BYREF
  int v27; // [rsp+78h] [rbp-31h] BYREF
  int v28; // [rsp+7Ch] [rbp-2Dh] BYREF
  int v29; // [rsp+80h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-21h] BYREF
  PROPVARIANT v31[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-9h]
  LPVOID v33; // [rsp+A8h] [rbp-1h] BYREF
  _QWORD v34[8]; // [rsp+B0h] [rbp+7h] BYREF
  WINBOOL fPending; // [rsp+108h] [rbp+5Fh] BYREF

  v6 = a4;
  v8 = a2;
  v9 = a1;
  v23 = 0LL;
  ThreadLocalStoragePointer = (__int64 *)NtCurrentTeb()->ThreadLocalStoragePointer;
  v11 = *ThreadLocalStoragePointer;
  if ( dword_1400CF9B8 > *(_DWORD *)(*ThreadLocalStoragePointer + 4) )
  {
    Init_thread_header(&dword_1400CF9B8);
    if ( dword_1400CF9B8 == -1 )
    {
      xmmword_1400CF754 = PKEY_Endpoint_LFX_FailCount;
      dword_1400CF764 = 9;
      xmmword_1400CF768 = PKEY_Endpoint_GFX_FailCount;
      dword_1400CF778 = 8;
      xmmword_1400CF77C = PKEY_Endpoint_EFX_FailCount;
      dword_1400CF78C = 31;
      Init_thread_footer(&dword_1400CF9B8);
    }
  }
  if ( dword_1400CF9B4 > *(_DWORD *)(v11 + 4) )
  {
    Init_thread_header(&dword_1400CF9B4);
    if ( dword_1400CF9B4 == -1 )
    {
      xmmword_1400CF704 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_1400CF714 = 33;
      xmmword_1400CF718 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_1400CF728 = 34;
      xmmword_1400CF72C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_1400CF73C = 35;
      Init_thread_footer(&dword_1400CF9B4);
    }
  }
  if ( !(_DWORD)v8 || (unsigned __int8)IsSkipAPOFailureCheck() )
  {
    v12 = 0;
    goto LABEL_12;
  }
  *(_OWORD *)pvar = 0LL;
  v25 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v9 + 32LL))(v9, 2LL, &v23);
  if ( v12 < 0 )
    goto LABEL_14;
  v13 = *v23;
  if ( (_BYTE)v6 )
    v14 = (*(__int64 (__fastcall **)(__int64 *, char *, PROPVARIANT *))(v13 + 40))(v23, &byte_1400CF6F0[20 * v8], pvar);
  else
    v14 = (*(__int64 (__fastcall **)(__int64 *, char *, PROPVARIANT *))(v13 + 40))(v23, &byte_1400CF740[20 * v8], pvar);
  v12 = v14;
  if ( a3 < 0 )
  {
    if ( LOWORD(pvar[0]) == 19 )
    {
      v17 = (int)pvar[1];
    }
    else
    {
      LOWORD(pvar[0]) = 19;
      v17 = 0;
    }
    LODWORD(pvar[1]) = (int)(float)(10.0 / a6) + v17;
    if ( (_BYTE)v6 )
    {
LABEL_36:
      v16 = (*(__int64 (__fastcall **)(__int64 *, struct HINSTANCE__ *, PROPVARIANT *))(*v23 + 48))(
              v23,
              &_ImageBase + 5 * v8 + 212412,
              pvar);
      goto LABEL_31;
    }
LABEL_30:
    v16 = (*(__int64 (__fastcall **)(__int64 *, struct HINSTANCE__ *, PROPVARIANT *))(*v23 + 48))(
            v23,
            &_ImageBase + 5 * v8 + 212432,
            pvar);
LABEL_31:
    v9 = a1;
    v12 = v16;
LABEL_14:
    if ( a3 < 0 )
    {
      pv = 0LL;
      v18 = *(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 40LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      v18(v9, &pv);
      Context = 0LL;
      inited = __std_init_once_begin_initialize(
                 &`AudioDgTelemetryProvider::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context);
      if ( inited && fPending )
      {
        v31[0] = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1400CF680;
        qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        LODWORD(v31[1]) = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(v31);
      }
      v22 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v22 > 2u
        && (*(_QWORD *)(v22 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v22 + 24) & 0x400000000000LL) == *(_QWORD *)(v22 + 24) )
      {
        v33 = pv;
        v34[0] = a5;
        v27 = v8;
        v28 = a3;
        v29 = v6;
        v31[0] = (PROPVARIANT)0x1000000;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          v22,
          (unsigned int)&unk_1400B3CC7,
          v20,
          v21,
          (__int64)v31,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)v34,
          (__int64)&v33);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    goto LABEL_11;
  }
  if ( (LOWORD(pvar[0]) != 19 || LODWORD(pvar[1])) && LOWORD(pvar[0]) )
  {
    LOWORD(pvar[0]) = 19;
    if ( (_BYTE)v6 )
    {
      *(_OWORD *)v31 = 0LL;
      v32 = 0LL;
      (*(void (__fastcall **)(__int64 *, void *, PROPVARIANT *))(*v23 + 40))(
        v23,
        &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
        v31);
      if ( LOWORD(v31[0]) != 19 || LODWORD(v31[1]) != 1 || LODWORD(pvar[1]) > 1 )
        --LODWORD(pvar[1]);
      PropVariantClear(v31);
      goto LABEL_36;
    }
    LODWORD(pvar[1]) = 0;
    goto LABEL_30;
  }
LABEL_11:
  PropVariantClear(pvar);
LABEL_12:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
  return (unsigned int)v12;
}
