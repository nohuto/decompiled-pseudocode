/*
 * XREFs of ?Trigger@CLegacyAnimationTrigger@DirectComposition@@UEAAJPEA_K@Z @ 0x1800E88D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyAnimationTrigger::Trigger(
        DirectComposition::CLegacyAnimationTrigger *this,
        unsigned __int64 *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CLegacyAnimationTrigger *)((char *)this + 8),
           0,
           a2,
           a2 != 0LL ? 8 : 0);
}
