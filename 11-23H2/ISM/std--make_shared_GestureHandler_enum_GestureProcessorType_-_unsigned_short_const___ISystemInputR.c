/*
 * XREFs of std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180060090
 * Callers:
 *     ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180060474 (-CreateGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     std::_Ref_count_obj2_GestureHandler_::_Ref_count_obj2_GestureHandler__enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x18005FEAC (std--_Ref_count_obj2_GestureHandler_--_Ref_count_obj2_GestureHandler__enum_GestureProcessorType_.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800C05B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VGestureHandler@@$0A@@?$weak_ptr@VGestureHandler@@@std@@QEAA@AEBV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x1801526C0 (--$-0VGestureHandler@@$0A@@-$weak_ptr@VGestureHandler@@@std@@QEAA@AEBV-$shared_ptr@VGestureHandl.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd____(
        _QWORD *a1,
        unsigned int *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int128 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  std::_Ref_count_base *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // r9
  __int64 v15; // r8
  _QWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v19; // [rsp+50h] [rbp-18h]
  void *v20; // [rsp+70h] [rbp+8h]

  v20 = operator new(0x120uLL);
  v9 = std::_Ref_count_obj2_GestureHandler_::_Ref_count_obj2_GestureHandler__enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd____(
         (__int64)v20,
         a2,
         a3,
         a4,
         a5);
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    if ( !v10 || !*(_DWORD *)(v10 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v17[0] = v9 + 16;
      v11 = (std::_Ref_count_base *)a1[1];
      v17[1] = v11;
      v12 = (__int64 *)std::weak_ptr<GestureHandler>::weak_ptr<GestureHandler>(v18, v17);
      v13 = *v12;
      *v12 = *v14;
      *v14 = v13;
      v15 = v12[1];
      v12[1] = v14[1];
      v14[1] = v15;
      if ( v19 )
        std::_Ref_count_base::_Decwref(v19);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
  }
  return a1;
}
