/*
 * XREFs of ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800C2CB4
 * Callers:
 *     _lambda_53baa370e40e033c43d6bef617b2fce4_::operator() @ 0x1800A05E8 (_lambda_53baa370e40e033c43d6bef617b2fce4_--operator().c)
 *     ?ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x18019AFC0 (-ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     _lambda_0d38c0120a91e9a490c62ae35353bf08_::operator() @ 0x1801F7984 (_lambda_0d38c0120a91e9a490c62ae35353bf08_--operator().c)
 *     _lambda_8fce8fe44b6886d54791b41aace8df6d_::operator() @ 0x1801F7F30 (_lambda_8fce8fe44b6886d54791b41aace8df6d_--operator().c)
 *     _lambda_af20d054935790eae4154cb60d5e7853_::operator() @ 0x1801F8744 (_lambda_af20d054935790eae4154cb60d5e7853_--operator().c)
 *     _lambda_f2c26bad65fa2b8f49fea49bca5a1348_::operator() @ 0x1801F92BC (_lambda_f2c26bad65fa2b8f49fea49bca5a1348_--operator().c)
 *     _lambda_f4e7ecfc19990a45018f7857351c4cad_::operator() @ 0x1801F947C (_lambda_f4e7ecfc19990a45018f7857351c4cad_--operator().c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800C2F48 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?get@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTraceLogging@@P6AXXZ@Z @ 0x1800C3580 (-get@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTrac.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::CommitImportanceVector(UwpWindowWrapperBase *this)
{
  const union _RM_ACTIVITY_IMPORTANCE *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int *v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  ViewManagerInteropTraceLogging *v8; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 572) )
  {
    v2 = (UwpWindowWrapperBase *)((char *)this + 252);
    if ( *((_DWORD *)this + 64) != *((_DWORD *)this + 63) )
    {
      v3 = *((_QWORD *)this + 14);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC86,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v4,
            v9);
        *((_DWORD *)this + 64) = *(_DWORD *)v2;
        v5 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 2) + 288LL))(
                               (char *)this + 16,
                               &v11);
        v7 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropTraceLogging>::get(
                            v6,
                            _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_)
                        + 8);
        if ( v7 )
        {
          if ( *v7 )
          {
            wil::details::static_lazy<ViewManagerInteropTraceLogging>::get(
              v7,
              _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            ViewManagerInteropTraceLogging::CommitImportanceVector_(v8, *v5, v2);
          }
        }
      }
    }
  }
}
