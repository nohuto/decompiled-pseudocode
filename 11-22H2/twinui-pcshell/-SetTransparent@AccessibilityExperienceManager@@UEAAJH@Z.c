/*
 * XREFs of ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18053CC00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___ @ 0x18053B990 (CreationThreadDispatcher--RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::SetTransparent(AccessibilityExperienceManager *this, int a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  LONG WindowLongW; // r8d
  unsigned int v8; // eax
  LONG v9; // r8d
  char *v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+60h] [rbp+18h] BYREF

  v4 = -2147467259;
  v13 = 0LL;
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    v4 = v6(v5, &v13);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 24LL))(v13, &hWnd);
      if ( v4 >= 0 )
      {
        WindowLongW = GetWindowLongW(hWnd, -20);
        v8 = WindowLongW & 0xFFF7FFDF;
        v9 = WindowLongW | 0x80020;
        if ( !a2 )
          v9 = v8;
        SetWindowLongW(hWnd, -20, v9);
        v11 = (char *)this - 144;
        v12 = a2;
        CreationThreadDispatcher::RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___(
          *((_QWORD *)this + 18),
          (volatile int *)&v11);
      }
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return (unsigned int)v4;
}
