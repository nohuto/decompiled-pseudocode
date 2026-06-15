/*
 * XREFs of ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800ED8FC
 * Callers:
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x18011FBB0 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z @ 0x1800DB46C (-GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ?UpdatePMPAecReferenceEndpointId@CAudioStream@@AEAAJPEBG@Z @ 0x1800EE2D4 (-UpdatePMPAecReferenceEndpointId@CAudioStream@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioStream::SetEchoCancellationRenderEndpoint(
        CAudioStream *this,
        char *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 result; // rax
  const char *v9; // r9
  void *v10; // rbx
  int DefaultAecReferenceEndpointId; // eax
  unsigned int v12; // ebx
  int updated; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // esi
  __int64 (__fastcall *v18)(struct IAudioResourceManager *, int *, __int64, unsigned __int64); // rsi
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // edi
  struct _GUID v22; // [rsp+30h] [rbp-48h] BYREF
  int v23[4]; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v24; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+18h] BYREF
  void *v28; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    if ( !*((_QWORD *)this + 72) )
      return 0LL;
    pv = 0LL;
    if ( a2 )
    {
      v26 = 0LL;
      v6 = (*(__int64 (__fastcall **)(PVOID, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                               + 24LL))(
             g_pEndpointCharacteristicsCache,
             a2,
             0LL,
             0LL,
             &v26);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x873,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v6);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
        return v7;
      }
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x874,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)0x80070057LL);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
        return 2147942487LL;
      }
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v28,
        a2,
        0xFFFFFFFFFFFFFFFFuLL,
        v9);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        v28);
      v10 = pv;
      if ( !pv )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x876,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
        return 2147942414LL;
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
      goto LABEL_16;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v22 = *(struct _GUID *)(*((_QWORD *)this + 78) + 32LL);
    DefaultAecReferenceEndpointId = GetDefaultAecReferenceEndpointId(&v22, (unsigned __int16 **)&pv);
    v12 = DefaultAecReferenceEndpointId;
    if ( DefaultAecReferenceEndpointId >= 0 )
    {
      v10 = pv;
LABEL_16:
      if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)this + 77), v10) )
      {
        if ( v10 )
          CoTaskMemFree(v10);
        return 0LL;
      }
      updated = CAudioStream::UpdatePMPAecReferenceEndpointId(this, (const unsigned __int16 *)v10);
      v14 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x882,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)updated);
        if ( v10 )
          CoTaskMemFree(v10);
        return v14;
      }
      *(_OWORD *)v23 = 0LL;
      v24 = 0LL;
      v15 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
      v16 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                             + 40LL))(
              g_pEndpointCharacteristicsCache,
              v15,
              0LL,
              0LL,
              v23);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x885,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v16);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v23);
        if ( v10 )
          CoTaskMemFree(v10);
        return v17;
      }
      v18 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, int *, __int64, unsigned __int64))(*(_QWORD *)g_AudioResourceManager + 88LL);
      v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
      v20 = v18(g_AudioResourceManager, v23, v19, ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x888,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v20);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v23);
        if ( v10 )
          CoTaskMemFree(v10);
        return v21;
      }
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v23);
      if ( v10 )
        CoTaskMemFree(v10);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)DefaultAecReferenceEndpointId);
    if ( pv )
      CoTaskMemFree(pv);
    result = v12;
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x88C,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                     a4);
    return (unsigned int)v26;
  }
  return result;
}
