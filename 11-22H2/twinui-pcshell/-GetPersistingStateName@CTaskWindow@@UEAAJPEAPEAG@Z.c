/*
 * XREFs of ?GetPersistingStateName@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x1800563C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow::GetPersistingStateName(CTaskWindow *this, unsigned __int16 **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, HSTRING *); // rdi
  HSTRING v9; // rcx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v12; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  HSTRING string; // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  v4 = **v3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  v5 = v4(v3, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v5,
      savedregs);
    goto LABEL_5;
  }
  string = 0LL;
  v7 = v16;
  v8 = *(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 72LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8(v7, &string);
  v9 = string;
  if ( string )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v12 = SHStrDupW(StringRawBuffer, a2);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23B,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v12,
        savedregs);
      v9 = string;
      goto LABEL_4;
    }
    v9 = string;
  }
  v6 = 0;
LABEL_4:
  WindowsDeleteString(v9);
  string = 0LL;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  return v6;
}
