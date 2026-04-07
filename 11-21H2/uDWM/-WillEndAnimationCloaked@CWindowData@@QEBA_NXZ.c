/*
 * XREFs of ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180001E70
 * Callers:
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18001DEC0 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180001EB0 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 */

bool __fastcall CWindowData::WillEndAnimationCloaked(CWindowData *this)
{
  HWND v1; // rdx
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HWND)*((_QWORD *)this + 5);
  v3 = *((_BYTE *)this + 668) & 1;
  CWindowPropertyTracker::GetWindowEndCloak(
    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
    v1,
    &v3);
  return v3;
}
