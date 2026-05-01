/*
 * XREFs of ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x1802E163C
 * Callers:
 *     ?Initialize@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E4E74 (-Initialize@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XW.c)
 *     ?Initialize@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180306034 (-Initialize@-$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJP.c)
 *     ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x18030E5D4 (--0GitPtr@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Z @ 0x1803C5C34 (-Initialize@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::Details::Git::Acquire(Windows::Internal::Details::Git *this)
{
  HRESULT v1; // ebx
  void *v2; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  if ( qword_1807B4BB8 )
  {
    v1 = 0;
    _InterlockedIncrement(&Windows::Internal::Details::_git);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppv);
    v1 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v1 >= 0 )
    {
      v2 = ppv;
      if ( !_InterlockedCompareExchange64(&qword_1807B4BB8, (signed __int64)ppv, 0LL) )
        v2 = 0LL;
      ppv = v2;
      _InterlockedIncrement(&Windows::Internal::Details::_git);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)v1;
}
