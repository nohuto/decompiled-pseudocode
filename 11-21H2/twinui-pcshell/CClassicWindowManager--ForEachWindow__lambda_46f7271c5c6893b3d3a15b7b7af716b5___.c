/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___ @ 0x1801050D4
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180103B30 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x180104DE8 (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___(
        __int64 a1,
        __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rbp
  unsigned __int64 i; // rsi
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  char v10; // al
  __int64 *v12; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = **(_QWORD **)(a2 + 8);
    v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
    v13 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    while ( v9 && v7 != v9 )
    {
      if ( v9 == v8 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
        v10 = 1;
        goto LABEL_11;
      }
      v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9);
      Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v13, v12);
      v9 = v13;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = 0;
LABEL_11:
    v4 = v10 ? lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(**(struct IUnknown ******)(a2 + 16), &v14) : 1;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
