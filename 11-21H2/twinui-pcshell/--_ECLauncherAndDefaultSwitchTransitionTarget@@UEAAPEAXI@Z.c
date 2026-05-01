/*
 * XREFs of ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x180237850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
CLauncherAndDefaultSwitchTransitionTarget *__fastcall CLauncherAndDefaultSwitchTransitionTarget::`vector deleting destructor'(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        char a2)
{
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
