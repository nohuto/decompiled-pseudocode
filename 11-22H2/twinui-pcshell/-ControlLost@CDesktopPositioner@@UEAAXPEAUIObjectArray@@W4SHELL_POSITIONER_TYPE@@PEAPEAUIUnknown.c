/*
 * XREFs of ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1805B3180
 * Callers:
 *     <none>
 * Callees:
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180074DE8 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // ebp
  CDesktopPositioner *v8; // rsi
  void (__fastcall *v9)(__int64, _QWORD, GUID *, struct IApplicationView **); // rbx
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationView *v11; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v10);
  v7 = 0;
  if ( v10 )
  {
    v8 = (CDesktopPositioner *)(a1 - 144);
    do
    {
      v11 = 0LL;
      v9 = *(void (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)a2 + 32LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
      v9(a2, v7, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v11);
      CDesktopPositioner::_PersistPosition(v8, v11);
      result = Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
      ++v7;
    }
    while ( v7 < v10 );
  }
  return result;
}
