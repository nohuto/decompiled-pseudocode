/*
 * XREFs of ?Pause@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1806E87D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1806E8828 (-Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::Pause(
        __int64 a1)
{
  SharedDesktopBackgroundVisualHost *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (SharedDesktopBackgroundVisualHost *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    SharedDesktopBackgroundVisualHost::Pause(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
