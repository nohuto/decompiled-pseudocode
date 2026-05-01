/*
 * XREFs of ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1803CD888
 * Callers:
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1803CE270 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800ECE64 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::CopyCloakableWindowsFromGatherer(
        CWin32ApplicationView *this,
        unsigned int *a2,
        HWND **a3)
{
  unsigned int v5; // edi
  int v7; // ebx
  HWND v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebp
  HWND *v11; // rsi
  HWND *v12; // r12
  HWND v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  *a3 = 0LL;
  v5 = *((_DWORD *)this + 60) + 1;
  if ( !is_mul_ok(v5, 8uLL) )
  {
    v7 = -2147024362;
    goto LABEL_12;
  }
  v7 = CTCoAllocPolicy::Alloc(this, 1, 8LL * (unsigned int)(*((_DWORD *)this + 60) + 1), (void **)a3);
  if ( v7 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A6,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v8 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v9 = GhostWindowFromHungWindow(v8);
  v10 = 1;
  if ( v9 )
    v8 = (HWND)v9;
  **a3 = v8;
  v11 = (HWND *)*((_QWORD *)this + 29);
  v12 = &v11[*((_QWORD *)this + 30)];
  while ( v11 != v12 )
  {
    v13 = *v11;
    v14 = GhostWindowFromHungWindow(*v11);
    v15 = v10;
    if ( v14 )
      v13 = (HWND)v14;
    ++v10;
    ++v11;
    (*a3)[v15] = v13;
  }
  *a2 = v5;
  return 0LL;
}
