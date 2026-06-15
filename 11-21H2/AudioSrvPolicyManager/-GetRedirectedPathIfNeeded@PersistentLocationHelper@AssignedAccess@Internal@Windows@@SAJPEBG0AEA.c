/*
 * XREFs of ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180042AB0
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180042D30 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180044060 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z @ 0x1800144E4 (--$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002AD28 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002B774 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800412C4 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
        char *a1,
        __int64 a2,
        void **a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-39h] BYREF
  void **v10; // [rsp+38h] [rbp-31h] BYREF
  __int128 v11; // [rsp+40h] [rbp-29h]
  void ***v12; // [rsp+A0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  char *v14; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+6Fh] BYREF
  void *v16; // [rsp+E8h] [rbp+7Fh] BYREF

  v15 = a2;
  v14 = a1;
  if ( !a2 )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v16,
      a1,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      a3,
      &v16);
LABEL_8:
    if ( v16 )
    {
      *(_QWORD *)&v8 = CoTaskMemFree;
      wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v8, &v16);
    }
    return 0LL;
  }
  v16 = 0LL;
  *(_QWORD *)&v8 = &v14;
  *((_QWORD *)&v8 + 1) = &v15;
  v10 = &wistd::__function::__func<_lambda_6166c63e326ec22a386edc375e0b06c9_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v11 = v8;
  v12 = &v10;
  v5 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &v16,
         (__int64)v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      a3,
      &v16);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
    (const char *)(unsigned int)v5);
  if ( v16 )
  {
    *(_QWORD *)&v8 = CoTaskMemFree;
    wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v8, &v16);
  }
  return v6;
}
