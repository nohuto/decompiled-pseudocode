/*
 * XREFs of ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1805A98E0
 * Callers:
 *     ?ExitFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805A7F70 (-ExitFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805A91E0 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1805A802C (-FindView@ApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1805AA04C (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ApplicationViewCollection::RemoveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  char v5; // bl
  struct IUnknown **v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v8 = v4;
  ApplicationViewCollection::FindView((struct IUnknown ***)this, &v7, a2);
  if ( v7 == this[1].Ptr )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase(this, &v7);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v5;
}
