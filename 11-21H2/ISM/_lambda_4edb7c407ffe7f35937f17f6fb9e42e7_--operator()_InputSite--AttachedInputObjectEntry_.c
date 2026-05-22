/*
 * XREFs of _lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_ @ 0x180123BB0
 * Callers:
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180123F74 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180123C1C (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(
        _QWORD **a1,
        _QWORD *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a2 != **a1 )
    return 0;
  v3 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(a2 + 1, &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v3);
  return 1;
}
