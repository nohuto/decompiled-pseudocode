/*
 * XREFs of ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x1801FD1E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x180042844 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180052A58 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ??0?$com_ptr_t@VCAnimationLoggingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAnimationLoggingManager@@@Z @ 0x180103D20 (--0-$com_ptr_t@VCAnimationLoggingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAnimationL.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetDiagnosticItemId(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  int v9; // edx
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  int v12; // esi
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 32LL),
                          *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(this, ResourceWithoutType);
    v9 = *((_DWORD *)a3 + 4);
    *((_DWORD *)DebugInfoForResource + 10) = v9;
    *((_DWORD *)DebugInfoForResource + 11) = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)a3 + 4) )
    {
      if ( *((_DWORD *)a3 + 3) != -1 )
      {
        v10 = operator new(0x20uLL);
        v11 = v10;
        if ( v10 )
        {
          v12 = *((_DWORD *)a3 + 3);
          v13 = *((_DWORD *)a3 + 2);
          v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
          wil::com_ptr_t<CAnimationLoggingManager,wil::err_returncode_policy>::com_ptr_t<CAnimationLoggingManager,wil::err_returncode_policy>(
            v10,
            (__int64)this);
          *((_DWORD *)v11 + 2) = v13;
          v11[2] = v14;
          *((_DWORD *)v11 + 6) = v12;
          v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 112LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 656LL));
          v16 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(CAnimationLoggingManager::DeferredDebugInfo *), _QWORD *, __int64))(*(_QWORD *)v15 + 152LL))(
                  v15,
                  lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_,
                  v11,
                  3LL);
          if ( v16 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              362LL,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              (const char *)(unsigned int)v16,
              v17);
        }
      }
    }
    else if ( !*((_QWORD *)DebugInfoForResource + 3) && !v9 )
    {
      CAnimationLoggingManager::RemoveResourceDebugInfo(this, v6);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
}
