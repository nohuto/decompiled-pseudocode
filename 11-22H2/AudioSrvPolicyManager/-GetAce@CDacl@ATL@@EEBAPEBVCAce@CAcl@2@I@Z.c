/*
 * XREFs of ?GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z @ 0x180045970
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@1@_K@Z @ 0x1800160E0 (--A-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 */

const struct ATL::CAcl::CAce *__fastcall ATL::CDacl::GetAce(ATL::CDacl *this, unsigned int a2)
{
  return *(const struct ATL::CAcl::CAce **)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::operator[](
                                             (_QWORD *)this + 3,
                                             a2);
}
