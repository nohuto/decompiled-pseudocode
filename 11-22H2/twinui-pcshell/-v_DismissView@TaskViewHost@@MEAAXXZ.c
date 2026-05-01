/*
 * XREFs of ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x18007EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18004048C (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18007C2F4 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18009E334 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wi.c)
 */

void __fastcall TaskViewHost::v_DismissView(TaskViewHost *this)
{
  char *v1; // rdi
  __int64 v3; // rcx

  v1 = (char *)this + 744;
  v3 = *((_QWORD *)this + 93);
  if ( v3 && tip2::details::shared_data<0,0,0>::is_running(v3 + 8) )
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete(v1);
  __abi_winrt_ptr_assign((_QWORD *)this + 26, 0LL);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>>(*((void **)this + 40));
  *((_QWORD *)this + 41) = *((_QWORD *)this + 40);
}
