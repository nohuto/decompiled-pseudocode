/*
 * XREFs of ?SetFrameInteractionHandler@CMultitaskingViewFrame@@UEAAJPEAUIFrameInteractionEvents@@@Z @ 0x1804B2370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetFrameInteractionHandler(
        CMultitaskingViewFrame *this,
        struct IFrameInteractionEvents *a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rax
  struct IFrameInteractionEvents *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)((char *)this + 2456);
  if ( a2 )
  {
    v7 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    v8[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    v5 = *v2;
    v7 = 0LL;
    v9 = v5;
    *v2 = (__int64)a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(v2 + 1, v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 307);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 1);
  }
  return 0LL;
}
