/*
 * XREFs of ?CancelConnections@CAPONode@@QEAAJXZ @ 0x14008E8F4
 * Callers:
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EE60 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x14008E9BC (-Copy@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_P.c)
 *     ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x14008EA1C (-Copy@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z.c)
 */

__int64 __fastcall CAPONode::CancelConnections(CAPONode *this)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v5; // [rsp+40h] [rbp+8h]

  try
  {
    ((void (*)(void))ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy)();
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy((char *)this + 160, (char *)this + 96);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
      (char *)this + 256,
      (char *)this + 192);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
      (char *)this + 288,
      (char *)this + 224);
  }
  catch ( ATL::CAtlException v3 )
  {
    v5 = v3;
    if ( v3 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x193,
      (__int64)"avcore\\audiocore\\engine\\core\\objectcache\\devicegraphobjects.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
  return 0LL;
}
