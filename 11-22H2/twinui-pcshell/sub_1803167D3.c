/*
 * XREFs of sub_1803167D3 @ 0x1803167D3
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void sub_1803167D3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        ...)
{
  __int64 v12; // [rsp+68h] [rbp+68h] BYREF
  va_list va; // [rsp+68h] [rbp+68h]
  va_list va1; // [rsp+70h] [rbp+70h] BYREF

  va_start(va1, a12);
  va_start(va, a12);
  v12 = va_arg(va1, _QWORD);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va1);
  JUMPOUT(0x1800E73CBLL);
}
