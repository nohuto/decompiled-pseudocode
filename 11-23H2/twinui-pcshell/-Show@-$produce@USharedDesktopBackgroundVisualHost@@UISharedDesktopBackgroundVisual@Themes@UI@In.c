/*
 * XREFs of ?Show@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAH_N@Z @ 0x1806E8C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1806E8CD8 (-Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::Show(
        __int64 a1,
        bool a2)
{
  SharedDesktopBackgroundVisualHost *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (SharedDesktopBackgroundVisualHost *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    SharedDesktopBackgroundVisualHost::Show(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
