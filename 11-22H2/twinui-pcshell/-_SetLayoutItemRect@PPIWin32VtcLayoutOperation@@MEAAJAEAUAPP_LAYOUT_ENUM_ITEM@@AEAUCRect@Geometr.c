/*
 * XREFs of ?_SetLayoutItemRect@PPIWin32VtcLayoutOperation@@MEAAJAEAUAPP_LAYOUT_ENUM_ITEM@@AEAUCRect@Geometry@@@Z @ 0x1805CFEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::_SetLayoutItemRect(
        PPIWin32VtcLayoutOperation *this,
        struct APP_LAYOUT_ENUM_ITEM *a2,
        struct Geometry::CRect *a3)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v5 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v6 = v5(v4, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, struct Geometry::CRect *))(*(_QWORD *)v10 + 104LL))(v10, 0LL, a3);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v7;
}
