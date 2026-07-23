/*
 * XREFs of sub_140687540 @ 0x140687540
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406D77F0 @ 0x1406D77F0 (sub_1406D77F0.c)
 *     sub_1406FECE0 @ 0x1406FECE0 (sub_1406FECE0.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_140687540(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rdi
  _QWORD *v5; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 1224;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1224);
    LOBYTE(v5) = sub_1402AFC00(v4);
  }
  if ( a3 )
  {
    if ( (*(_WORD *)(a3 + 486))++ == 0xFFFF )
    {
      v5 = (_QWORD *)(a3 + 152);
      if ( (_QWORD *)*v5 != v5 )
        LOBYTE(v5) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v5;
}
