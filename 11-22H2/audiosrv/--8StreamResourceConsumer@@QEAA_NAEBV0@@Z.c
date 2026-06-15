/*
 * XREFs of ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x18015F644
 * Callers:
 *     ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x18000CBC0 (-GetNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 * Callees:
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x180102408 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

char __fastcall StreamResourceConsumer::operator==(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rax

  v5 = 0;
  if ( !(unsigned int)_o__wcsicmp(a1 + 16, a2 + 16)
    && (unsigned int)SimpleWildcardStringCompare((const wchar_t *)(a1 + 418), v4, (const wchar_t *)(a2 + 418))
    && *(_DWORD *)(a1 + 940) == *(_DWORD *)(a2 + 940) )
  {
    v6 = *(_QWORD *)(a1 + 944) - *(_QWORD *)(a2 + 944);
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 952) - *(_QWORD *)(a2 + 952);
    if ( !v6 && *(_DWORD *)(a1 + 960) == *(_DWORD *)(a2 + 960) )
      return 1;
  }
  return v5;
}
