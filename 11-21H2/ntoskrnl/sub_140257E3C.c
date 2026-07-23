/*
 * XREFs of sub_140257E3C @ 0x140257E3C
 * Callers:
 *     sub_1406E0DD0 @ 0x1406E0DD0 (sub_1406E0DD0.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall sub_140257E3C(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExReleasePushLockEx((ULONG_PTR)&qword_140C15890, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
