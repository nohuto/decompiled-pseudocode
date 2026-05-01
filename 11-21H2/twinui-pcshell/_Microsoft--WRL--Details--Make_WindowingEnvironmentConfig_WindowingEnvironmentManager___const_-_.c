/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager___const_&_Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel___enum_WindowingEnvironmentType_&__::_1_::dtor$0 @ 0x18021F23A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAA@XZ @ 0x18041B450 (--1-$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_WindowingEnvironmentConfig_WindowingEnvironmentManager___const___Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel___enum_WindowingEnvironmentType____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<WindowingEnvironmentConfig>::~ComPtr<WindowingEnvironmentConfig>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
