/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140015388
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     IsSkipAPOFailureCheck @ 0x140015600 (IsSkipAPOFailureCheck.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     _Init_thread_footer @ 0x14002FED8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x14002FF40 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14006DBB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, unsigned __int8 a4, __int64 a5, float a6)
{
  int v6; // esi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 *ThreadLocalStoragePointer; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  int v16; // eax
  int v17; // ecx
  void (__fastcall *v18)(__int64, void **); // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  __int64 *v23; // [rsp+50h] [rbp-49h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v25; // [rsp+68h] [rbp-31h]
  void *v26; // [rsp+70h] [rbp-29h] BYREF
  int v27; // [rsp+78h] [rbp-21h] BYREF
  void *v28; // [rsp+80h] [rbp-19h] BYREF
  __int64 v29; // [rsp+88h] [rbp-11h] BYREF
  __int64 v30; // [rsp+90h] [rbp-9h] BYREF
  PROPVARIANT v31[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+Fh]
  int v34; // [rsp+F8h] [rbp+5Fh] BYREF

  v6 = a4;
  v8 = a2;
  v9 = a1;
  v23 = 0LL;
  ThreadLocalStoragePointer = (__int64 *)NtCurrentTeb()->ThreadLocalStoragePointer;
  v11 = *ThreadLocalStoragePointer;
  if ( dword_1400C17F0 > *(_DWORD *)(*ThreadLocalStoragePointer + 4) )
  {
    Init_thread_header(&dword_1400C17F0);
    if ( dword_1400C17F0 == -1 )
    {
      xmmword_1400C1204 = PKEY_Endpoint_LFX_FailCount;
      dword_1400C1214 = 9;
      xmmword_1400C1218 = PKEY_Endpoint_GFX_FailCount;
      dword_1400C1228 = 8;
      xmmword_1400C122C = PKEY_Endpoint_EFX_FailCount;
      dword_1400C123C = 31;
      Init_thread_footer(&dword_1400C17F0);
    }
  }
  if ( dword_1400C17EC > *(_DWORD *)(v11 + 4) )
  {
    Init_thread_header(&dword_1400C17EC);
    if ( dword_1400C17EC == -1 )
    {
      xmmword_1400C11B4 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_1400C11C4 = 33;
      xmmword_1400C11C8 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_1400C11D8 = 34;
      xmmword_1400C11DC = PKEY_Endpoint_EFX_ExceptionCount;
      dword_1400C11EC = 35;
      Init_thread_footer(&dword_1400C17EC);
    }
  }
  if ( !(_DWORD)v8 || (unsigned __int8)IsSkipAPOFailureCheck() )
  {
    v12 = 0;
    goto LABEL_14;
  }
  *(_OWORD *)pvar = 0LL;
  v25 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v9 + 32LL))(v9, 2LL, &v23);
  if ( v12 < 0 )
    goto LABEL_12;
  v13 = *v23;
  if ( (_BYTE)v6 )
    v14 = (*(__int64 (__fastcall **)(__int64 *, char *, PROPVARIANT *))(v13 + 40))(v23, &byte_1400C11A0[20 * v8], pvar);
  else
    v14 = (*(__int64 (__fastcall **)(__int64 *, char *, PROPVARIANT *))(v13 + 40))(v23, &byte_1400C11F0[20 * v8], pvar);
  v12 = v14;
  if ( !a3 )
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
    goto LABEL_36;
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
      goto LABEL_29;
    }
    LODWORD(pvar[1]) = 0;
LABEL_36:
    if ( !(_BYTE)v6 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64 *, struct HINSTANCE__ *, PROPVARIANT *))(*v23 + 48))(
              v23,
              &_ImageBase + 5 * v8 + 197756,
              pvar);
      goto LABEL_30;
    }
LABEL_29:
    v16 = (*(__int64 (__fastcall **)(__int64 *, struct HINSTANCE__ *, PROPVARIANT *))(*v23 + 48))(
            v23,
            &_ImageBase + 5 * v8 + 197736,
            pvar);
LABEL_30:
    v9 = a1;
    v12 = v16;
LABEL_12:
    if ( !a3 )
    {
      v26 = 0LL;
      v18 = *(void (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 40LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &v26,
        0LL);
      v18(v9, &v26);
      v20 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                          v19,
                          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v20 > 2u
        && (*(_QWORD *)(v20 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v20 + 24) & 0x400000000000LL) == *(_QWORD *)(v20 + 24) )
      {
        v28 = v26;
        v29 = a5;
        v34 = v8;
        v27 = v6;
        v30 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          v20,
          (unsigned int)&unk_1400A6FEA,
          v21,
          v22,
          (__int64)&v30,
          (__int64)&v27,
          (__int64)&v34,
          (__int64)&v29,
          (__int64)&v28);
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v26);
    }
  }
  PropVariantClear(pvar);
LABEL_14:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v23);
  return (unsigned int)v12;
}
