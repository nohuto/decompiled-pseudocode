/*
 * XREFs of sub_140681AD4 @ 0x140681AD4
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_140681AD4(__int64 a1)
{
  char v2; // al
  _QWORD *v3; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3B148, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140D3B148);
  LOBYTE(v3) = sub_1402AFC00((ULONG_PTR)&qword_140D3B148);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
