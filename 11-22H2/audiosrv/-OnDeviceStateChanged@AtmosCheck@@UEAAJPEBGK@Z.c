/*
 * XREFs of ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18015C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z @ 0x18005D990 (--0-$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z.c)
 *     ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V12@@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180113F28 (--$make_shared@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_573cde38f26cc631e17f9a09e8537aa1___ @ 0x18015964C (Windows--Internal--ComTaskPool--QueueTask__lambda_573cde38f26cc631e17f9a09e8537aa1___.c)
 *     ?IsRenderDevice@AtmosCheck@@AEBA_NPEBG@Z @ 0x18015C23C (-IsRenderDevice@AtmosCheck@@AEBA_NPEBG@Z.c)
 */

__int64 __fastcall AtmosCheck::OnDeviceStateChanged(AtmosCheck *this, char *a2, int a3)
{
  const char *v5; // r9
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rbx
  unsigned int v10; // r8d
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v13[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-20h]
  __int64 v16[2]; // [rsp+48h] [rbp-18h] BYREF
  std::_Ref_count_base *v17; // [rsp+58h] [rbp-8h]
  LPVOID pv; // [rsp+88h] [rbp+28h] BYREF

  if ( a3 == 1
    && *((_BYTE *)this + 209)
    && AtmosCheck::IsRenderDevice((AtmosCheck *)((char *)this - 8), (const unsigned __int16 *)a2) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      a2,
      0xFFFFFFFFFFFFFFFFuLL,
      v5);
    *(_OWORD *)v13 = 0LL;
    if ( pv )
    {
      v6 = std::make_shared<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
             &v14,
             &pv);
      std::shared_ptr<std::function<void (void)>>::operator=(v13, v6);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      if ( pv )
        CoTaskMemFree(pv);
    }
    wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(
      &v12,
      (__int64)this - 8);
    wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(v16, v12);
    v9 = v13[1];
    if ( v13[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v13[1] + 2);
      v9 = v13[1];
    }
    v10 = *((_DWORD *)this + 53);
    v16[1] = (__int64)v13[0];
    v17 = v9;
    Windows::Internal::ComTaskPool::QueueTask__lambda_573cde38f26cc631e17f9a09e8537aa1___(v8, v7, v10, v16);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v16);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  return 0LL;
}
