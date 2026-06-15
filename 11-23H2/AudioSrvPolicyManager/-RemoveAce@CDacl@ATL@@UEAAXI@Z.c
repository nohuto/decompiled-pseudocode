/*
 * XREFs of ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x180044AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CDacl::RemoveAce(ATL::CDacl *this, unsigned int a2)
{
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::RemoveAt(
    (char *)this + 24,
    a2);
}
