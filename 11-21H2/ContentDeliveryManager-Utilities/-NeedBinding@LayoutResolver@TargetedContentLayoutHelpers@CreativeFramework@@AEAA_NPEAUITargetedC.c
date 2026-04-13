/*
 * XREFs of ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E07D4
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800DC614 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800DE560 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::NeedBinding(
        __int64 a1,
        __int64 *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  int v5; // eax
  bool v6; // bl
  char v7; // di
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r15
  void *v15; // r14
  unsigned __int64 v16; // r12
  void *v17; // r13
  void **v18; // r8
  unsigned __int64 v19; // rax
  _WORD *v20; // r10
  int v21; // ecx
  int v22; // eax
  void **v23; // r10
  unsigned __int64 v24; // rax
  _WORD *v25; // r11
  int v26; // eax
  _WORD *v27; // r9
  unsigned __int64 v28; // rax
  _WORD *v29; // r10
  int v31; // [rsp+20h] [rbp-79h]
  _BYTE v32[4]; // [rsp+30h] [rbp-69h] BYREF
  int v33; // [rsp+34h] [rbp-65h] BYREF
  __int64 v34; // [rsp+38h] [rbp-61h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-59h] BYREF
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v36; // [rsp+48h] [rbp-51h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v37; // [rsp+50h] [rbp-49h]
  void *v38[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-31h]
  unsigned __int64 v40; // [rsp+70h] [rbp-29h]
  _QWORD v41[2]; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp-11h]
  unsigned __int64 v43; // [rsp+90h] [rbp-9h]
  _QWORD v44[2]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp+Fh]
  unsigned __int64 v46; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v36 = a3;
  v37 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _BYTE *))(*a2 + 56))(a2, *(_QWORD *)(a1 + 8), v32);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      147LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5,
      v31);
  v6 = 0;
  v7 = 1;
  if ( v32[0] )
  {
    v8 = *a2;
    v35 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 **))(v8 + 64))(
           a2,
           *(_QWORD *)(a1 + 8),
           0LL,
           &v35);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        156LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v9,
        v31);
    v34 = 0LL;
    v10 = *v35;
    v34 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 72))(v35, &v34);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        160LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v11,
        v31);
    v33 = 0;
    v12 = v34;
    if ( v34 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v33);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          165LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v13,
          v31);
      v6 = v33 != 0;
      v12 = v34;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v35 )
      (*(void (__fastcall **)(__int64 *))(*v35 + 16))(v35);
  }
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v41,
    *(HSTRING *)(a1 + 8),
    L"layoutBound");
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v44,
    *(HSTRING *)(a1 + 8),
    L"layoutChosen");
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v38, (char *)L"cloud", aCloud[0] != 0 ? 5 : 0);
  v14 = v43;
  v15 = (void *)v41[0];
  v16 = v46;
  v17 = (void *)v44[0];
  if ( v32[0] && v6 && v42 )
  {
    v18 = v38;
    if ( v40 >= 8 )
      v18 = (void **)v38[0];
    v19 = v42;
    if ( v42 >= v39 )
      v19 = v39;
    v20 = v41;
    if ( v43 >= 8 )
      v20 = (_WORD *)v41[0];
    v21 = -1;
    if ( v19 )
    {
      while ( *v20 == *(_WORD *)v18 )
      {
        ++v20;
        v18 = (void **)((char *)v18 + 2);
        if ( !--v19 )
          goto LABEL_24;
      }
      v22 = *v20 < *(_WORD *)v18 ? -1 : 1;
    }
    else
    {
LABEL_24:
      if ( v42 >= v39 )
        v22 = v42 != v39;
      else
        v22 = -1;
    }
    if ( v22 )
    {
      v23 = v38;
      if ( v40 >= 8 )
        v23 = (void **)v38[0];
      v24 = v45;
      if ( v45 >= v39 )
        v24 = v39;
      v25 = v44;
      if ( v46 >= 8 )
        v25 = (_WORD *)v44[0];
      if ( v24 )
      {
        while ( *v25 == *(_WORD *)v23 )
        {
          ++v25;
          v23 = (void **)((char *)v23 + 2);
          if ( !--v24 )
            goto LABEL_38;
        }
        v26 = *v25 < *(_WORD *)v23 ? -1 : 1;
      }
      else
      {
LABEL_38:
        v26 = v45 >= v39 ? v45 != v39 : -1;
      }
      if ( v26 )
        goto LABEL_55;
    }
    v27 = v41;
    if ( v43 >= 8 )
      v27 = (_WORD *)v41[0];
    v28 = v45;
    if ( v45 >= v42 )
      v28 = v42;
    v29 = v44;
    if ( v46 >= 8 )
      v29 = (_WORD *)v44[0];
    if ( v28 )
    {
      while ( *v29 == *v27 )
      {
        ++v29;
        ++v27;
        if ( !--v28 )
          goto LABEL_52;
      }
      v21 = *v29 < *v27 ? -1 : 1;
    }
    else
    {
LABEL_52:
      if ( v45 >= v42 )
        v21 = v45 != v42;
    }
    if ( !v21 )
LABEL_55:
      v7 = 0;
  }
  if ( v40 >= 8 )
  {
    operator delete(v38[0]);
    v14 = v43;
    v15 = (void *)v41[0];
    v16 = v46;
    v17 = (void *)v44[0];
  }
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38[0]) = 0;
  if ( v16 >= 8 )
  {
    operator delete(v17);
    v14 = v43;
    v15 = (void *)v41[0];
  }
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44[0]) = 0;
  if ( v14 >= 8 )
    operator delete(v15);
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41[0]) = 0;
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v36);
  return v7;
}
