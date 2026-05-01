/*
 * XREFs of ??$K32GetModuleFileNameExW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJPEAXPEAUHINSTANCE__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18063941C
 * Callers:
 *     ?IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z @ 0x180639690 (-IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180639284 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_po_ea_180639284.c)
 */

__int64 __fastcall wil::K32GetModuleFileNameExW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,128>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  __int64 v4; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v5; // [rsp+30h] [rbp-98h]
  _BYTE v6[8]; // [rsp+40h] [rbp-88h] BYREF
  void **v7; // [rsp+48h] [rbp-80h] BYREF
  __int128 v8; // [rsp+50h] [rbp-78h]
  void ***v9; // [rsp+B0h] [rbp-18h]
  __int64 v10; // [rsp+D0h] [rbp+8h] BYREF

  v10 = a1;
  v4 = 0LL;
  *(_QWORD *)&v5 = &v10;
  *((_QWORD *)&v5 + 1) = &v4;
  v7 = &wistd::__function::__func<_lambda_d36267010b9b489b905ef87fbee2112d_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v8 = v5;
  v9 = &v7;
  return wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,128>(
           a3,
           (__int64)v6);
}
