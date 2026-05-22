/*
 * XREFs of ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x180186AB0
 * Callers:
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800CB5F0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAX@Z @ 0x18018576C (--$find@X@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wi.c)
 *     ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x1801890D0 (-ProcessInputReport@PenInterface@@QEAAJPEADK@Z.c)
 */

void __fastcall PenDeviceManager::HandleRIMDeviceInput(PenDeviceManager *this, void *a2, char *a3, unsigned int a4)
{
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::find<void>(
    (_QWORD *)this + 10,
    &v7,
    (const unsigned __int8 *)&v8);
  if ( v7 != *((_QWORD *)this + 11) )
    PenInterface::ProcessInputReport(*(PenInterface **)(v7 + 24), a3, a4);
}
