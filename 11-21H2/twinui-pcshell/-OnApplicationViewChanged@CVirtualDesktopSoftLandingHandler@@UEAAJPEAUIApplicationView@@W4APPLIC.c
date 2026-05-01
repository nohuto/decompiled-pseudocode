/*
 * XREFs of ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18013BD90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_List_node_remove_op@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ @ 0x18013BEA8 (--1_List_node_remove_op@-$list@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ.c)
 *     ?AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z @ 0x18013BEDC (-AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::OnApplicationViewChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v8; // eax
  struct IApplicationView *v9; // rdx
  HWND v10; // rax
  __int64 WindowForView; // r9
  __int64 v12; // rcx
  __int64 **v13; // r8
  __int64 *v14; // rdx
  __int64 *v15; // r10
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v22; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v5 = a3 - 1;
    if ( !v5 )
    {
LABEL_10:
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
      if ( WindowForView )
      {
        v12 = a1 + 168;
        v18 = a1 + 168;
        v19 = 0LL;
        v20 = &v19;
        v13 = *(__int64 ***)(a1 + 168);
        v14 = *v13;
        if ( *v13 != (__int64 *)v13 )
        {
          do
          {
            v15 = (__int64 *)*v14;
            if ( v14[2] == WindowForView )
            {
              --*(_QWORD *)(v12 + 8);
              v16 = (_QWORD *)*v14;
              *v14 = 0LL;
              v17 = (_QWORD *)v14[1];
              *v17 = v16;
              v16[1] = v17;
              *v20 = (__int64)v14;
              v20 = v14;
              v12 = v18;
            }
            v14 = v15;
          }
          while ( v15 != (__int64 *)v13 );
        }
        std::list<HWND__ *>::_List_node_remove_op::~_List_node_remove_op(&v18, v14, v13, WindowForView);
      }
      return 0LL;
    }
    v6 = v5 - 9;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 0LL;
      goto LABEL_10;
    }
  }
  v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), int *))(*a2)[27])(
         a2,
         &v22);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
      (const char *)(unsigned int)v8);
  }
  else if ( v22 )
  {
    v10 = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v9);
    if ( v10 )
      CVirtualDesktopSoftLandingHandler::AddWindow((CVirtualDesktopSoftLandingHandler *)(a1 - 16), v10);
  }
  return 0LL;
}
