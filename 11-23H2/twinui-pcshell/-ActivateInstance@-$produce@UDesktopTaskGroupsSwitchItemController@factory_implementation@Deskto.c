/*
 * XREFs of ?ActivateInstance@?$produce@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180195280
 * Callers:
 *     <none>
 * Callees:
 *     ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800DDFA8 (--0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::ActivateInstance(
        _OWORD *a1,
        _QWORD *a2)
{
  _OWORD *v3; // rbx
  __int64 result; // rax
  _OWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  *a2 = 0LL;
  try
  {
    v3 = operator new(0x38uLL);
    v5 = v3;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::DesktopTaskGroupsSwitchItemController((winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *)v3);
    *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
    *a2 = v3 + 1;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
