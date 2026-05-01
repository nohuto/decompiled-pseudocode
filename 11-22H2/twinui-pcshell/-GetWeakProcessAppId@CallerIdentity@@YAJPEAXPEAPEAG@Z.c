/*
 * XREFs of ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180132B60
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180132840 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?TryGetProcessWeakAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1806A7F40 (-TryGetProcessWeakAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetWeakProcessAppId(CallerIdentity *this, _QWORD *a2, unsigned __int16 **a3)
{
  NTSTATUS v4; // eax
  const char *v5; // r9
  ULONG ReturnLength; // [rsp+30h] [rbp-228h] BYREF
  __int64 v8; // [rsp+38h] [rbp-220h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-218h] BYREF
  unsigned __int16 v10; // [rsp+44h] [rbp-214h]
  char v11[506]; // [rsp+46h] [rbp-212h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *a2 = 0LL;
  ReturnLength = 0;
  v4 = NtQueryInformationProcess(
         this,
         ProcessExecuteFlags|ProcessUserModeIOPL,
         &ProcessInformation,
         0x200u,
         &ReturnLength);
  if ( v4 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x191,
             (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
             (const char *)(unsigned int)v4);
  if ( (ProcessInformation & 0x1000) == 0 )
    return 0LL;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v8,
    v11,
    (unsigned __int64)v10 >> 1,
    v5);
  *a2 = v8;
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
