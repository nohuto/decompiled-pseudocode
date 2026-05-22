/*
 * XREFs of ??1CompositionTexture@Composition@UI@Windows@@UEAA@XZ @ 0x1800A2060
 * Callers:
 *     ??_ECompositionTexture@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800A2230 (--_ECompositionTexture@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionTexture::~CompositionTexture(
        Windows::UI::Composition::CompositionTexture *this)
{
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 21);
  Windows::UI::Composition::CompositionObject::~CompositionObject(this);
}
