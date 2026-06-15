/*
 * XREFs of ??_E?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAAPEAXI@Z @ 0x140076CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAA@XZ @ 0x140076B08 (--1-$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::~wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
