/*
 * XREFs of ?CreateSurfaceFromHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z @ 0x1800F0B10
 * Callers:
 *     ?CreateSurfaceFromHwnd@CDevice@DirectComposition@@WBA@EAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z @ 0x1800A89B0 (-CreateSurfaceFromHwnd@CDevice@DirectComposition@@WBA@EAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceFromHwnd(
        DirectComposition::CDevice *this,
        HWND a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  struct IUnknown *v7; // rdx
  unsigned int v8; // ecx
  void *v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF
  HANDLE hObject; // [rsp+78h] [rbp+20h] BYREF

  v6 = -2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    hObject = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    if ( (unsigned int)GetDCompositionHwndBitmap(a2, &hObject) )
    {
      v6 = DirectComposition::CDevice::OpenSharedProxy(this, hObject, 47, 0, &v10, &v11);
      if ( v6 >= 0 )
      {
        v7 = (struct IUnknown *)v10;
        v8 = v11;
        *((_DWORD *)v10 + 2) = 1;
        HIDWORD(v7[1].lpVtbl) = v8;
        v7->lpVtbl = (struct IUnknownVtbl *)&DirectComposition::CHwndBitmapProxy::`vftable';
        *a3 = v7;
      }
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  return (unsigned int)v6;
}
