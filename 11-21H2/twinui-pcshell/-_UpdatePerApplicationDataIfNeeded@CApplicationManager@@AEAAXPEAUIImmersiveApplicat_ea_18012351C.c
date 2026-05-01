/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x18012351C
 * Callers:
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1801230DC (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E85AC (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1801374B8 (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        struct IUnknown *a3)
{
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+28h] [rbp-8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  v10 = -1LL;
  v11 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  if ( v6(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v11) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v10) >= 0
    && (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
              a1 + 1000,
              (__int64)&v10,
              &v9) >= 0 )
  {
    v8 = v9;
    if ( (unsigned int)SHIsSameObject(a3, *(struct IUnknown **)(v9 + 16)) )
    {
      *(_QWORD *)(v8 + 24) = 0LL;
      Microsoft::WRL::ComPtr<ITaskWindow>::operator=(v8 + 16, 0LL);
      *(_BYTE *)(v8 + 32) = 0;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
}
