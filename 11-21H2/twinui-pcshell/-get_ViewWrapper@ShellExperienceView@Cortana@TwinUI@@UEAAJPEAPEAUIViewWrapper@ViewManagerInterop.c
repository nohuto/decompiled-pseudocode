/*
 * XREFs of ?get_ViewWrapper@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18022CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_ViewWrapper(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v2; // rbx

  v2 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)((char *)this + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 9);
  *a2 = *v2;
  return 0LL;
}
