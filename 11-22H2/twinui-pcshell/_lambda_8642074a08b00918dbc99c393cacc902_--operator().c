/*
 * XREFs of _lambda_8642074a08b00918dbc99c393cacc902_::operator() @ 0x1803CD4E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902__&_::Run @ 0x1803CECF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902__-_--Run.c)
 * Callees:
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180052EC0 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180149A70 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1803CE39C (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_8642074a08b00918dbc99c393cacc902_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rbx
  int Window; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int16 **v6; // r8
  struct HWND__ v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v8[0].unused = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)EdpGetIsManaged() )
  {
    Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)(*(_QWORD *)a1 + 152LL), &v12);
    v4 = Window;
    if ( Window < 0 )
    {
      v5 = 383LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)Window);
      goto LABEL_10;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
    v9 = -1LL;
    v10 = -1LL;
    Window = EdpHelpers::GetEnterpriseIdForWindow((EdpHelpers *)v12, v8, v6);
    v4 = Window;
    if ( Window < 0 )
    {
      v5 = 386LL;
      goto LABEL_9;
    }
    v2 = *(const unsigned __int16 **)&v8[0].unused;
  }
  Window = CApplicationViewBase::SetEnterpriseId((CApplicationViewBase *)(*(_QWORD *)a1 + 24LL), v2);
  v4 = Window;
  if ( Window < 0 )
  {
    v5 = 389LL;
    goto LABEL_9;
  }
LABEL_10:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  return v4;
}
