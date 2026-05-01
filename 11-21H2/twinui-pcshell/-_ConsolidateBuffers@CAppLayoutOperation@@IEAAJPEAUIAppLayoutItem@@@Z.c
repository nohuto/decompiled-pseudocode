/*
 * XREFs of ?_ConsolidateBuffers@CAppLayoutOperation@@IEAAJPEAUIAppLayoutItem@@@Z @ 0x180613F94
 * Callers:
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x18050F54C (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperation::_ConsolidateBuffers(
        CAppLayoutOperation *this,
        __int64 (__fastcall ***a2)(struct IAppLayoutItem *, GUID *, __int64 *))
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rsi
  int (__fastcall *v7)(__int64, struct IAppLayoutItem *, __int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, struct IAppLayoutItem *, __int64); // rdi
  __int64 *v11; // rbx
  __int64 (__fastcall **v12)(struct IAppLayoutItem *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v13)(struct IAppLayoutItem *, GUID *, __int64 *); // rdi
  __int64 *v14; // rbx
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 4LL);
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    return (unsigned int)-2147319767;
  }
  else
  {
    v5 = 0;
    if ( v4 == 2 )
    {
      v6 = *((_QWORD *)this + 5);
      v17 = 0LL;
      v7 = *(int (__fastcall **)(__int64, struct IAppLayoutItem *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 120LL);
      v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v17, &v16);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
      if ( v7(v6, (struct IAppLayoutItem *)a2, 0xFFFFFFFFLL, 4LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v8) >= 0
        || (v9 = *((_QWORD *)this + 5),
            v10 = *(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *, __int64))(*(_QWORD *)v9 + 120LL),
            v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v17, &v16),
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11),
            v5 = v10(v9, (struct IAppLayoutItem *)a2, 1LL),
            v5 >= 0) )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 288LL))(*((_QWORD *)this + 5), v17);
        if ( v5 >= 0 )
        {
          v12 = *a2;
          v16 = 0LL;
          v13 = *v12;
          v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v18);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
          v5 = v13((struct IAppLayoutItem *)a2, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v14);
          if ( v5 >= 0 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v16 + 104LL))(v16, 0LL, &v18);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    }
  }
  return (unsigned int)v5;
}
