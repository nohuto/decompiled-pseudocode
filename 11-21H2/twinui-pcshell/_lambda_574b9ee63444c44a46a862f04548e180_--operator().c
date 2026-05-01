/*
 * XREFs of _lambda_574b9ee63444c44a46a862f04548e180_::operator() @ 0x180191E90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_574b9ee63444c44a46a862f04548e180___::Run @ 0x180193460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_574b9ee63444c44a46a862f04548e180___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall lambda_574b9ee63444c44a46a862f04548e180_::operator()(__int64 a1)
{
  int v1; // edx
  unsigned int LastError; // edi
  HRGN RectRgn; // rax
  HRGN v5; // rdx
  HWND v6; // rcx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hRgn; // [rsp+30h] [rbp+8h] BYREF

  v1 = (int)*(float *)(a1 + 12);
  LastError = 0;
  hRgn = 0LL;
  RectRgn = CreateRectRgn(0, v1, (int)*(float *)(a1 + 16), (int)(float)((float)v1 + *(float *)(a1 + 20)));
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hRgn,
    RectRgn);
  v5 = hRgn;
  v6 = *(HWND *)a1;
  hRgn = 0LL;
  if ( !SetWindowRgn(v6, v5, 1) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x62C,
                  (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                  v7);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hRgn);
  return LastError;
}
