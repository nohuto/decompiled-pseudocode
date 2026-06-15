/*
 * XREFs of ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x14006E590
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U_tlgWrapperPtrSize@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU_tlgWrapperPtrSize@@3@Z @ 0x140001AF4 (--$Write@U_tlgWrapperPtrSize@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2.c)
 *     _tlgKeywordOn @ 0x140008E90 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1400519F0 (-Provider@AudioDgTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140055F14 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x14006E574 (--1-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x14006EE50 (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetControllableSystemEffectsListRemote(
        CAPOWrapperSrv *this,
        struct AudioEffectInternal **a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v6; // r14
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(__int64, _QWORD *, unsigned int *, void *); // rbx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  struct AudioEffectInternal *v16; // r8
  __int64 i; // r9
  __int64 v18; // rdx
  BOOL v19; // ecx
  const struct _tlgProvider_t *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  _QWORD v25[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+48h] [rbp-18h]
  unsigned int *v28; // [rsp+50h] [rbp-10h] BYREF
  int v29; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v31; // [rsp+80h] [rbp+20h] BYREF

  *a2 = 0LL;
  *a3 = 0;
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
    v25[0] = 0LL;
    v25[1] = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD *, unsigned int *, void *))(*(_QWORD *)v6 + 32LL);
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(v25);
    v10 = v9(v6, v25, a3, a4);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 353LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)v11);
LABEL_18:
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>();
      return v8;
    }
    if ( *a3 )
    {
      v16 = (struct AudioEffectInternal *)CoTaskMemAlloc(24LL * *a3);
      if ( !v16 )
      {
        v8 = -2147024882;
        v12 = 367LL;
        v11 = 2147942414LL;
        goto LABEL_11;
      }
      for ( i = 0LL; (unsigned int)i < *a3; *((_DWORD *)v16 + 2 * v18 + 5) = v19 )
      {
        v18 = 3 * i;
        *(_OWORD *)((char *)v16 + 8 * v18) = *(_OWORD *)(v25[0] + 24 * i);
        *((_DWORD *)v16 + 2 * v18 + 4) = *(_DWORD *)(v25[0] + 24 * i + 16);
        v19 = *(_DWORD *)(v25[0] + 24 * i + 20) == 1;
        i = (unsigned int)(i + 1);
      }
      *a2 = v16;
      v20 = AudioDgTelemetryProvider::Provider();
      if ( *(_DWORD *)v20 > 4u && tlgKeywordOn((__int64)v20, 0LL) )
      {
        v23 = *a3;
        v26 = (__int64)*a2;
        v28 = a3;
        v29 = 4;
        v27 = 24 * v23;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
          v22,
          (int)&unk_1400B3977,
          v21,
          v22,
          (__int64)&v28,
          &v26);
      }
    }
    else
    {
      v13 = AudioDgTelemetryProvider::Provider();
      if ( *(_DWORD *)v13 > 4u && tlgKeywordOn((__int64)v13, 0LL) )
      {
        v31 = *a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v15,
          byte_1400B39D7,
          v14,
          v15,
          (__int64)&v31);
      }
    }
    v8 = 0;
    goto LABEL_18;
  }
  v8 = -2147467263;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15E,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)0x80004001LL);
  return v8;
}
