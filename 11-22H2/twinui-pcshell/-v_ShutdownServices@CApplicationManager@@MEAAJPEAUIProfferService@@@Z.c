/*
 * XREFs of ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x18018D910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CDelayIAMOperations@@QEAA@XZ @ 0x18018DA04 (--1CDelayIAMOperations@@QEAA@XZ.c)
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x18018DA64 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::v_ShutdownServices(CApplicationManager *this, struct IProfferService *a2)
{
  _QWORD *v3; // rdi
  unsigned int i; // ebx
  HWND v5; // rax
  void *v6; // rbx

  v3 = &unk_180985278;
  for ( i = 0; i < 0xB; ++i )
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD, struct IProfferService *))(*(_QWORD *)*v3 + 32LL))(*v3, a2);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&unk_180985278 + 2 * i);
    }
    v3 += 2;
  }
  CApplicationManager::_ShutdownServiceProviders((CApplicationManager *)((char *)this - 88));
  v5 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 83) + 24LL))(*((_QWORD *)this + 83));
  RemovePropW(v5, L"AllowConsentToStealFocus");
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 83);
  v6 = (void *)*((_QWORD *)this + 89);
  if ( v6 )
  {
    CDelayIAMOperations::~CDelayIAMOperations(*((CDelayIAMOperations **)this + 89));
    operator delete(v6, 0x40uLL);
  }
  *((_QWORD *)this + 89) = 0LL;
  return 0LL;
}
