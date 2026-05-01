/*
 * XREFs of ??BSmartCookie@@QEBA_NXZ @ 0x18034D36C
 * Callers:
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800A03A0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x1800A05C0 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartCookie::operator bool(__int64 a1)
{
  return *(_DWORD *)(a1 + 120) != 0;
}
