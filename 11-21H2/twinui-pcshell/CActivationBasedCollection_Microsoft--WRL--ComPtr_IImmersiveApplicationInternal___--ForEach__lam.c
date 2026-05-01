/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6ee4989f9139f581a42397e10829ce1f___ @ 0x180124AFC
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801236D0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6ee4989f9139f581a42397e10829ce1f___(
        __int64 a1,
        unsigned int *a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 i; // rdi
  __int64 v6; // rsi
  char v7; // r12
  void (__fastcall *v8)(__int64, __int64); // rbx
  __int64 AddressOf; // rax
  struct IUnknown *v10; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 280LL))(v6);
    if ( (v7 & 1) != 0 )
    {
      if ( !*((_QWORD *)a2 + 1)
        || (v10 = 0LL,
            v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 464LL),
            AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v10),
            v8(v6, AddressOf),
            LOBYTE(v8) = (unsigned int)SHIsSameObject(*((struct IUnknown **)a2 + 1), v10) != 0,
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10),
            (_BYTE)v8) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v6 + 264LL))(
               v6,
               a2[1],
               *a2,
               0LL,
               0) )
        {
          if ( (v7 & 4) != 0 )
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 2) + 64LL))(*((_QWORD *)a2 + 2), v6);
        }
      }
    }
  }
}
