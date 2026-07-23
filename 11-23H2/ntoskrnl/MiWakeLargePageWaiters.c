/*
 * XREFs of MiWakeLargePageWaiters @ 0x140650554
 * Callers:
 *     MiInsertLargePageChain @ 0x1402D6B70 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140654F4C (MiDeleteAcceleratorDescriptor.c)
 *     MiDeleteHardwareAccelerators @ 0x140655070 (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 */

__int64 __fastcall MiWakeLargePageWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 1), 1u);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
