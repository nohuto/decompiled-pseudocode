/*
 * XREFs of ?Initialize@SnapServiceProvider@@UEAAJAEBUSnapServiceProviderInitParams@@@Z @ 0x1800FE060
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x1800FE0AC (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x1800FE170 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 */

__int64 __fastcall SnapServiceProvider::Initialize(
        SnapServiceProvider *this,
        const struct SnapServiceProviderInitParams *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 24, *(_QWORD *)a2);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 32, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((char *)this + 40, *((_QWORD *)a2 + 2));
  return 0LL;
}
