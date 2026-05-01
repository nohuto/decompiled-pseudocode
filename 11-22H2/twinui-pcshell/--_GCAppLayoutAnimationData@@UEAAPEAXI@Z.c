/*
 * XREFs of ??_GCAppLayoutAnimationData@@UEAAPEAXI@Z @ 0x1807986F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

CAppLayoutAnimationData *__fastcall CAppLayoutAnimationData::`scalar deleting destructor'(
        CAppLayoutAnimationData *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
