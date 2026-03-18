/*
 * XREFs of ?Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z @ 0x1C03554E8
 * Callers:
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C0356550 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::Create(
        int a1,
        struct IDXGCHANNELSUBSCRIBER *a2,
        struct DXGVMBUSCHANNEL *a3,
        struct DXGCHANNELENDPOINTPROXY **a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx

  v8 = -1073741823;
  v9 = operator new[](0x98uLL, 0x4B677844u, 256LL, (__int64)a4);
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 32) = 1;
    *(_QWORD *)v9 = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGCHANNEL'};
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 8) = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGEXPANDHANDLETABLECALLBACK'};
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_DWORD *)(v9 + 104) = 0;
    *(_DWORD *)(v9 + 108) = 82;
    *(_DWORD *)(v9 + 112) = 64;
    *(_DWORD *)(v9 + 120) = 0x2000;
    *(_QWORD *)(v9 + 128) = 0LL;
    *(_QWORD *)(v9 + 136) = 0LL;
    *(_QWORD *)(v9 + 144) = 0LL;
    *(_QWORD *)(v9 + 24) = v9 + 16;
    *(_QWORD *)(v9 + 16) = v9 + 16;
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 )
  {
    *(_DWORD *)(v10 + 36) = a1;
    v8 = 0;
    *(_QWORD *)(v10 + 136) = a2;
    *(_QWORD *)(v10 + 128) = a3;
    *a4 = (struct DXGCHANNELENDPOINTPROXY *)v10;
  }
  else if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v8;
}
