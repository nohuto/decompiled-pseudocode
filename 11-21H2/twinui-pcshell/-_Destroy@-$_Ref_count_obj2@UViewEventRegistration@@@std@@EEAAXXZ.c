/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ @ 0x180158B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

HRESULT __fastcall std::_Ref_count_obj2<ViewEventRegistration>::_Destroy(_QWORD *a1)
{
  HRESULT result; // eax
  HSTRING v3; // rcx
  HSTRING v4; // rcx

  result = Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 5);
  v3 = (HSTRING)a1[3];
  if ( v3 )
    result = WindowsDeleteString(v3);
  v4 = (HSTRING)a1[2];
  if ( v4 )
    return WindowsDeleteString(v4);
  return result;
}
