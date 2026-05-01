/*
 * XREFs of _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x1805003F8
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1801574D0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(__int64 a1, HWND a2, _BYTE *a3, _BYTE *a4)
{
  __int64 result; // rax
  HWND Window; // rsi
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 1;
  *a4 = 1;
  result = GetWindowLongPtrW(a2, -20);
  if ( (result & 0x40000) != 0 )
  {
    result = (__int64)GetWindow(a2, 4u);
    Window = (HWND)result;
    if ( result )
    {
      while ( 1 )
      {
        *a4 = 0;
        v13 = 0LL;
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 336LL);
        v11 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v10 + 48LL);
        AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v13);
        if ( v11(v10, Window, AddressOf) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 248LL) + 184LL))(
                 *(_QWORD *)(*(_QWORD *)a1 + 248LL),
                 v13) )
          {
            break;
          }
        }
        Window = GetWindow(Window, 4u);
        result = Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
        if ( !Window )
          return result;
      }
      *a3 = 0;
      return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
    }
  }
  return result;
}
