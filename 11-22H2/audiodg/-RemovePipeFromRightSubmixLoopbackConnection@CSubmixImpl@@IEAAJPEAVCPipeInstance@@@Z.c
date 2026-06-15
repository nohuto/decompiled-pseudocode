/*
 * XREFs of ?RemovePipeFromRightSubmixLoopbackConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z @ 0x140068B64
 * Callers:
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140068A40 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::RemovePipeFromRightSubmixLoopbackConnection(
        CSubmixImpl *this,
        struct CPipeInstance *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( v3 )
  {
    v9 = 0LL;
    v4 = (**v3)(v3, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1223LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v4);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v9);
      return v5;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v9 + 176LL))(v9, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1225LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v9);
  }
  return 0LL;
}
