/*
 * XREFs of ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180398798
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18039CFF8 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18036F694 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18039D86C (-RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
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
  LONG right; // r15d
  int v11; // eax
  int v12; // ecx
  HRGN v13; // rbx
  HRGN RectRgnIndirect; // rax
  __int64 v15; // rdx
  HRGN v16; // rax
  HRGN RectRgn; // rax
  int v18; // eax
  int v19; // eax
  CortanaFlightingHelpers *v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // r9
  LANGID ThreadUILanguage; // ax
  int v24; // r15d
  LANGID v25; // ax
  SearchAppDesktopExperienceView *v26; // rcx
  int v27; // r8d
  int v28; // eax
  HRGN v29; // rax
  int v30; // eax
  HRGN v32; // [rsp+30h] [rbp-20h] BYREF
  int v33; // [rsp+38h] [rbp-18h]
  int v34; // [rsp+3Ch] [rbp-14h]
  struct tagRECT *v35; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v35 = a4;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v9 = 0, a3->bottom > 0) )
    v9 = 1;
  right = a2->right;
  v11 = right - a2->left;
  v33 = v11;
  v12 = a2->bottom - a2->top;
  v34 = v12;
  v13 = 0LL;
  v32 = 0LL;
  if ( v9 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v32,
      RectRgnIndirect);
    v13 = v32;
    if ( !v32 )
    {
      v15 = 1427LL;
LABEL_34:
      v21 = -2147467259;
      v22 = 2147500037LL;
      goto LABEL_35;
    }
    v11 = v33;
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
          (void **)&v32,
          RectRgn);
        v13 = v32;
        if ( !v32 )
        {
          v15 = 1447LL;
          goto LABEL_34;
        }
      }
      v34 = v35->bottom - a2->top;
      v18 = v35->right - a2->left;
      v33 = v35->top - a2->top;
      v19 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
              (SearchAppDesktopExperienceView *)(unsigned int)v34,
              v13,
              v35->left - a2->left,
              v33,
              v18,
              v34);
      v21 = v19;
      if ( v19 >= 0 )
      {
        if ( *((_DWORD *)this + 31) != 1
          && (!*((_BYTE *)this + 212) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(v20) || *((_DWORD *)this + 31))
          || *((_DWORD *)this + 32) == 6 )
        {
          goto LABEL_36;
        }
        ThreadUILanguage = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
          right = a5->left;
        v24 = right - a2->left;
        v25 = GetThreadUILanguage();
        v27 = (unsigned int)IsBiDiLocale(v25) ? 0 : a5->right - a2->left;
        v28 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v26, v13, v27, v33, v24, v34);
        v21 = v28;
        if ( v28 >= 0 )
          goto LABEL_36;
        v22 = (unsigned int)v28;
        v15 = 1466LL;
      }
      else
      {
        v22 = (unsigned int)v19;
        v15 = 1455LL;
      }
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)v22);
      goto LABEL_39;
    }
    v16 = CreateRectRgn(a5->left - a2->left, a5->top - a2->top, a5->right - a2->left, a5->bottom - a2->top);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v32,
      v16);
    v13 = v32;
    if ( !v32 )
    {
      v15 = 1440LL;
      goto LABEL_34;
    }
  }
  else if ( a7 )
  {
    v29 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v32,
      v29);
    v13 = v32;
    if ( !v32 )
    {
      v15 = 1477LL;
      goto LABEL_34;
    }
  }
LABEL_36:
  LOBYTE(a3) = 1;
  v30 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 19) + 144LL))(
          *((_QWORD *)this + 19),
          v13,
          a3);
  if ( v30 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v30);
  v21 = 0;
LABEL_39:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v32);
  return v21;
}
