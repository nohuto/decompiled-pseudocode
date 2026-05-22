/*
 * XREFs of _lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_ @ 0x18013EBC4
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x180030CC0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024144 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(
        _QWORD **a1,
        __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)a2 != **a1 )
    return 0;
  v3 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a2 + 8),
              &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v3);
  return 1;
}
