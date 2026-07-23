/*
 * XREFs of sub_140700158 @ 0x140700158
 * Callers:
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     sub_1409AFD2C @ 0x1409AFD2C (sub_1409AFD2C.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

char __fastcall sub_140700158(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v4; // rax

  v2 = a1 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1224));
  LOBYTE(v4) = sub_1402AFC00(v2);
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
    {
      v4 = (_QWORD *)(a2 + 152);
      if ( (_QWORD *)*v4 != v4 )
        LOBYTE(v4) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v4;
}
