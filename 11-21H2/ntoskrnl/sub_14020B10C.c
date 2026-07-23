/*
 * XREFs of sub_14020B10C @ 0x14020B10C
 * Callers:
 *     PsReleaseSiloHardReference @ 0x14020B0E0 (PsReleaseSiloHardReference.c)
 *     sub_140683DF0 @ 0x140683DF0 (sub_140683DF0.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406D77F0 @ 0x1406D77F0 (sub_1406D77F0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14020B10C(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  if ( !a1 )
    __int2c();
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000000) == 0 )
    __int2c();
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    *(_QWORD *)(a1 + 1720) = 0LL;
    *(_QWORD *)(a1 + 1736) = sub_1407F6F10;
    *(_QWORD *)(a1 + 1744) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1720), DelayedWorkQueue);
  }
}
