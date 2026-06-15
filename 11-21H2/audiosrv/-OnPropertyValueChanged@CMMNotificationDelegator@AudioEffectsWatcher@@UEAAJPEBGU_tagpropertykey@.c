/*
 * XREFs of ?OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800D3750
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800D2E08 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800D4958 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::CMMNotificationDelegator::OnPropertyValueChanged(
        AudioEffectsWatcher::CMMNotificationDelegator *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  void *v5; // rdx

  if ( CompareStringOrdinal(a2, -1, *((LPCWCH *)this + 3), -1, 1) == 2
    && (unsigned int)operator==((__int64)a3, (__int64)&PKEY_AudioEndpoint_Disable_SysFx) )
  {
    wil::details::SetEvent(*((wil::details **)this + 4), v5);
  }
  return 0LL;
}
