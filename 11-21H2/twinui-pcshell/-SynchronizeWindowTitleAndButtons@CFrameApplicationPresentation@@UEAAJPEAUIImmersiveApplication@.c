/*
 * XREFs of ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180137E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_150041feadb12d29b74b347f051d22fe___ @ 0x180137E80 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_150041feadb12d29b74b347f051d22fe___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(
        CFrameApplicationPresentation *this,
        struct IImmersiveApplication *a2)
{
  struct IImmersiveApplication *v3; // rbx
  CFrameApplicationPresentation *v5; // [rsp+20h] [rbp-18h] BYREF
  struct IImmersiveApplication *v6; // [rsp+28h] [rbp-10h] BYREF
  struct IImmersiveApplication *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  v3 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v5 = this;
  v6 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  LODWORD(v3) = CFrameApplicationPresentation::_AddTaskToQueue__lambda_150041feadb12d29b74b347f051d22fe___(this, &v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
