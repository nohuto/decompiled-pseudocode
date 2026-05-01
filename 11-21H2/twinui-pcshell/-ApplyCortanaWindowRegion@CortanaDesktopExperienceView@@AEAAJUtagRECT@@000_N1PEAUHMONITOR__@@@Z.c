/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803A5988
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18036F694 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1803A5EA8 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1803ABCEC (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
        CortanaDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7,
        HMONITOR a8)
{
  bool v10; // r14
  LONG right; // r13d
  LONG left; // r15d
  CortanaFlightingHelpers *top; // rcx
  HRGN v14; // rbx
  HRGN RectRgnIndirect; // rax
  __int64 v16; // rdx
  HRGN RectRgn; // rax
  CortanaDesktopExperienceView *v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // r9
  HRGN v22; // rax
  HRGN v23; // rax
  int v24; // r14d
  int v25; // eax
  int v26; // eax
  CortanaFlightingHelpers *v27; // rcx
  LANGID ThreadUILanguage; // ax
  int v29; // r13d
  LANGID v30; // ax
  CortanaDesktopExperienceView *v31; // rcx
  int v32; // r8d
  int v33; // eax
  HRGN v34; // rax
  int v35; // eax
  HRGN v37; // [rsp+30h] [rbp-48h] BYREF
  int v38; // [rsp+38h] [rbp-40h]
  int y2; // [rsp+3Ch] [rbp-3Ch]
  int x2; // [rsp+40h] [rbp-38h]
  HMONITOR v41; // [rsp+48h] [rbp-30h]
  struct tagRECT *v42; // [rsp+50h] [rbp-28h]
  struct tagRECT v43; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v42 = a4;
  v41 = a8;
  v10 = a3->left > 0 || a3->top > 0 || a3->right > 0 || a3->bottom > 0;
  right = a2->right;
  left = a2->left;
  x2 = right - a2->left;
  top = (CortanaFlightingHelpers *)(unsigned int)a2->top;
  v38 = (int)top;
  y2 = a2->bottom - (_DWORD)top;
  v14 = 0LL;
  v37 = 0LL;
  if ( v10 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v37,
      RectRgnIndirect);
    v14 = v37;
    if ( !v37 )
    {
      v16 = 2059LL;
LABEL_42:
      v20 = -2147467259;
      v21 = 2147500037LL;
      goto LABEL_43;
    }
  }
  if ( !*((_BYTE *)this + 251) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(top) && *((_DWORD *)this + 36) == 4 )
  {
    RectRgn = CreateRectRgn(0, 0, x2, y2);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v37,
      RectRgn);
    v14 = v37;
    if ( !v37 )
    {
      v16 = 2068LL;
      goto LABEL_42;
    }
    v43 = *a2;
    v19 = CortanaDesktopExperienceView::ApplyCortiniWindowRegion(v18, v37, &v43, v41);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = (unsigned int)v19;
      v16 = 2072LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)v21);
      goto LABEL_47;
    }
  }
  if ( a6 )
  {
    if ( a7 )
    {
      v22 = CreateRectRgn(a5->left - left, a5->top - v38, a5->right - left, a5->bottom - v38);
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        (void **)&v37,
        v22);
      v14 = v37;
      if ( !v37 )
      {
        v16 = 2085LL;
        goto LABEL_42;
      }
    }
    else
    {
      if ( !v10 && *((_DWORD *)this + 36) != 4 )
      {
        v23 = CreateRectRgn(0, 0, x2, y2);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&v37,
          v23);
        v14 = v37;
        if ( !v37 )
        {
          v16 = 2092LL;
          goto LABEL_42;
        }
      }
      v24 = v42->bottom - v38;
      v25 = v42->right - left;
      v38 = v42->top - v38;
      v26 = CortanaDesktopExperienceView::RemoveRectFromRegion(top, v14, v42->left - left, v38, v25, v24);
      v20 = v26;
      if ( v26 < 0 )
      {
        v21 = (unsigned int)v26;
        v16 = 2100LL;
        goto LABEL_43;
      }
      if ( (*((_DWORD *)this + 35) == 1
         || (*((_BYTE *)this + 251) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v27)) && !*((_DWORD *)this + 35))
        && *((_DWORD *)this + 36) != 6 )
      {
        ThreadUILanguage = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
          right = a5->left;
        v29 = right - left;
        v30 = GetThreadUILanguage();
        v32 = (unsigned int)IsBiDiLocale(v30) ? 0 : a5->right - left;
        v33 = CortanaDesktopExperienceView::RemoveRectFromRegion(v31, v14, v32, v38, v29, v24);
        v20 = v33;
        if ( v33 < 0 )
        {
          v21 = (unsigned int)v33;
          v16 = 2111LL;
          goto LABEL_43;
        }
      }
    }
  }
  else if ( a7 )
  {
    v34 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v37,
      v34);
    v14 = v37;
    if ( !v37 )
    {
      v16 = 2122LL;
      goto LABEL_42;
    }
  }
  LOBYTE(a3) = 1;
  v35 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 21) + 144LL))(
          *((_QWORD *)this + 21),
          v14,
          a3);
  if ( v35 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x84E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v35);
  v20 = 0;
LABEL_47:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v37);
  return v20;
}
