/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030E444
 * Callers:
 *     ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x18030E980 (-OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
        Microsoft::WRL::WeakRef *a1,
        __int64 *a2)
{
  int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, (__int64)&v7);
  if ( v3 >= 0 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
    if ( v7 )
    {
      v5 = **v7;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
      v3 = v5(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
