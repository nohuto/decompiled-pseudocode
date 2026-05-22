/*
 * XREFs of ?OnHitTest@ShellHandwritingProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180064390
 * Callers:
 *     <none>
 * Callees:
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180063D7C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShOo@@@details@wil@@QEAA_NXZ @ 0x18006481C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShOo@@@details@wil@@QEAA_N.c)
 */

__int64 __fastcall ShellHandwritingProcessor::OnHitTest(
        ShellHandwritingProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  bool v6; // bl
  char v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 0x10) != 0 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    v8 = 1;
    v6 = (int)wil::wnf_query_nothrow<bool>((__int64)this, &v9, (__int64)&v8, (__int64)a4) >= 0 && v9;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShOo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MTestAbShOo>::GetImpl'::`2'::impl)
      || !v6
      || v8 )
    {
      *(_DWORD *)a4 = 1;
      *((_BYTE *)this + 48) = 0;
    }
  }
  return 0LL;
}
