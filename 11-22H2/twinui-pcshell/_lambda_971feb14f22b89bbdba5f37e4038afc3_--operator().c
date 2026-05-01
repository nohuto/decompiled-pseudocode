/*
 * XREFs of _lambda_971feb14f22b89bbdba5f37e4038afc3_::operator() @ 0x1801DBCAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_971feb14f22b89bbdba5f37e4038afc3___::Run @ 0x1801DC970 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_971feb14f22b89bbdba5f37e4038afc3___--Run.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 */

__int64 __fastcall lambda_971feb14f22b89bbdba5f37e4038afc3_::operator()(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // edi
  HRGN RectRgn; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hRgn; // [rsp+30h] [rbp+8h] BYREF

  v1 = (int)*(float *)(a1 + 12);
  v3 = 0;
  hRgn = 0LL;
  RectRgn = CreateRectRgn(0, v1, (int)*(float *)(a1 + 16), (int)(float)((float)v1 + *(float *)(a1 + 20)));
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hRgn,
    RectRgn);
  if ( !SetWindowRgn(*(HWND *)a1, hRgn, 1) )
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x6D2,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                           v5);
  return v3;
}
