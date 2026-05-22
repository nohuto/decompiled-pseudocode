/*
 * XREFs of ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x18009A0E8
 * Callers:
 *     ?SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800A4D30 (-SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800978D8 (--$_Try_emplace@V-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil.c)
 *     ??0?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z @ 0x1800979D4 (--0-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBam.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCManager::OnPeerConnected(MPCManager *this, struct BamoMPCManagerClientProxy *a2)
{
  char *v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 *v4; // rbx
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(char *, __int64, _QWORD); // rdi
  struct MPCHolographicInputManager *Instance; // rax
  unsigned int v11; // ebx
  struct MPCHolographicInputManager *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)a2 + 8;
  v3 = ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL);
  v4 = (__int64 *)((char *)this + 72);
  wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
    &v17,
    *(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL));
  v6 = std::map<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,>(
         v4,
         (__int64)v15,
         &v17,
         v5);
  v7 = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
  *(_QWORD *)(*(_QWORD *)v6 + 40LL) = v3;
  if ( v3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v17 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( *((_QWORD *)MPCHolographicInputManager::GetInstance() + 418) )
  {
    v9 = *(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)v2 + 32LL);
    Instance = MPCHolographicInputManager::GetInstance();
    v11 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 450) + 112LL))(**((_QWORD **)Instance + 450));
    v12 = MPCHolographicInputManager::GetInstance();
    v13 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)v12 + 450) + 96LL))(**((_QWORD **)v12 + 450));
    v14 = v9(v2, v13, v11);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        106LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v14);
  }
}
