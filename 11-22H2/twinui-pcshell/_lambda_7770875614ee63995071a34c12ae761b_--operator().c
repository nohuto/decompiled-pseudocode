/*
 * XREFs of _lambda_7770875614ee63995071a34c12ae761b_::operator() @ 0x1802153A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::Run @ 0x180215870 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba_ea_180215870.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7770875614ee63995071a34c12ae761b_::operator()(HSTRING **a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  PCWSTR StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UINT32 length; // [rsp+48h] [rbp+10h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = CoCreateInstance(&CLSID_DesktopWallpaper, 0LL, 4u, &GUID_c182461f_dfac_4375_ab6e_4cc45aa7f9cc, &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(**a1, &length);
    v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, PCWSTR))(*(_QWORD *)v9 + 24LL))(v9, 0LL, StringRawBuffer);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 184LL))(v9);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 1183LL;
    }
    else
    {
      v4 = 1173LL;
    }
  }
  else
  {
    v4 = 1167LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
  return v3;
}
