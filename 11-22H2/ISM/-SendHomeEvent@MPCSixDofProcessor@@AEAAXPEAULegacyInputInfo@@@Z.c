/*
 * XREFs of ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801EDAC8
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801ECC24 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800C3878 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 */

void __fastcall MPCSixDofProcessor::SendHomeEvent(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  if ( !byte_180278C50 )
  {
    v4 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"DisableBloomFor6dof",
      0x10u,
      0LL,
      &dword_180278C4C,
      &v4);
    byte_180278C50 = 1;
  }
  if ( dword_180278C4C != 1 )
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **((_DWORD **)this + 6),
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL),
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 567),
      0x10u);
}
