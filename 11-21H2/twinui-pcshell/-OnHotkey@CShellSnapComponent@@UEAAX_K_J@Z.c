/*
 * XREFs of ?OnHotkey@CShellSnapComponent@@UEAAX_K_J@Z @ 0x1805950C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CShellSnapComponent::OnHotkey(CShellSnapComponent *this, unsigned int a2, int a3)
{
  HWND ForegroundWindow; // r14
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13)) )
    {
      v10 = 0LL;
      v7 = *((_QWORD *)this + 11);
      v8 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v7 + 48LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v10);
      if ( v8(v7, ForegroundWindow, AddressOf) < 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
        return;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 40LL))(*((_QWORD *)this + 13), v10);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 24LL))(
      *((_QWORD *)this + 13),
      HIWORD(a3),
      (unsigned __int16)a3,
      a2);
  }
}
