/*
 * XREFs of ?Cancel@Tween@Tweening@Utils@Spectre@@QEAAXXZ @ 0x180092248
 * Callers:
 *     ?StopElevationTween@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x1800933F0 (-StopElevationTween@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 *     ?StopIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093450 (-StopIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::Tweening::Tween::Cancel(
        Spectre::Utils::Tweening::Tween *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  LOBYTE(a2) = 1;
  std::atomic<bool>::operator=((__int64)this + 168, a2, a3, a4);
}
