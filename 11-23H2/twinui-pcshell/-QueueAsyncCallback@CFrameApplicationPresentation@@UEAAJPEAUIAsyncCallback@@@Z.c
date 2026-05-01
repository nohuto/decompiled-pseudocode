/*
 * XREFs of ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180039080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3c3f7fc14656b421e82e3329d2a90f9b___ @ 0x1800390DC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3c3f7fc14656b421e82e3329d2a90f9b___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::QueueAsyncCallback(
        CFrameApplicationPresentation *this,
        struct IAsyncCallback *a2)
{
  struct IAsyncCallback *v3; // rbx
  struct IAsyncCallback *v5; // [rsp+38h] [rbp+10h] BYREF
  struct IAsyncCallback *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a2;
  v3 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v5 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  LODWORD(v3) = CFrameApplicationPresentation::_AddTaskToQueue__lambda_3c3f7fc14656b421e82e3329d2a90f9b___(this, &v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return (unsigned int)v3;
}
