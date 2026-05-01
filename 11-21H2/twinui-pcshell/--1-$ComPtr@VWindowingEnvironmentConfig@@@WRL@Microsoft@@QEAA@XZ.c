/*
 * XREFs of ??1?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAA@XZ @ 0x18041B450
 * Callers:
 *     _wil::MakeOrThrow_WindowingEnvironmentConfig_WindowingEnvironmentManager___const_&_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel___enum_WindowingEnvironmentType_&__::_1_::dtor$0 @ 0x18021F20D (_wil--MakeOrThrow_WindowingEnvironmentConfig_WindowingEnvironmentManager___const_-_Windows--Inte.c)
 *     _Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager___const_&_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel___enum_WindowingEnvironmentType_&__::_1_::dtor$0 @ 0x18021F23A (_Microsoft--WRL--Details--Make_WindowingEnvironmentConfig_WindowingEnvironmentManager___const_-_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012AC70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShe.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<WindowingEnvironmentConfig>::~ComPtr<WindowingEnvironmentConfig>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release(result);
  }
  return result;
}
