/*
 * XREFs of ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x180041AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18003F498 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@s.c)
 *     ?is_running@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18004764C (-is_running@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

void __fastcall TaskViewHost::v_DismissView(TaskViewHost *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 728);
  v3 = *((_QWORD *)this + 91);
  if ( v3 && (unsigned __int8)tip::details::test_common_data<0>::is_running(v3 + 8) )
    tip::tip_test<_tip_TaskViewShowTest>::complete(v1);
  __abi_winrt_ptr_assign((char *)this + 200, 0LL);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
    *((__int64 **)this + 38),
    *((__int64 **)this + 39));
  *((_QWORD *)this + 39) = *((_QWORD *)this + 38);
}
