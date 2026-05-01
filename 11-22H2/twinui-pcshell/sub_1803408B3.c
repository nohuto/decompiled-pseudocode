/*
 * XREFs of sub_1803408B3 @ 0x1803408B3
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void sub_1803408B3(
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
        int a13,
        ...)
{
  __int64 v13; // [rsp+70h] [rbp+70h] BYREF
  va_list va; // [rsp+70h] [rbp+70h]
  va_list va1; // [rsp+78h] [rbp+78h] BYREF

  va_start(va1, a13);
  va_start(va, a13);
  v13 = va_arg(va1, _QWORD);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va1);
  JUMPOUT(0x180063C85LL);
}
