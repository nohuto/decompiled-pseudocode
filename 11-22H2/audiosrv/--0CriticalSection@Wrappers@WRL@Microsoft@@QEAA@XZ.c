/*
 * XREFs of ??0CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18005598C
 * Callers:
 *     _dynamic_initializer_for__CSpatialAudioTech::s_atmosLock__ @ 0x180001730 (_dynamic_initializer_for__CSpatialAudioTech--s_atmosLock__.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *__fastcall Microsoft::WRL::Wrappers::CriticalSection::CriticalSection(
        struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSectionEx(this, 0, 0);
  return this;
}
