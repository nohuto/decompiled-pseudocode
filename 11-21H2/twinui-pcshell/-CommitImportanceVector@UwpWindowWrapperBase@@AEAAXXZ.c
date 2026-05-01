/*
 * XREFs of ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x180414714
 * Callers:
 *     _lambda_127fba945b3ad42759bbeed869c5af3e_::operator() @ 0x18041119C (_lambda_127fba945b3ad42759bbeed869c5af3e_--operator().c)
 *     _lambda_2dc6b38f508d97fb149bdc7180961dcb_::operator() @ 0x1804115EC (_lambda_2dc6b38f508d97fb149bdc7180961dcb_--operator().c)
 *     _lambda_57d92ceadcfe0a87844f58d6472010c3_::operator() @ 0x180411FA4 (_lambda_57d92ceadcfe0a87844f58d6472010c3_--operator().c)
 *     _lambda_9036c4a5e238091638ce6358157a1179_::operator() @ 0x1804123A4 (_lambda_9036c4a5e238091638ce6358157a1179_--operator().c)
 *     _lambda_b43377fd694361d7de0643b09c3ea597_::operator() @ 0x180412818 (_lambda_b43377fd694361d7de0643b09c3ea597_--operator().c)
 *     _lambda_e7e302f6f9f528206f485b6f489d73fa_::operator() @ 0x1804135E8 (_lambda_e7e302f6f9f528206f485b6f489d73fa_--operator().c)
 *     ?ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x180414040 (-ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180407F2C (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 */

void __fastcall UwpWindowWrapperBase::CommitImportanceVector(UwpWindowWrapperBase *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  if ( !*((_BYTE *)this + 564) && *((_DWORD *)this + 62) != *((_DWORD *)this + 61) )
  {
    v2 = *((_QWORD *)this + 13);
    if ( v2 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC60,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v3);
      *((_DWORD *)this + 62) = *((_DWORD *)this + 61);
      v4 = (int *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16, &v6);
      ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int,_RM_ACTIVITY_IMPORTANCE &>(
        v4,
        (UwpWindowWrapperBase *)((char *)this + 244));
    }
  }
}
