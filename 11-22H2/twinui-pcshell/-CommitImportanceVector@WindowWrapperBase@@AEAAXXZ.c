/*
 * XREFs of ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1804E96C4
 * Callers:
 *     _lambda_3b41c4f33ad0fdc6aff0256cda85c716_::operator() @ 0x1804E63CC (_lambda_3b41c4f33ad0fdc6aff0256cda85c716_--operator().c)
 *     _lambda_5047f3dcb5456b18a6d7c92307eccb63_::operator() @ 0x1804E6784 (_lambda_5047f3dcb5456b18a6d7c92307eccb63_--operator().c)
 *     _lambda_6b9a4813d4cd55222670e24e1f9f417a_::operator() @ 0x1804E6C70 (_lambda_6b9a4813d4cd55222670e24e1f9f417a_--operator().c)
 *     _lambda_b9e0741b857ac1aa6444f90fae860622_::operator() @ 0x1804E7B44 (_lambda_b9e0741b857ac1aa6444f90fae860622_--operator().c)
 *     _lambda_d1defa04705501fb10e3f00eb63c4368_::operator() @ 0x1804E81A0 (_lambda_d1defa04705501fb10e3f00eb63c4368_--operator().c)
 *     _lambda_d95836077fc497a3191a50b6c6baa704_::operator() @ 0x1804E8440 (_lambda_d95836077fc497a3191a50b6c6baa704_--operator().c)
 *     ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x1804E9210 (-ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800C3348 (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::CommitImportanceVector(WindowWrapperBase *this)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 572) && *((_DWORD *)this + 64) != *((_DWORD *)this + 63) )
  {
    v2 = *((_QWORD *)this + 13);
    if ( v2 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBBC,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v3);
      *((_DWORD *)this + 64) = *((_DWORD *)this + 63);
      v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
      ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int,_RM_ACTIVITY_IMPORTANCE &>(
        &v5,
        (WindowWrapperBase *)((char *)this + 252));
    }
  }
}
