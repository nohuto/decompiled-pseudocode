/*
 * XREFs of ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x18001F34C
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E154 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18014FD10 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180067250 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800672B8 (_Init_thread_header.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall GetPacketSizeConstraints(
        struct IMMDeviceEnumerator *a1,
        struct IPropertyStore *a2,
        struct PacketSizeConstraints **a3)
{
  __int128 *v6; // rdi
  int v7; // eax
  void *v8; // rcx
  int v9; // ebx
  __int16 v10; // ax
  int v11; // eax
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  void *v17; // rcx
  void *v18; // rbx
  __int64 v19; // rax
  char v20; // si
  void *v21; // rcx
  int v22; // edi
  void *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rcx
  void *pv; // [rsp+20h] [rbp-69h] BYREF
  __int64 v28; // [rsp+28h] [rbp-61h] BYREF
  __int64 *v29; // [rsp+30h] [rbp-59h] BYREF
  __int64 v30; // [rsp+38h] [rbp-51h] BYREF
  PROPVARIANT v31[2]; // [rsp+40h] [rbp-49h] BYREF
  void *Src; // [rsp+50h] [rbp-39h]
  void **p_pv; // [rsp+58h] [rbp-31h]
  void *v34; // [rsp+60h] [rbp-29h] BYREF
  char v35; // [rsp+68h] [rbp-21h]
  void *v36; // [rsp+70h] [rbp-19h] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v38; // [rsp+88h] [rbp-1h]
  _DWORD v39[6]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *a3 = 0LL;
  if ( dword_1801CFF90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801CFF90);
    if ( dword_1801CFF90 == -1 )
    {
      xmmword_1801CF988 = DEVPKEY_KsAudio_PacketSize_Constraints2;
      dword_1801CF998 = 2;
      xmmword_1801CF99C = DEVPKEY_KsAudio_PacketSize_Constraints;
      dword_1801CF9AC = 2;
      Init_thread_footer(&dword_1801CFF90);
    }
  }
  v36 = 0LL;
  v6 = &xmmword_1801CF988;
  while ( 1 )
  {
    *(_OWORD *)v31 = 0LL;
    Src = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a2->lpVtbl->GetValue)(a2, v6, v31);
    v9 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x337,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v7,
        (int)pv);
      goto LABEL_19;
    }
    v10 = (__int16)v31[0];
    if ( !LOWORD(v31[0]) )
    {
      *(_OWORD *)pvar = 0LL;
      v38 = 0LL;
      v39[0] = 590439624;
      v39[1] = 1283267372;
      v39[2] = 1907779772;
      v39[3] = 1730509416;
      v39[4] = 1;
      v11 = ((__int64 (__fastcall *)(struct IPropertyStore *, _DWORD *, PROPVARIANT *))a2->lpVtbl->GetValue)(
              a2,
              v39,
              pvar);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33F,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v11,
          (int)pv);
      }
      else if ( LOWORD(pvar[0]) == 31 )
      {
        lpVtbl = a1->lpVtbl;
        v29 = 0LL;
        v13 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 **))lpVtbl->GetDevice)(
                a1,
                pvar[1],
                &v29);
        v9 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x345,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v13,
            (int)pv);
        }
        else
        {
          v28 = 0LL;
          v14 = *v29;
          v28 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v14 + 32))(v29, 0LL, &v28);
          v9 = v15;
          if ( v15 < 0 )
          {
            v25 = 840LL;
          }
          else
          {
            v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(v28, v6, v31);
            v9 = v15;
            if ( v15 >= 0 )
            {
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v29);
              PropVariantClear(pvar);
              v10 = (__int16)v31[0];
              goto LABEL_11;
            }
            v25 = 842LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v15,
            (int)pv);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v29);
      }
      else
      {
        v9 = -2147023728;
      }
      PropVariantClear(pvar);
      goto LABEL_19;
    }
LABEL_11:
    if ( v10 == 65 && LODWORD(v31[1]) >= 0x28 )
      break;
LABEL_12:
    PropVariantClear(v31);
    v6 = (__int128 *)((char *)v6 + 20);
    if ( v6 == (__int128 *)&Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::isInitialized )
      goto LABEL_13;
  }
  pv = 0LL;
  p_pv = &pv;
  v34 = 0LL;
  v35 = 1;
  v9 = CTCoAllocPolicy::Alloc(v8, 1u, LODWORD(v31[1]), &v34);
  if ( v35 )
  {
    v17 = *p_pv;
    *p_pv = v34;
    if ( v17 )
      CoTaskMemFree(v17);
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x355,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v9,
      (int)pv);
    v26 = pv;
    pv = 0LL;
    if ( v26 )
      CoTaskMemFree(v26);
LABEL_19:
    PropVariantClear(v31);
LABEL_14:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v36);
    return (unsigned int)v9;
  }
  memcpy_0(pv, Src, LODWORD(v31[1]));
  v18 = pv;
  if ( LODWORD(v31[1]) < 24 * *((_DWORD *)pv + 3) + 16 )
  {
    pv = 0LL;
    if ( v18 )
      CoTaskMemFree(v18);
    goto LABEL_12;
  }
  if ( *((_DWORD *)v6 + 4) != 2 )
    goto LABEL_30;
  v19 = *(_QWORD *)v6 - DEVPKEY_KsAudio_PacketSize_Constraints2;
  if ( *(_QWORD *)v6 == (_QWORD)DEVPKEY_KsAudio_PacketSize_Constraints2 )
    v19 = *((_QWORD *)v6 + 1) - *((_QWORD *)&DEVPKEY_KsAudio_PacketSize_Constraints2 + 1);
  v20 = 1;
  if ( v19 )
LABEL_30:
    v20 = 0;
  v36 = pv;
  pv = 0LL;
  PropVariantClear(v31);
  if ( !v18 )
  {
LABEL_13:
    v9 = -2147023728;
    goto LABEL_14;
  }
  v30 = 0LL;
  p_pv = (void **)&v30;
  v34 = 0LL;
  v35 = 1;
  v22 = CTCoAllocPolicy::Alloc(v21, 1u, 0x10uLL, &v34);
  if ( v35 )
  {
    v23 = *p_pv;
    *p_pv = v34;
    if ( v23 )
      CoTaskMemFree(v23);
  }
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x369,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v22,
      (int)pv);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v30);
    v9 = v22;
    goto LABEL_14;
  }
  *(_BYTE *)v30 = v20;
  v24 = *(void **)(v30 + 8);
  *(_QWORD *)(v30 + 8) = v18;
  if ( v24 )
    CoTaskMemFree(v24);
  *a3 = (struct PacketSizeConstraints *)v30;
  return 0LL;
}
