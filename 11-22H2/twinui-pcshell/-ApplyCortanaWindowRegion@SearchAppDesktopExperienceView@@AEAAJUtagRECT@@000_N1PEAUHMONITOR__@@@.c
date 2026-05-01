/*
 * XREFs of ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180477098
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1804450E8 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18047C0D4 (-RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ApplyCortanaWindowRegion(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7)
{
  char v9; // di
  LONG right; // r14d
  int v11; // r13d
  int v12; // eax
  HRGN v13; // rbx
  HRGN RectRgnIndirect; // rax
  __int64 v15; // rdx
  HRGN v16; // rax
  HRGN RectRgn; // rax
  int v18; // r13d
  int v19; // eax
  int v20; // eax
  CortanaFlightingHelpers *v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r9
  LANGID ThreadUILanguage; // ax
  int v25; // r14d
  LANGID v26; // ax
  SearchAppDesktopExperienceView *v27; // rcx
  int v28; // r8d
  int v29; // eax
  HRGN v30; // rax
  int v31; // eax
  HRGN v33; // [rsp+30h] [rbp-58h] BYREF
  int v34; // [rsp+38h] [rbp-50h]
  struct tagRECT *v35; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v35 = a4;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v9 = 0, a3->bottom > 0) )
    v9 = 1;
  right = a2->right;
  v11 = right - a2->left;
  v12 = a2->bottom - a2->top;
  v34 = v12;
  v13 = 0LL;
  v33 = 0LL;
  if ( v9 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v33,
      RectRgnIndirect);
    v13 = v33;
    if ( !v33 )
    {
      v15 = 1418LL;
LABEL_34:
      v22 = -2147467259;
      v23 = 2147500037LL;
      goto LABEL_35;
    }
    v12 = v34;
  }
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( !v9 )
      {
        RectRgn = CreateRectRgn(0, 0, v11, v12);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&v33,
          RectRgn);
        v13 = v33;
        if ( !v33 )
        {
          v15 = 1438LL;
          goto LABEL_34;
        }
      }
      v18 = v35->bottom - a2->top;
      v19 = v35->right - a2->left;
      v34 = v35->top - a2->top;
      v20 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
              (SearchAppDesktopExperienceView *)(unsigned int)v34,
              v13,
              v35->left - a2->left,
              v34,
              v19,
              v18);
      v22 = v20;
      if ( v20 >= 0 )
      {
        if ( *((_DWORD *)this + 29) != 1
          && (!*((_BYTE *)this + 204) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(v21) || *((_DWORD *)this + 29))
          || *((_DWORD *)this + 30) == 6 )
        {
          goto LABEL_36;
        }
        ThreadUILanguage = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
          right = a5->left;
        v25 = right - a2->left;
        v26 = GetThreadUILanguage();
        v28 = (unsigned int)IsBiDiLocale(v26) ? 0 : a5->right - a2->left;
        v29 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v27, v13, v28, v34, v25, v18);
        v22 = v29;
        if ( v29 >= 0 )
          goto LABEL_36;
        v23 = (unsigned int)v29;
        v15 = 1457LL;
      }
      else
      {
        v23 = (unsigned int)v20;
        v15 = 1446LL;
      }
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)v23);
      goto LABEL_39;
    }
    v16 = CreateRectRgn(a5->left - a2->left, a5->top - a2->top, a5->right - a2->left, a5->bottom - a2->top);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v33,
      v16);
    v13 = v33;
    if ( !v33 )
    {
      v15 = 1431LL;
      goto LABEL_34;
    }
  }
  else if ( a7 )
  {
    v30 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v33,
      v30);
    v13 = v33;
    if ( !v33 )
    {
      v15 = 1468LL;
      goto LABEL_34;
    }
  }
LABEL_36:
  LOBYTE(a3) = 1;
  v31 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 18) + 144LL))(
          *((_QWORD *)this + 18),
          v13,
          a3);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v31);
  v22 = 0;
LABEL_39:
  if ( v13 )
    DeleteObject(v13);
  return v22;
}
