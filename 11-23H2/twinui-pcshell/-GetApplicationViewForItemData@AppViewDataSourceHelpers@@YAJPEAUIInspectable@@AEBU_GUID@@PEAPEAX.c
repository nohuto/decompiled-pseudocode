/*
 * XREFs of ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1800279B8
 * Callers:
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x1800274B0 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180037648 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::operator() @ 0x18028D158 (_lambda_f11de0bc23a1be581f21c48152b34889_--operator().c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18076EB60 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 * Callees:
 *     ?IUnknown_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800279EC (-IUnknown_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 */

__int64 __fastcall AppViewDataSourceHelpers::GetApplicationViewForItemData(
        struct IUnknown *this,
        const struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // ebx
  int Object; // eax

  v4 = 0;
  *(_QWORD *)&a3->Data1 = 0LL;
  if ( !this )
    return 2147942487LL;
  Object = IUnknown_QueryObject(this, a2, a3, (void **)a3);
  if ( Object < 0 )
    return (unsigned int)Object;
  return v4;
}
