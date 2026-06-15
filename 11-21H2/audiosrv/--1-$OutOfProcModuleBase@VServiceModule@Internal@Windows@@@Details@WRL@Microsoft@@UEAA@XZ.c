/*
 * XREFs of ??1?$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800C2648
 * Callers:
 *     ??_E?$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800C2D50 (--_E-$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C2FF4 (--_EServiceModule@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::~OutOfProcModuleBase<Windows::Internal::ServiceModule>(
        Microsoft::WRL::Details *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  __int64 v5; // rcx

  *(_QWORD *)a1 = &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::`vftable';
  v5 = *((_QWORD *)a1 + 1);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 8) )
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::~Module<1,Windows::Internal::ServiceModule>(
           a1,
           a2,
           a3,
           a4);
}
