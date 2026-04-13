/*
 * XREFs of ?FillInItemsWithBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800E7418
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::FillInItemsWithBindings(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbx
  double *v12; // rcx
  double v13; // xmm1_8
  double v14; // xmm2_8
  __int64 v15; // r13
  const WCHAR *v16; // rax
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-98h]
  const WCHAR *v21; // [rsp+38h] [rbp-80h] BYREF
  double v22; // [rsp+40h] [rbp-78h]
  __int64 (__fastcall *v23)(__int64, PVOID, _QWORD, __int64); // [rsp+48h] [rbp-70h]
  _QWORD *v24; // [rsp+50h] [rbp-68h]
  HSTRING_HEADER v25; // [rsp+58h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v24 = a3;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  result = (a2[1] - *a2) >> 4;
  if ( result )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      result = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a3[1] - *a3) >> 3);
      if ( v6 >= result )
        return result;
      v11 = v10 + *a3;
      v12 = *(double **)(v9 + v7);
      v13 = *(double *)(v11 + 32);
      v14 = v12[4];
      if ( v13 == v14 && (!*((_BYTE *)v12 + 18) || *(double *)(v11 + 40) == v12[5]) )
      {
        v23 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64))(*(_QWORD *)v4 + 48LL);
        v15 = *((_QWORD *)v12 + 1);
        v22 = *v12;
        if ( *(_QWORD *)(v11 + 24) < 8uLL )
          v16 = (const WCHAR *)v11;
        else
          v16 = *(const WCHAR **)v11;
        v21 = v16;
        v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v21, (unsigned int)a3);
        v18 = v23(a1, v17[1].Reserved.Reserved1, *(_QWORD *)&v22, v15);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            107LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v18,
            v19);
        *(_BYTE *)(*(_QWORD *)(v9 + v7) + 48LL) = 1;
        *(_BYTE *)(v11 + 48) = 1;
        ++v5;
        v9 += 16LL;
        a3 = v24;
        v4 = a1;
      }
      else if ( v14 <= v13 && (v13 != v14 || v12[5] <= *(double *)(v11 + 40)) )
      {
        if ( v13 > v14 || v13 == v14 && *(double *)(v11 + 40) > v12[5] )
        {
          ++v5;
          v9 += 16LL;
        }
        goto LABEL_13;
      }
      ++v6;
      v10 += 56LL;
LABEL_13:
      v7 = *a2;
      result = (a2[1] - *a2) >> 4;
    }
    while ( v5 < result );
  }
  return result;
}
