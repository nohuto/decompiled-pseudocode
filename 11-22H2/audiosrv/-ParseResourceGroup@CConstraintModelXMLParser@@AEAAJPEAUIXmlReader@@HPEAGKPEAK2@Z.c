/*
 * XREFs of ?ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z @ 0x180162958
 * Callers:
 *     ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x180161934 (-ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18016218C (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogError@@YAXPEBGZZ @ 0x180100E14 (-LogError@@YAXPEBGZZ.c)
 *     ?ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180162B74 (-ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180162C28 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseResourceGroup(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v11; // eax
  CConstraintModelXMLParser *v12; // rcx
  int v13; // ebx
  int v14; // eax
  CConstraintModelXMLParser *v15; // rcx
  const wchar_t *v16; // rcx
  int v17; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-40h] BYREF
  wchar_t v20[8]; // [rsp+38h] [rbp-38h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  __int16 v22; // [rsp+4Ch] [rbp-24h]
  wchar_t String[8]; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]
  __int16 v25; // [rsp+64h] [rbp-Ch]

  v11 = ((__int64 (__fastcall *)(struct IXmlReader *))a2->lpVtbl->MoveToFirstAttribute)(a2);
  v13 = v11;
  if ( v11 < 0 )
    return (unsigned int)v13;
  if ( v11 == 1 )
    goto LABEL_17;
  v13 = CConstraintModelXMLParser::ParseSimpleAttribute(v12, a2, L"Name", a4, 0x101u);
  if ( v13 < 0 )
    return (unsigned int)v13;
  v14 = ((__int64 (__fastcall *)(struct IXmlReader *))a2->lpVtbl->MoveToNextAttribute)(a2);
  if ( v14 < 0 || v14 == 1 )
  {
    if ( !a3 )
    {
      v16 = L"Resource group should have priority attribute when referenced in resource consumptions";
      goto LABEL_16;
    }
    goto LABEL_18;
  }
  if ( a3 )
  {
    v16 = L"Resource group should not have priority attribute when declared in Limits";
LABEL_16:
    v13 = -2147024809;
    LogError(v16);
    return (unsigned int)v13;
  }
  v24 = 0;
  v25 = 0;
  *(_OWORD *)String = 0LL;
  v13 = CConstraintModelXMLParser::ParseSimpleAttribute(v15, a2, L"Priority", String, 0xBu);
  if ( v13 >= 0 )
  {
    *a7 = wcstoul(String, &EndPtr, 10);
    v17 = ((__int64 (__fastcall *)(struct IXmlReader *))a2->lpVtbl->MoveToNextAttribute)(a2);
    v13 = v17;
    if ( v17 >= 0 )
    {
      if ( v17 != 1 )
      {
        v13 = -2147024809;
        LogError(L"Got unexpected attribute");
      }
      if ( v13 >= 0 )
      {
LABEL_17:
        if ( !a3 )
        {
          *a6 = 1;
          return (unsigned int)v13;
        }
LABEL_18:
        v21 = 0;
        v22 = 0;
        *(_OWORD *)v20 = 0LL;
        v13 = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"Consumption", v20, 0xBu);
        if ( v13 >= 0 )
        {
          *a6 = wcstoul(v20, &EndPtr, 10);
          if ( *EndPtr || EndPtr == v20 )
            return (unsigned int)-2147024809;
        }
      }
    }
  }
  return (unsigned int)v13;
}
