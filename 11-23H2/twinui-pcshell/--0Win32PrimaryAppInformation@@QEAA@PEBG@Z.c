/*
 * XREFs of ??0Win32PrimaryAppInformation@@QEAA@PEBG@Z @ 0x1805A7220
 * Callers:
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1805A72E0 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 * Callees:
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x180086E1C (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$GetFullPathNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBGPEAPEBG@Z @ 0x1805A6984 (--$GetFullPathNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTask.c)
 */

// Hidden C++ exception states: #wind=3
Win32PrimaryAppInformation *__fastcall Win32PrimaryAppInformation::Win32PrimaryAppInformation(
        Win32PrimaryAppInformation *this,
        const unsigned __int16 *a2)
{
  __int64 *v3; // rax
  _WORD *v4; // rdx
  unsigned __int64 v5; // r8
  LPVOID pv; // [rsp+40h] [rbp+18h] BYREF
  LPVOID v8; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 7LL;
  *(_WORD *)this = 0;
  v3 = wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &v8,
         (__int64)a2);
  v4 = *wil::GetFullPathNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
          &pv,
          *v3);
  v5 = -1LL;
  do
    ++v5;
  while ( v4[v5] );
  std::wstring::assign((char *)this, v4, v5);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v8 )
    CoTaskMemFree(v8);
  return this;
}
