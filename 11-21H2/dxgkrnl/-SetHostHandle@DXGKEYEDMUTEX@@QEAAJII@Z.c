/*
 * XREFs of ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1C03410D8
 * Callers:
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C037A664 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::SetHostHandle(DXGKEYEDMUTEX *this, int a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v7 = operator new[](0x18uLL, 0x4B677844u, 256LL, a4);
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 16) = a2;
    *(_DWORD *)(v7 + 20) = a3;
    DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
    v9 = (_QWORD *)((char *)this + 40);
    v10 = *((_QWORD *)this + 5);
    if ( *(DXGKEYEDMUTEX **)(v10 + 8) != (DXGKEYEDMUTEX *)((char *)this + 40) )
      __fastfail(3u);
    *v8 = v10;
    v8[1] = v9;
    *(_QWORD *)(v10 + 8) = v8;
    *v9 = v8;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, 5834LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXG_HOST_HANDLE_MAP",
      5834LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
