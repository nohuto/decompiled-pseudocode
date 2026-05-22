/*
 * XREFs of ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x18011BD20
 * Callers:
 *     ??1MPCTarget@@UEAA@XZ @ 0x18011B104 (--1MPCTarget@@UEAA@XZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCTarget::RemoveFromRouter(MPCTarget *this)
{
  struct MPCHolographicInputManager *Instance; // rax

  Instance = MPCHolographicInputManager::GetInstance();
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Instance + 411) + 56LL))(
    *((_QWORD *)Instance + 411),
    *((_QWORD *)this + 6));
}
