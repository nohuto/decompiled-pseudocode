/*
 * XREFs of ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A6758
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A61C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AB6C4 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v6; // rax
  char *v7; // rdx
  char *v8; // rcx
  __int64 (__fastcall *v9)(char *, _QWORD *); // rax
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 (__fastcall *v14)(_QWORD *, _QWORD *); // rax
  __int64 v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  int v20; // [rsp+24h] [rbp-3Ch] BYREF
  int v21; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-30h]
  _QWORD v23[3]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v22 = a1;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v20);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      374LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4,
      0);
  v5 = &unk_1801AD600;
  while ( *(_DWORD *)v5 != v20 )
  {
    v5 += 5;
    if ( v5 == (_QWORD *)&unk_1801AD6A0 )
    {
      a1[3] = 0LL;
      v6 = 0LL;
      goto LABEL_12;
    }
  }
  v7 = (char *)(v5 + 1);
  a1[3] = 0LL;
  v8 = (char *)v5[4];
  if ( v8 )
  {
    v9 = **(__int64 (__fastcall ***)(char *, _QWORD *))v8;
    if ( v8 == v7 )
      v6 = v9(v8, a1);
    else
      v6 = v9(v8, 0LL);
  }
  else
  {
    v6 = 0LL;
  }
  a1[3] = v6;
LABEL_12:
  if ( !v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v21);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        393LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v10,
        3);
    v11 = &unk_1801AD6A0;
    while ( *(_DWORD *)v11 != v21 )
    {
      v11 += 5;
      v12 = &unk_1801AD740;
      if ( v11 == (_QWORD *)&unk_1801AD740 )
      {
        v23[0] = &std::_Func_impl<std::_Callable_fun<void (*const)(HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *),0>,std::allocator<std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
        v23[1] = Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator;
        v13 = v23;
        v24 = v23;
        goto LABEL_24;
      }
    }
    v12 = v11 + 1;
    v24 = 0LL;
    v13 = (_QWORD *)v11[4];
    if ( v13 )
    {
      v14 = *(__int64 (__fastcall **)(_QWORD *, _QWORD *))*v13;
      if ( v13 == v12 )
        v15 = v14(v13, v23);
      else
        v15 = v14(v13, 0LL);
      v24 = (_QWORD *)v15;
      v13 = (_QWORD *)v15;
    }
    else
    {
      v24 = 0LL;
    }
LABEL_24:
    if ( a1 == v23 )
      goto LABEL_34;
    v16 = (_QWORD *)a1[3];
    if ( v16 )
    {
      LOBYTE(v12) = v16 != a1;
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*v16 + 32LL))(a1[3], v12);
      a1[3] = 0LL;
      v13 = v24;
    }
    if ( !v13 )
    {
      a1[3] = 0LL;
      goto LABEL_34;
    }
    if ( v13 == v23 )
    {
      a1[3] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 8LL))(v13, a1);
      v13 = v24;
      if ( !v24 )
        goto LABEL_34;
      v17 = v23;
      LOBYTE(v17) = v24 != v23;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v24 + 32LL))(v24, v17);
    }
    else
    {
      a1[3] = v13;
    }
    v13 = 0LL;
    v24 = 0LL;
LABEL_34:
    if ( v13 )
    {
      v18 = v23;
      LOBYTE(v18) = v13 != v23;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 32LL))(v13, v18);
      v24 = 0LL;
    }
  }
  return a1;
}
