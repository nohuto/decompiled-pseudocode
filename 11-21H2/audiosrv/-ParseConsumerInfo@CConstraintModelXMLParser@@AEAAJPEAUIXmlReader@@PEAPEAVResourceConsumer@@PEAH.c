/*
 * XREFs of ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x18015A184
 * Callers:
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015AD8C (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     wcscmp_0 @ 0x18006A657 (wcscmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogError@@YAXPEBGZZ @ 0x18010C4B0 (-LogError@@YAXPEBGZZ.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180159A50 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x180159E78 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015AC68 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015B980 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseConsumerInfo(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3,
        int *a4)
{
  int NodeType; // ebx
  int v9; // eax
  wchar_t *v10; // rax
  wchar_t *String1; // [rsp+20h] [rbp-28h] BYREF
  enum XmlNodeType v13; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, &v13);
  if ( NodeType < 0 )
    return (unsigned int)NodeType;
  if ( v13 != XmlNodeType_Element )
    return (unsigned int)-2147024809;
  String1 = 0LL;
  NodeType = ((__int64 (__fastcall *)(struct IXmlReader *, wchar_t **, _QWORD))a2->lpVtbl->GetLocalName)(
               a2,
               &String1,
               0LL);
  if ( NodeType )
    goto LABEL_14;
  if ( !wcscmp_0(String1, L"PhoneCall") )
  {
    v9 = CConstraintModelXMLParser::ParsePhoneCallInfo((CConstraintModelXMLParser *)this, a2, a3);
LABEL_8:
    NodeType = v9;
    goto LABEL_14;
  }
  if ( !wcscmp_0(String1, L"Stream") )
  {
    *a4 = 1;
    v9 = CConstraintModelXMLParser::ParseStreamIDInfo((CConstraintModelXMLParser *)this, a2, a3);
    goto LABEL_8;
  }
  if ( wcscmp_0(String1, L"KeywordDetector") )
  {
    NodeType = -2147024809;
    LogError((size_t *)L"Invalid resource consumer type %s", String1);
LABEL_14:
    if ( NodeType >= 0 )
      return (unsigned int)CConstraintModelXMLParser::FindEndElement(
                             (CConstraintModelXMLParser *)this,
                             a2,
                             L"ConsumerInfo");
    return (unsigned int)NodeType;
  }
  v10 = (wchar_t *)operator new(0x10uLL);
  String1 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 2) = 2;
    *(_QWORD *)v10 = &KeywordDetectorResourceConsumer::`vftable';
    *a3 = (struct ResourceConsumer *)v10;
    return (unsigned int)CConstraintModelXMLParser::FindEndElement(
                           (CConstraintModelXMLParser *)this,
                           a2,
                           L"ConsumerInfo");
  }
  *a3 = 0LL;
  return (unsigned int)-2147024882;
}
