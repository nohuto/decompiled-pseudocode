/*
 * XREFs of sub_14022B0E0 @ 0x14022B0E0
 * Callers:
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 *     sub_140739F40 @ 0x140739F40 (sub_140739F40.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_1408525D8 @ 0x1408525D8 (sub_1408525D8.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_14022B0E0(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  v2 = a1 + 192;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = sub_1402AFC00(v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
