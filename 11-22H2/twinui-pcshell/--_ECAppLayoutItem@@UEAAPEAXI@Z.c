/*
 * XREFs of ??_ECAppLayoutItem@@UEAAPEAXI@Z @ 0x1801B98F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

CAppLayoutItem *__fastcall CAppLayoutItem::`vector deleting destructor'(CAppLayoutItem *this, char a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
