/*
 * XREFs of sub_140682CF0 @ 0x140682CF0
 * Callers:
 *     sub_1406789B0 @ 0x1406789B0 (sub_1406789B0.c)
 *     sub_140682C34 @ 0x140682C34 (sub_140682C34.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_140682CF0(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3B1F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D3B1F0);
  LOBYTE(v2) = sub_1402AFC00((ULONG_PTR)&qword_140D3B1F0);
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
    {
      v2 = (_QWORD *)(a1 + 152);
      if ( (_QWORD *)*v2 != v2 )
        LOBYTE(v2) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v2;
}
