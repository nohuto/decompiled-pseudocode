/*
 * XREFs of ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800CF4D4
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CAB98 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800C6E08 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::BackfillItems(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 result; // rax
  __int64 v9; // r14
  unsigned int v10; // r8d
  __int64 *v11; // r15
  char v12; // cl
  _BYTE *v13; // rsi
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-A8h]
  const WCHAR *v19; // [rsp+38h] [rbp-90h] BYREF
  __int64 v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall *v22)(__int64, PVOID, __int64, __int64); // [rsp+50h] [rbp-78h]
  __int64 *v23; // [rsp+58h] [rbp-70h] BYREF
  std::_Ref_count_base *v24; // [rsp+60h] [rbp-68h]
  HSTRING_HEADER v25; // [rsp+68h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = v6;
    result = (__int64)(a2[1] - *a2) >> 4;
    if ( v5 >= result )
      break;
    result = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a3[1] - *a3) >> 3);
    if ( v6 >= result )
      break;
    v9 = *a3 + 56 * v6;
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      &v23,
      (__int64 *)(*a2 + 16 * v5));
    v11 = v23;
    v12 = *((_BYTE *)v23 + 48);
    v13 = (_BYTE *)(v9 + 48);
    if ( v12 || *v13 )
    {
      v16 = v5 + 1;
      if ( !v12 )
        v16 = v5;
      v5 = v16;
      ++v6;
      if ( !*v13 )
        v6 = v7;
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
    else
    {
      v22 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64))(*(_QWORD *)a1 + 48LL);
      v20 = v23[1];
      v21 = *v23;
      if ( *(_QWORD *)(v9 + 24) >= 8uLL )
        v9 = *(_QWORD *)v9;
      v19 = (const WCHAR *)v9;
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v19, v10);
      v15 = v22(a1, v14[1].Reserved.Reserved1, v21, v20);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
          (const char *)(unsigned int)v15,
          v17);
      *((_BYTE *)v11 + 48) = 1;
      *v13 = 1;
      ++v5;
      ++v6;
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
  }
  return result;
}
