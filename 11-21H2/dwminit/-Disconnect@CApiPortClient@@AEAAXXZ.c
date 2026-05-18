/*
 * XREFs of ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180007AF8
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x180007A3C (--1CApiPortClient@@QEAA@XZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180007B44 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x180007E00 (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E180 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CApiPortClient::Disconnect(CApiPortClient *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 56), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 3) = 0LL;
  }
}
