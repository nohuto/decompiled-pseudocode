/*
 * XREFs of ??1?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@QEAA@XZ @ 0x1803AFBB8
 * Callers:
 *     _wil::MakeOrThrow_CoCreateInstanceImmersiveShellComponentCreator__::_1_::dtor$0 @ 0x180221BDB (_wil--MakeOrThrow_CoCreateInstanceImmersiveShellComponentCreator__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18030BB50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18030BB50.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CoCreateInstanceImmersiveShellComponentCreator>::~ComPtr<CoCreateInstanceImmersiveShellComponentCreator>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
             result,
             a2);
  }
  return result;
}
