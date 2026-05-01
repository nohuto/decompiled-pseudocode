/*
 * XREFs of ?CAppLayoutAnimationData_CreateInstance@@YAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x180798734
 * Callers:
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180792220 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAppLayoutAnimationData@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180798664 (--0CAppLayoutAnimationData@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayoutAnimationData_CreateInstance(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  void *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7
    && (v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))CAppLayoutAnimationData::CAppLayoutAnimationData(
                                                                   (__int64)v7,
                                                                   a1,
                                                                   a2),
        (v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8) != 0LL) )
  {
    v10 = (**v8)(v8, &GUID_7c93abb6_c8f6_47f7_b9be_628444a831bc, a4);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutanimationdata.cpp",
        (const char *)(unsigned int)v10);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutanimationdata.cpp",
      (const char *)0x8007000ELL);
  }
  return v11;
}
