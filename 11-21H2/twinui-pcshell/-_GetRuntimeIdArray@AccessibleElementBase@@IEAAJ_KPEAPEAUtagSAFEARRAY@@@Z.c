/*
 * XREFs of ?_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z @ 0x1804CDCAC
 * Callers:
 *     ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804CCE20 (-GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall AccessibleElementBase::_GetRuntimeIdArray(
        AccessibleElementBase *this,
        __int64 a2,
        struct tagSAFEARRAY **a3)
{
  unsigned int v3; // ebx
  SAFEARRAY *Vector; // rdi
  unsigned int v6; // eax
  HRESULT v7; // eax
  HRESULT v8; // esi
  LONG rgIndices; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v11[4]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11[2] = a2;
  v3 = 0;
  *a3 = 0LL;
  v11[0] = 3;
  v11[1] = HIDWORD(a2);
  Vector = SafeArrayCreateVector(3u, 0, 3u);
  if ( Vector )
  {
    rgIndices = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = SafeArrayPutElement(Vector, &rgIndices, &v11[v6]);
      v8 = v7;
      if ( v7 < 0 )
        break;
      v6 = rgIndices + 1;
      rgIndices = v6;
      if ( v6 >= 3 )
      {
        *a3 = Vector;
        return v3;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v7);
    v3 = v8;
    SafeArrayDestroy(Vector);
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)0x8007000ELL);
  }
  return v3;
}
