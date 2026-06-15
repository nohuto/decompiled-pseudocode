/*
 * XREFs of ?Find@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_ResourceInfo@@PEAU3@@Z @ 0x180159A2C
 * Callers:
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015AD8C (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::Find(__int64 **a1, _DWORD *a2)
{
  __int64 *result; // rax

  result = *a1;
  if ( !*a1 )
    return 0LL;
  while ( *((_DWORD *)result + 4) != *a2 )
  {
    result = (__int64 *)*result;
    if ( !result )
      return 0LL;
  }
  return result;
}
