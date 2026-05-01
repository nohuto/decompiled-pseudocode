/*
 * XREFs of ?IsEmpty@CPinnedList@@UEAAJPEAH@Z @ 0x180758440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPinnedList::IsEmpty(CPinnedList *this, int *a2)
{
  __int64 (__fastcall *v4)(CPinnedList *, __int64 **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  bool v8; // bl
  void *v9; // rcx
  void *v10; // rcx
  void *v12; // [rsp+38h] [rbp-28h] BYREF
  char v13; // [rsp+40h] [rbp-20h]
  __int64 *v14; // [rsp+48h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a2 = 0;
  v14 = 0LL;
  v4 = *(__int64 (__fastcall **)(CPinnedList *, __int64 **))(*(_QWORD *)this + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  v5 = v4(this, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    pv = 0LL;
    v7 = *v14;
    v12 = 0LL;
    v13 = 1;
    v8 = (*(unsigned int (__fastcall **)(__int64 *, __int64, void **, _QWORD))(v7 + 24))(v14, 1LL, &v12, 0LL) == 0;
    if ( v13 )
    {
      v9 = pv;
      pv = v12;
      if ( v9 )
        CoTaskMemFree(v9);
    }
    if ( v8 )
      *a2 = 1;
    v6 = 0;
    v10 = pv;
    pv = 0LL;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1E,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  return v6;
}
