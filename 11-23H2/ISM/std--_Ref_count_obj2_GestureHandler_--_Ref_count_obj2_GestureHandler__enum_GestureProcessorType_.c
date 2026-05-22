/*
 * XREFs of std::_Ref_count_obj2_GestureHandler_::_Ref_count_obj2_GestureHandler__enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x18005FEAC
 * Callers:
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180060090 (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 * Callees:
 *     ??0GestureHandler@@QEAA@W4GestureProcessorType@@PEBGPEAUISystemInputRouterHitTest@@V?$function@$$A6AXPEAVGestureHandler@@W4GestureCompletedReason@@@Z@std@@@Z @ 0x180156564 (--0GestureHandler@@QEAA@W4GestureProcessorType@@PEBGPEAUISystemInputRouterHitTest@@V-$function@$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2_GestureHandler_::_Ref_count_obj2_GestureHandler__enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd____(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int128 *a5)
{
  __int64 (__fastcall **v7)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 (__fastcall ***v10)(); // [rsp+68h] [rbp-10h]

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<GestureHandler>::`vftable';
  v7 = off_1801FE8E0;
  v8 = *a5;
  v9 = *((_QWORD *)a5 + 2);
  v10 = &v7;
  GestureHandler::GestureHandler(a1 + 16, *a2, *a3, *a4, &v7);
  return a1;
}
