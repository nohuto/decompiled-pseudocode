/*
 * XREFs of ??1?$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180159E5C
 * Callers:
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$1 @ 0x18007D4C2 (_AtmosCheck--AtmosCheck_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::ApplicationModel::IPackageCatalog>::~ComPtr<Windows::ApplicationModel::IPackageCatalog>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease(a1);
}
