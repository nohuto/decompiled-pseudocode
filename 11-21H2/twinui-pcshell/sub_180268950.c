/*
 * XREFs of sub_180268950 @ 0x180268950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void sub_180268950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  HSTRING string; // [rsp+20h] [rbp+20h]
  __int64 v6; // [rsp+30h] [rbp+30h] BYREF
  va_list va; // [rsp+30h] [rbp+30h]
  __int64 v8; // [rsp+38h] [rbp+38h] BYREF
  va_list va1; // [rsp+38h] [rbp+38h]
  va_list va2; // [rsp+40h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  WindowsDeleteString(string);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)va);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)va2);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)va1);
  JUMPOUT(0x1800948CBLL);
}
