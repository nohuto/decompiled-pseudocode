/*
 * XREFs of ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1805A7FCC
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A8880 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1805A9980 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

struct IUnknown ***__fastcall UwpPrimaryAppProxy::FindAppView(__int64 a1, struct IUnknown ***a2, struct IUnknown *a3)
{
  struct IUnknown **v3; // rsi
  struct IUnknown **i; // rbx
  struct IUnknown ***result; // rax

  v3 = *(struct IUnknown ***)(a1 + 56);
  for ( i = *(struct IUnknown ***)(a1 + 48); i != v3 && !(unsigned int)SHIsSameObject(a3, *i); ++i )
    ;
  result = a2;
  *a2 = i;
  return result;
}
