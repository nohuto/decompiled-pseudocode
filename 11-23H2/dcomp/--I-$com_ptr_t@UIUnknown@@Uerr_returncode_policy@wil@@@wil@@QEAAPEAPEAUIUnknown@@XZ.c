/*
 * XREFs of ??I?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ @ 0x18009DB04
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 *__fastcall wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator&(__int64 *a1)
{
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset(a1);
  return a1;
}
