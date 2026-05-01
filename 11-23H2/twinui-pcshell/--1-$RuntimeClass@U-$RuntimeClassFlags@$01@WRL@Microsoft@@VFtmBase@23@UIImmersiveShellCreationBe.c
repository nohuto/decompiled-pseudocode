/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationBehavior@@@WRL@Microsoft@@UEAA@XZ @ 0x180489FF8
 * Callers:
 *     _CImmersiveShellCreationBehavior::CImmersiveShellCreationBehavior_::_1_::dtor$0 @ 0x1802C54CF (_CImmersiveShellCreationBehavior--CImmersiveShellCreationBehavior_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 24));
}
