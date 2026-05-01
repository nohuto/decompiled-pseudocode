/*
 * XREFs of ?AddRef@CControlCenterExperienceManager@@UEAAKXZ @ 0x18017B4F0
 * Callers:
 *     ?AddRef@CControlCenterExperienceManager@@W7EAAKXZ @ 0x180295E10 (-AddRef@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x180295E30 (-AddRef@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x180295E50 (-AddRef@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x180295E70 (-AddRef@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x180295E90 (-AddRef@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180295EB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Cha_ea_180295EB0.c)
 *     ?AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x180295ED0 (-AddRef@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x180295EF0 (-AddRef@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ @ 0x180295F10 (-AddRef@CControlCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ @ 0x180295F30 (-AddRef@CControlCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::AddRef(CControlCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *((_QWORD *)this + 12);
  while ( 1 )
  {
    if ( v1 < 0 )
      return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                             (Microsoft::WRL::Details *)(2 * v1 + 16),
                             (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 + 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
