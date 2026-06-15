/*
 * XREFs of ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800223A8
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CD30 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BC10 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamInfo@@PEAPEAUIDuckingController@@@Z @ 0x180015C94 (--$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamI.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@@@Z @ 0x180020150 (--0-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@.c)
 *     ??0?$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingController@@@Z @ 0x18002018C (--0-$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingControlle.c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_ @ 0x18002028C (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--__lambda_aa732a8a991b7eb0f1632fe44cffa677_.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAAAEAUCRenderEndpointDuckingManagerContext@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002059C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndpoin.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800228D0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CDuckingManager::OnRenderCommunicationsStreamStateChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct CDuckingManager *v6; // rdi
  _WORD *v8; // r14
  __int64 v9; // r8
  _DWORD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _WORD *v15; // r14
  __int64 v16; // r8
  _DWORD *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h]
  struct CDuckingManager *v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v28)(); // [rsp+68h] [rbp-40h]
  __int64 v29; // [rsp+70h] [rbp-38h] BYREF
  struct CDuckingManager *v30; // [rsp+78h] [rbp-30h]
  _QWORD v31[2]; // [rsp+80h] [rbp-28h] BYREF

  v23 = a5;
  v6 = g_DuckingManager;
  if ( *((_BYTE *)g_DuckingManager + 456) )
    return 0LL;
  if ( a4 != 1 )
  {
    if ( a4 )
      return 0LL;
    v15 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
    v22 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 136);
    std::wstring::wstring(&v29, v15, v16);
    v17 = (_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                      (float *)v6 + 44,
                      (__int64)&v29);
    --*v17;
    std::wstring::~wstring(&v29);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
    if ( *((_DWORD *)v6 + 104) == 3 )
      return 0LL;
    v22 = 0LL;
    wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(&v23, (__int64)&v22);
    v18 = wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
            &v23,
            a2);
    v19 = *v18;
    *v18 = 0LL;
    v29 = v19;
    v30 = v6;
    wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
      v31,
      (__int64)v22);
    v24 = off_18004F448;
    v20 = v29;
    v29 = 0LL;
    v25 = v20;
    v26 = v30;
    v21 = v31[0];
    v31[0] = 0LL;
    v27 = v21;
    v28 = &v24;
    lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_(&v29);
    CSerialWorkQueue::QueueWorkItem((char *)v6 + 240, &v24);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v23);
    goto LABEL_9;
  }
  v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
  v22 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 136);
  std::wstring::wstring(&v29, v8, v9);
  v10 = (_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                    (float *)v6 + 44,
                    (__int64)&v29);
  ++*v10;
  std::wstring::~wstring(&v29);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
  if ( *((_DWORD *)v6 + 104) != 3 )
  {
    v22 = 0LL;
    wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(&v23, (__int64)&v22);
    v11 = wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
            &v23,
            a2);
    v12 = *v11;
    *v11 = 0LL;
    v29 = v12;
    v30 = v6;
    wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
      v31,
      (__int64)v22);
    v24 = off_18004F478;
    v13 = v29;
    v29 = 0LL;
    v25 = v13;
    v26 = v30;
    v14 = v31[0];
    v31[0] = 0LL;
    v27 = v14;
    v28 = &v24;
    lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_(&v29);
    CSerialWorkQueue::QueueWorkItem((char *)v6 + 240, &v24);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v23);
LABEL_9:
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v22);
  }
  return 0LL;
}
