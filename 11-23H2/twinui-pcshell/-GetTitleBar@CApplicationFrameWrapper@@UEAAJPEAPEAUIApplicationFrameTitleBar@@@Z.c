/*
 * XREFs of ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18005C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetTitleBar(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameTitleBar **a2)
{
  struct IApplicationFrameTitleBar **v2; // rbx

  v2 = (struct IApplicationFrameTitleBar **)((char *)this + 120);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 15);
  *a2 = *v2;
  return 0LL;
}
