/*
 * XREFs of ?GetSubscriptionBehavior@TargetedContent@CreativeFramework@@YA?AW4TargetedContentSubscriptionBehavior@12@PEBG@Z @ 0x18005F424
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005F0BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::TargetedContent::GetSubscriptionBehavior(__int64 a1)
{
  char *v1; // rcx
  wchar_t **v2; // rbx
  char *v3; // rcx
  _BYTE *v4; // rdx
  _BYTE *v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-19h] BYREF
  __int128 v8; // [rsp+28h] [rbp-11h]
  __int128 v9; // [rsp+38h] [rbp-1h] BYREF
  __int128 v10; // [rsp+48h] [rbp+Fh]
  __int64 v11; // [rsp+58h] [rbp+1Fh]
  _BYTE v12[24]; // [rsp+60h] [rbp+27h] BYREF
  char *v13; // [rsp+78h] [rbp+3Fh]

  v7 = a1;
  v9 = *(_OWORD *)&off_1801092A0;
  v10 = xmmword_1801092B0;
  v11 = 3600LL;
  *(_QWORD *)&v8 = &v7;
  *((_QWORD *)&v8 + 1) = &v9;
  v13 = 0LL;
  v1 = (char *)operator new(0x20uLL);
  if ( !v1 )
    std::_Xbad_alloc();
  *(_QWORD *)v1 = &std::_Func_impl<std::_Callable_obj<_lambda_e475c25afe6ff700c51d270fc6441ea7_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  *(_OWORD *)(v1 + 8) = v8;
  v13 = v1;
  v2 = off_1801AD210;
  while ( 1 )
  {
    if ( !v1 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(char *, wchar_t **))(*(_QWORD *)v1 + 16LL))(v1, v2) )
      break;
    v2 += 5;
    if ( v2 == (wchar_t **)&unk_1801AD558 )
      break;
    v1 = v13;
  }
  v3 = v13;
  if ( v13 )
  {
    v4 = v12;
    LOBYTE(v4) = v13 != v12;
    (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v13 + 32LL))(v13, v4);
    v3 = 0LL;
    v13 = 0LL;
  }
  if ( v3 )
  {
    v5 = v12;
    LOBYTE(v5) = v3 != v12;
    (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v3 + 32LL))(v3, v5);
  }
  result = (unsigned int)v10;
  if ( (v10 & 0x80u) != 0LL )
    return (unsigned int)v10 | 1;
  return result;
}
