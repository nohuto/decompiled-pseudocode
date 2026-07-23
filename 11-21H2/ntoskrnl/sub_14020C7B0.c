/*
 * XREFs of sub_14020C7B0 @ 0x14020C7B0
 * Callers:
 *     sub_14068F5DC @ 0x14068F5DC (sub_14068F5DC.c)
 *     sub_14068F700 @ 0x14068F700 (sub_14068F700.c)
 *     sub_1409B49A0 @ 0x1409B49A0 (sub_1409B49A0.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall sub_14020C7B0(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3CAC8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140D3CAC8);
  result = (_QWORD *)sub_1402AFC00((ULONG_PTR)&qword_140D3CAC8);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v4, v3, v5);
  }
  return result;
}
