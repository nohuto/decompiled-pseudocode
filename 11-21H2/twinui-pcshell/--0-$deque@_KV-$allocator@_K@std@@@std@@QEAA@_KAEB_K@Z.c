/*
 * XREFs of ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x18001CD10
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x18001CD88 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??0?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@AEAV?$allocator@U_Container_proxy@std@@@1@AEAU_Container_base12@1@@Z @ 0x18001CF64 (--0-$_Container_proxy_ptr12@V-$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@AEAV-$allocator.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::deque<unsigned __int64>::deque<unsigned __int64>(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *i; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(
    &v7,
    &v8,
    a1);
  for ( i = a1; a2; --a2 )
    std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(a1, a3);
  return a1;
}
