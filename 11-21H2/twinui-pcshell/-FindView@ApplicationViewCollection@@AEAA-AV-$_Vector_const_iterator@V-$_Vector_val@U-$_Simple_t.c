/*
 * XREFs of ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F01FC
 * Callers:
 *     ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F0080 (-EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804F0FF0 (-IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F1A48 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

struct IUnknown ***__fastcall ApplicationViewCollection::FindView(
        struct IUnknown ***a1,
        struct IUnknown ***a2,
        struct IUnknown *a3)
{
  struct IUnknown **v3; // rsi
  struct IUnknown **i; // rbx
  struct IUnknown ***result; // rax

  v3 = a1[1];
  for ( i = *a1; i != v3 && !(unsigned int)SHIsSameObject(a3, *i); ++i )
    ;
  result = a2;
  *a2 = i;
  return result;
}
