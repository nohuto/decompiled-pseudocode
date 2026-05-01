/*
 * XREFs of ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A2130
 * Callers:
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x1806A0458 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A1FC4 (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=3
ITEMIDLIST *__fastcall GetPinnablePidl(ITEMIDLIST *a1, _OWORD *a2, __int128 *a3)
{
  HRESULT v4; // eax
  void *v5; // rcx
  LPITEMIDLIST ppidl[2]; // [rsp+30h] [rbp-50h] BYREF
  char v8; // [rsp+40h] [rbp-40h]
  ITEMIDLIST *v9; // [rsp+50h] [rbp-30h]
  __int128 v10; // [rsp+60h] [rbp-20h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v9 = a1;
  v10 = *a3;
  *(_OWORD *)ppidl = *a2;
  GetPinnableItem((void **)&punk, (__int128 *)ppidl, &v10);
  *(_QWORD *)&a1->mkid.cb = 0LL;
  ppidl[0] = a1;
  ppidl[1] = 0LL;
  v8 = 1;
  v4 = SHGetIDListFromObject(punk, &ppidl[1]);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)v4,
      1);
  if ( v8 )
  {
    v5 = *(void **)ppidl[0];
    *(_QWORD *)ppidl[0] = ppidl[1];
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( punk )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&punk);
  return a1;
}
