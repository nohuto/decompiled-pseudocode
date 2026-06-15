/*
 * XREFs of ??A?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@1@_K@Z @ 0x180015EF0
 * Callers:
 *     ?GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z @ 0x1800444E0 (-GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::operator[](
        _QWORD *a1,
        unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + 8 * a2;
}
