/*
 * XREFs of ??$QueryFullProcessImageNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJPEAXKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1801076DC
 * Callers:
 *     ?GetWindowImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801071A4 (-GetWindowImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x18056A5D8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180107FC0 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 */

__int64 __fastcall wil::QueryFullProcessImageNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v5; // [rsp+30h] [rbp-98h]
  _BYTE v6[8]; // [rsp+40h] [rbp-88h] BYREF
  void **v7; // [rsp+48h] [rbp-80h] BYREF
  __int128 v8; // [rsp+50h] [rbp-78h]
  void ***v9; // [rsp+B0h] [rbp-18h]
  __int64 v10; // [rsp+D0h] [rbp+8h] BYREF

  v10 = a1;
  v4 = 0;
  *(_QWORD *)&v5 = &v10;
  *((_QWORD *)&v5 + 1) = &v4;
  v7 = &wistd::__function::__func<_lambda_e1bdf235c2021226f8c53f8fb7bf9230_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v8 = v5;
  v9 = &v7;
  return wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
           a3,
           v6);
}
