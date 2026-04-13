/*
 * XREFs of ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800E26D4
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800E26D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E2D34 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800DBBF8 (--$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AV-$shared_ptr@UIt.c)
 *     ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x1800DF260 (-GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU-$IMapView.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800E26D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800E46C4 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        unsigned int a4)
{
  unsigned int v4; // r13d
  HSTRING v5; // r15
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r12d
  __int64 i; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **); // rdi
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  HSTRING *v19; // rbx
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v20; // rsi
  void (__fastcall *v21)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, HSTRING *); // rdi
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ecx
  double NumberFromPropertyBag; // xmm0_8
  double v26; // xmm0_8
  double v27; // xmm0_8
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rbx
  int v32; // eax
  int v33; // ebx
  __int64 j; // rdx
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **); // rsi
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v37; // rcx
  int v38; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v39; // rcx
  const char *StringRawBuffer; // rax
  int v41; // [rsp+20h] [rbp-B8h]
  char v42; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v43[7]; // [rsp+31h] [rbp-A7h] BYREF
  __int64 v44; // [rsp+38h] [rbp-A0h]
  unsigned int v45; // [rsp+40h] [rbp-98h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v46; // [rsp+48h] [rbp-90h] BYREF
  HSTRING *newString[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v48; // [rsp+60h] [rbp-78h] BYREF
  __int64 v49; // [rsp+68h] [rbp-70h] BYREF
  int v50; // [rsp+70h] [rbp-68h] BYREF
  __int64 v51; // [rsp+78h] [rbp-60h] BYREF
  __int64 v52; // [rsp+80h] [rbp-58h] BYREF
  __int64 v53; // [rsp+88h] [rbp-50h]
  int v54; // [rsp+90h] [rbp-48h]
  __int64 v55; // [rsp+98h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v58; // [rsp+E8h] [rbp+10h] BYREF
  HSTRING v59; // [rsp+F0h] [rbp+18h]
  unsigned int v60; // [rsp+F8h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v58 = a2;
  v4 = a4;
  v5 = a3;
  v6 = *(_QWORD *)a2;
  v52 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v6 + 96))(
         a2,
         &v52);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      350LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      v41);
  v8 = v52;
  v44 = v52;
  v45 = 0;
  v46 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 56LL))(v52, &v50);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9,
      v41);
  v53 = v8;
  v10 = v50;
  v54 = v50;
  v55 = 0LL;
  for ( i = v45; (_DWORD)i != v10; i = ++v45 )
  {
    v12 = v44;
    v13 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v44 + 48LL);
    v14 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v14 + 16LL))(v14);
      i = v45;
    }
    v15 = v13(v12, i, &v46);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v15,
        v41);
    try
    {
      v49 = 0LL;
      v16 = *(_QWORD *)v46;
      v49 = 0LL;
      v17 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v16 + 72))(
              v46,
              &v49);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          356LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v17,
          v41);
      v43[0] = 0;
      v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v49 + 48LL))(v49, v43);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          358LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v18,
          v41);
      if ( v43[0] )
      {
        std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(newString);
        v19 = newString[0];
        if ( !v5 || v5 != *newString[0] )
        {
          WindowsDeleteString(*newString[0]);
          *v19 = 0LL;
          WindowsDuplicateString(v5, v19);
          v19 = newString[0];
        }
        v20 = v46;
        v21 = *(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, HSTRING *))(*(_QWORD *)v46 + 48LL);
        WindowsDeleteString(v19[1]);
        v19[1] = 0LL;
        v21(v20, v19 + 1);
        v48 = 0LL;
        v22 = *(_QWORD *)v46;
        v48 = 0LL;
        v23 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v22 + 80))(
                v46,
                &v48);
        if ( v23 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            367LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v23,
            v41);
        v24 = v4++;
        v60 = v4;
        *((_DWORD *)newString[0] + 5) = v24;
        NumberFromPropertyBag = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                                  L"collection",
                                  v48,
                                  &v42);
        *((double *)newString[0] + 4) = NumberFromPropertyBag;
        *((_BYTE *)newString[0] + 17) = v42 != 0;
        v26 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"item", v48, &v42);
        *((double *)newString[0] + 5) = v26;
        *((_BYTE *)newString[0] + 18) = v42 != 0;
        v27 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"rank", v48, &v42);
        *((double *)newString[0] + 3) = v27;
        *((_BYTE *)newString[0] + 16) = v42 != 0;
        *((_BYTE *)newString[0] + 48) = 0;
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
          (char *)this + 16,
          newString);
        if ( *((_BYTE *)newString[0] + 17) )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
            (char *)this + 40,
            newString);
        if ( v48 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
        std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)newString);
      }
      if ( v49 )
        (*(void (**)(void))(*(_QWORD *)v49 + 16LL))();
    }
    catch ( ... )
    {
      StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v59, 0LL);
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (unsigned __int16 *)0x183,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        "Content ID: %ls",
        StringRawBuffer);
      v4 = v60;
      v5 = v59;
      v10 = v54;
    }
  }
  v28 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *(_QWORD *)v58;
  v51 = 0LL;
  v30 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v29 + 88))(
          v58,
          &v51);
  if ( v30 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      391LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v30,
      v41);
  v31 = v51;
  v44 = v51;
  v45 = 0;
  v46 = 0LL;
  v32 = (*(__int64 (__fastcall **)(__int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v51 + 56LL))(
          v51,
          &v58);
  if ( v32 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v32,
      v41);
  v53 = v31;
  v33 = (int)v58;
  v54 = (int)v58;
  v55 = 0LL;
  for ( j = v45; (_DWORD)j != v33; j = ++v45 )
  {
    v35 = v44;
    v36 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v44 + 48LL);
    v37 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v37 + 16LL))(v37);
      j = v45;
    }
    v38 = v36(v35, j, &v46);
    if ( v38 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v38,
        v41);
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(this, v46, v5, v4);
  }
  v39 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
}
