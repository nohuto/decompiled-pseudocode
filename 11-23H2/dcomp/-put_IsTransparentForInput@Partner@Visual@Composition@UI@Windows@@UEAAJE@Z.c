/*
 * XREFs of ?put_IsTransparentForInput@Partner@Visual@Composition@UI@Windows@@UEAAJE@Z @ 0x180076130
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::put_IsTransparentForInput(
        Windows::UI::Composition::Visual::Partner *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // r14d
  DirectComposition::CDevice *v6; // rsi
  _DWORD *v7; // rcx
  void (__fastcall ***v8)(_QWORD); // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 200) & 2) != 0 )
  {
    v5 = *((_DWORD *)this - 26);
    if ( v5 )
    {
      v6 = *(DirectComposition::CDevice **)(*((_QWORD *)this - 26) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v6, 0x18u, &v10, 0);
      v7 = v10;
      *(_DWORD *)v10 = 8;
      v7[1] = v5;
      v7[2] = 36;
      *((_QWORD *)v7 + 2) = a2 != 0;
      v8 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v6 + 10);
      if ( v8 )
        (**v8)(v8);
    }
    *((_DWORD *)this + 7) = *((_DWORD *)this + 7) & 0xFFFFBFFF | (a2 != 0 ? 0x4000 : 0);
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return 0LL;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return 2147483667LL;
  }
}
