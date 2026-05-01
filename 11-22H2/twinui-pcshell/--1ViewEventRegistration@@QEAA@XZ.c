/*
 * XREFs of ??1ViewEventRegistration@@QEAA@XZ @ 0x180191D40
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ @ 0x180191D30 (-_Destroy@-$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ViewEventRegistration::~ViewEventRegistration(ViewEventRegistration *this)
{
  HSTRING v2; // rcx

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  v2 = (HSTRING)*((_QWORD *)this + 1);
  if ( v2 )
    WindowsDeleteString(v2);
  if ( *(_QWORD *)this )
    WindowsDeleteString(*(HSTRING *)this);
}
