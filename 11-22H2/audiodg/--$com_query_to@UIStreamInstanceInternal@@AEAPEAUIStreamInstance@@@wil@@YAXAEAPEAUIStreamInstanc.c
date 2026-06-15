/*
 * XREFs of ??$com_query_to@UIStreamInstanceInternal@@AEAPEAUIStreamInstance@@@wil@@YAXAEAPEAUIStreamInstance@@PEAPEAUIStreamInstanceInternal@@@Z @ 0x14002E438
 * Callers:
 *     ?CreateBridgeSourceStreamForMicInjection@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIStreamInstance@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002E490 (-CreateBridgeSourceStreamForMicInjection@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTO.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400584C4 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_query_to<IStreamInstanceInternal,IStreamInstance * &>(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(
             *a1,
             &GUID_88f600c8_fc0c_4be6_9b2e_3dffa507c48b,
             a2);
  if ( (int)result < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x4F5,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)result,
      v3);
  return result;
}
