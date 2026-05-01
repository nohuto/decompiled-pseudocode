/*
 * XREFs of ?OnHotkey@CShellSnapComponent@@UEAAX_K_J@Z @ 0x1806621B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CShellSnapComponent::OnHotkey(CShellSnapComponent *this, unsigned int a2, int a3)
{
  HWND ForegroundWindow; // r14
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, HWND, __int64 *); // rbx
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12)) )
    {
      v9 = 0LL;
      v7 = *((_QWORD *)this + 10);
      v8 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v7 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
      if ( v8(v7, ForegroundWindow, &v9) < 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
        return;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12), v9);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 12) + 24LL))(
      *((_QWORD *)this + 12),
      HIWORD(a3),
      (unsigned __int16)a3,
      a2);
  }
}
