/*
 * XREFs of ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800E7250
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAXPEAUItem@TargetedContentLayoutHelpers@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800E4410 (-_Reset0@-$_Ptr_base@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAXPEAUItem@T.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::BackfillItems(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // r14
  char v15; // cl
  _BYTE *v16; // rbp
  __int64 v17; // r12
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r9
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-A8h]
  const WCHAR *v24; // [rsp+30h] [rbp-98h] BYREF
  __int64 v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int64 (__fastcall *v27)(__int64, PVOID, __int64, __int64); // [rsp+48h] [rbp-80h]
  __int128 v28; // [rsp+50h] [rbp-78h] BYREF
  HSTRING_HEADER v29; // [rsp+60h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v5 = a1;
  v26 = a1;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *a2;
  result = (a2[1] - *a2) >> 4;
  if ( result )
  {
    do
    {
      result = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a3[1] - *a3) >> 3);
      if ( v7 >= result )
        break;
      v10 = *a3 + 56 * v7;
      v28 = 0LL;
      v11 = *(_QWORD *)(v8 + 16 * v6 + 8);
      v12 = *(_QWORD *)(v8 + 16 * v6);
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      std::_Ptr_base<CreativeFramework::TargetedContentLayoutHelpers::Item>::_Reset0(&v28, v12, v11);
      v14 = v28;
      v15 = *(_BYTE *)(v28 + 48);
      if ( v15 || (v16 = (_BYTE *)(v10 + 48), *(_BYTE *)(v10 + 48)) )
      {
        v21 = v6 + 1;
        if ( !v15 )
          v21 = v6;
        v6 = v21;
        v22 = v7 + 1;
        if ( !*(_BYTE *)(v10 + 48) )
          v22 = v7;
        v7 = v22;
      }
      else
      {
        v27 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64))(*(_QWORD *)v5 + 48LL);
        v17 = *(_QWORD *)(v28 + 8);
        v25 = *(_QWORD *)v28;
        if ( *(_QWORD *)(v10 + 24) >= 8uLL )
          v10 = *(_QWORD *)v10;
        v24 = (const WCHAR *)v10;
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v24, v13);
        v19 = v17;
        v5 = v26;
        v20 = v27(v26, v18[1].Reserved.Reserved1, v25, v19);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            151LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v20,
            v23);
        *(_BYTE *)(v14 + 48) = 1;
        *v16 = 1;
        ++v6;
        ++v7;
      }
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v28);
      v8 = *a2;
      result = (a2[1] - *a2) >> 4;
    }
    while ( v6 < result );
  }
  return result;
}
