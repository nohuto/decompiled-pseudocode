/*
 * XREFs of ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x1801B2BF0
 * Callers:
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F3990 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace@AEAPEAXAEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAXAEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801B2618 (--$emplace@AEAPEAXAEAV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@-$_Hash@V-$_U.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAX@Z @ 0x1801B285C (--$find@X@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wi.c)
 *     ?attach@?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z @ 0x1801B4390 (-attach@-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801B46EC (--0PenInterface@@QEAA@PEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PenDeviceManager::AttachRIMDevice(PenDeviceManager *this, void *a2, void *a3)
{
  float *v5; // rsi
  const char *v6; // r9
  PenInterface *v7; // rbx
  PenInterface *v8; // rax
  const char *v9; // r9
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF
  PenInterface *v14; // [rsp+68h] [rbp+20h]

  v13 = a3;
  v5 = (float *)((char *)this + 80);
  v7 = 0LL;
  if ( *std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::find<void>(
          (_QWORD *)this + 10,
          &v12,
          (const unsigned __int8 *)&v13) != *((_QWORD *)this + 11) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevicemanager.cpp",
      v6);
  v12 = 0LL;
  v8 = (PenInterface *)RefCountedObject::operator new(0xA8uLL);
  try
  {
    v14 = v8;
    if ( v8 )
      v7 = PenInterface::PenInterface(v8, a2, a3);
    wil::com_ptr_t<PenInterface,wil::err_exception_policy>::attach(&v12, v7);
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::emplace<void * &,wil::com_ptr_t<PenInterface,wil::err_exception_policy> &>(
      v5,
      (__int64)v10,
      (unsigned __int8 *)&v13,
      &v12);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevicemanager.cpp",
      v9);
  }
}
