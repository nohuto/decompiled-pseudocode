/*
 * XREFs of ?_GetArrangementBasedViewState@CSnappedWindow@@AEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1805AB84C
 * Callers:
 *     ?IsMaximizedWindow@CSnappedWindow@@UEAA_NXZ @ 0x1805AB5B0 (-IsMaximizedWindow@CSnappedWindow@@UEAA_NXZ.c)
 *     ?IsMinimizedWindow@CSnappedWindow@@UEAA_NXZ @ 0x1805AB5E0 (-IsMinimizedWindow@CSnappedWindow@@UEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnappedWindow::_GetArrangementBasedViewState(
        CSnappedWindow *this,
        enum ARRANGEMENT_BASED_VIEW_STATE *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *((_QWORD *)this + 4);
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 104LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v5 = v4(v3, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, enum ARRANGEMENT_BASED_VIEW_STATE *))(*(_QWORD *)v10 + 32LL))(v10, a2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 177LL;
  }
  else
  {
    v7 = 176LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v6;
}
