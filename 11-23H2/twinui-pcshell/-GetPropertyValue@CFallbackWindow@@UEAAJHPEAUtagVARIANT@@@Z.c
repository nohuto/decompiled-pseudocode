/*
 * XREFs of ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803A6AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1803A6DBC (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackWindow::GetPropertyValue(CFallbackWindow *this, int a2, struct tagVARIANT *a3)
{
  SHORT v6; // ax
  BSTR v7; // rax
  __int64 *AddressOf; // rax
  int VisibleApp; // eax
  BSTR v10; // rax
  __int64 v12[2]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  VariantInit(a3);
  if ( a2 == 30003 )
  {
    a3->vt = 3;
    a3->lVal = 50000;
    return 0LL;
  }
  if ( a2 == 30010 )
  {
    a3->vt = 11;
    v6 = -(*((_DWORD *)this + 7) != 1);
LABEL_15:
    a3->iVal = v6;
    return 0LL;
  }
  if ( ((a2 - 30009) & 0xFFFFFFF7) == 0 )
  {
    a3->vt = 11;
    v6 = -1;
    goto LABEL_15;
  }
  if ( a2 == 30011 )
  {
    v7 = SysAllocString(L"ImmersiveBackground");
    if ( v7 )
    {
      a3->vt = 8;
      a3->llVal = (LONGLONG)v7;
    }
  }
  else if ( a2 == 30005 )
  {
    v12[0] = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(v12);
    VisibleApp = CFallbackWindow::_GetVisibleApp(
                   (CFallbackWindow *)((char *)this - 88),
                   (struct IImmersiveApplication **)AddressOf);
    if ( LoadStringW(&_ImageBase, (VisibleApp >= 0) + 9102, Buffer, 260) )
    {
      v10 = SysAllocString(Buffer);
      if ( v10 )
      {
        a3->vt = 8;
        a3->llVal = (LONGLONG)v10;
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
  }
  return 0LL;
}
