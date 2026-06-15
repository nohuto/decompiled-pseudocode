/*
 * XREFs of ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x18015B894
 * Callers:
 *     ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18015A534 (-ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015AD8C (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180159A50 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015B828 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

int __fastcall CConstraintModelXMLParser::ParseSingleResource(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  int result; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-48h] BYREF
  wchar_t String[8]; // [rsp+38h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-30h]
  __int16 v11; // [rsp+4Ch] [rbp-2Ch]

  result = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"ID", a3, 0x101u);
  if ( result >= 0 )
  {
    v10 = 0;
    v11 = 0;
    *(_OWORD *)String = 0LL;
    result = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"Consumption", String, 0xBu);
    if ( result >= 0 )
    {
      *a5 = wcstoul(String, &EndPtr, 10);
      if ( *EndPtr || EndPtr == String )
        return -2147024809;
      else
        return CConstraintModelXMLParser::FindEndElement(this, a2, L"Resource");
    }
  }
  return result;
}
