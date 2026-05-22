/*
 * XREFs of ?Destroy@CompositionTexture@Composition@UI@Windows@@UEAAXXZ @ 0x1800A3750
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionTexture::Destroy(
        Windows::UI::Composition::CompositionTexture *this)
{
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)this + 21);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
