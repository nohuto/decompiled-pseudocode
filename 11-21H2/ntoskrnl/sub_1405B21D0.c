/*
 * XREFs of sub_1405B21D0 @ 0x1405B21D0
 * Callers:
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

char __fastcall sub_1405B21D0(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  _QWORD *v4; // rax

  v3 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 1224));
  LOBYTE(v4) = sub_1402AFC00(v3);
  *(_BYTE *)(a1 + 1384) &= ~2u;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
