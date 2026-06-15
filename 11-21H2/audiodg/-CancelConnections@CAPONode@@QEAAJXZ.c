/*
 * XREFs of ?CancelConnections@CAPONode@@QEAAJXZ @ 0x1400816E4
 * Callers:
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x140081B40 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x1400103E0 (-Copy@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_P.c)
 *     ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x1400104C0 (-Copy@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPONode::CancelConnections(CAPONode *this, __int64 a2, __int64 a3)
{
  char *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+8h]

  v4 = (char *)this + 128;
  try
  {
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy((__int64)v4, (_QWORD *)this + 8, a3);
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy((__int64)this + 160, (_QWORD *)this + 12, v5);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
      (__int64)this + 256,
      (_QWORD *)this + 24,
      v6);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
      (__int64)this + 288,
      (_QWORD *)this + 28,
      v7);
  }
  catch ( ATL::CAtlException v9 )
  {
    v11 = v9;
    if ( v9 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x193,
      (int)"avcore\\audiocore\\engine\\core\\objectcache\\devicegraphobjects.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  return 0LL;
}
