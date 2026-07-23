/*
 * XREFs of sub_14068A79C @ 0x14068A79C
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_14068A6EC @ 0x14068A6EC (sub_14068A6EC.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

char __fastcall sub_14068A79C(__int64 a1)
{
  _QWORD *v2; // rax

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3B148, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140D3B148);
  LOBYTE(v2) = sub_1402AFC00((ULONG_PTR)&qword_140D3B148);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
