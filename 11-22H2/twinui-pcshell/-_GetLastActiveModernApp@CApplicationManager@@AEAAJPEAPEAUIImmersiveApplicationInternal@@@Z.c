/*
 * XREFs of ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000BA68
 * Callers:
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x18000C1E8 (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1803A2234 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator() @ 0x18039708C (_lambda_00a99e92ff34f3b9a38e1d2a681d0525_--operator().c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_GetLastActiveModernApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rbx
  struct IImmersiveApplicationInternal *v7; // rax
  unsigned int v8; // ebx
  struct IImmersiveApplicationInternal **v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  struct IImmersiveApplicationInternal *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v10 = &v12;
  v4 = *((_QWORD *)this + 97);
  v11 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 80);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !(unsigned __int8)lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator()(
                             &v10,
                             *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i)) )
      break;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  v7 = v12;
  v12 = 0LL;
  *a2 = v7;
  v8 = v7 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return v8;
}
