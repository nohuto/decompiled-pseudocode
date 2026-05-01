/*
 * XREFs of sub_180340831 @ 0x180340831
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void sub_180340831(
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
        int a14,
        int a15,
        ...)
{
  __int64 v15; // [rsp+80h] [rbp+80h] BYREF
  va_list va; // [rsp+80h] [rbp+80h]
  va_list va1; // [rsp+88h] [rbp+88h] BYREF

  va_start(va1, a15);
  va_start(va, a15);
  v15 = va_arg(va1, _QWORD);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va);
  JUMPOUT(0x180063B79LL);
}
