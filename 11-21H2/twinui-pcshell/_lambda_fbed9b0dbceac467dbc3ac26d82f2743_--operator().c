/*
 * XREFs of _lambda_fbed9b0dbceac467dbc3ac26d82f2743_::operator() @ 0x18019D284
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fbed9b0dbceac467dbc3ac26d82f2743___::Run @ 0x1801A0C10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fbed9b0dbceac467dbc3ac26d82f2743___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

BOOL __fastcall lambda_fbed9b0dbceac467dbc3ac26d82f2743_::operator()(__int64 a1)
{
  HRGN RectRgnIndirect; // rax
  BOOL v3; // eax
  HRGN v4; // rsi
  HRGN v5; // rax
  const char *v6; // r9
  HWND v7; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hrgnDst; // [rsp+30h] [rbp+8h] BYREF

  hrgnDst = 0LL;
  RectRgnIndirect = CreateRectRgnIndirect((const RECT *)(a1 + 8));
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hrgnDst,
    RectRgnIndirect);
  v3 = IsRectEmpty((const RECT *)(a1 + 8));
  v4 = hrgnDst;
  if ( !v3 && !IsRectEmpty((const RECT *)(a1 + 24)) )
  {
    v5 = CreateRectRgnIndirect((const RECT *)(a1 + 24));
    if ( !CombineRgn(v4, v4, v5, 4) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x21B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        v6);
  }
  v7 = *(HWND *)a1;
  hrgnDst = 0LL;
  if ( !SetWindowRgn(v7, v4, 1) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x21E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v8);
  return wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
}
