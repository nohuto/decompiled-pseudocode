/*
 * XREFs of sub_140B34730 @ 0x140B34730
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x1405A4458 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_140B34730(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2456)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2456) = a2;
  }
  return 0LL;
}
