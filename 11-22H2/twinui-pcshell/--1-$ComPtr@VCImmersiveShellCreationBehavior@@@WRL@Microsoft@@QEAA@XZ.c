/*
 * XREFs of ??1?$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ @ 0x180489FB0
 * Callers:
 *     _CImmersiveShellBuilder::CreateImmersiveShellController_::_1_::dtor$15 @ 0x1802C5413 (_CImmersiveShellBuilder--CreateImmersiveShellController_--_1_--dtor$15.c)
 *     _Microsoft::WRL::Details::Make_CImmersiveShellCreationBehavior__::_1_::dtor$0 @ 0x1802C547F (_Microsoft--WRL--Details--Make_CImmersiveShellCreationBehavior__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApp.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CImmersiveShellCreationBehavior>::~ComPtr<CImmersiveShellCreationBehavior>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IApplicationFrameFactory>::Release(
             result,
             a2);
  }
  return result;
}
