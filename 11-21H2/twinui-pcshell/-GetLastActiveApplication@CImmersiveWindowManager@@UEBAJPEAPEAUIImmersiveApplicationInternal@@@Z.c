/*
 * XREFs of ?GetLastActiveApplication@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18017F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::GetLastActiveApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  unsigned int v4; // ebx
  struct IImmersiveApplicationInternal *v6; // rcx
  struct IImmersiveApplicationInternal *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = -2147319765;
  v7 = 0LL;
  if ( *((_BYTE *)this + 89) && *((_QWORD *)this + 8) )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
    v4 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 7))(
           **((_QWORD **)this + 7),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           (__int64 *)&v7);
    v6 = v7;
    v7 = 0LL;
    *a2 = v6;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  return v4;
}
