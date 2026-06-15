/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x14002D440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::OnDisconnectedFromRightSubmix(
        CCrossProcessBaseServerEndpoint *this,
        __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 42) + 164LL), 0xFFFFFFFD);
  _InterlockedExchange((volatile __int32 *)this - 62, 1);
  (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *, __int64))(*(_QWORD *)this + 32LL))(this, -a2);
  return 0LL;
}
