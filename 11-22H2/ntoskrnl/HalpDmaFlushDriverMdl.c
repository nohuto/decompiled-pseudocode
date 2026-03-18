/*
 * XREFs of HalpDmaFlushDriverMdl @ 0x1404FFC44
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1405144A0 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140514730 (HalMapTransferEx.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x140346DC0 (KeFlushIoBuffers.c)
 */

char __fastcall HalpDmaFlushDriverMdl(_QWORD *BugCheckParameter4, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  char result; // al

  if ( BugCheckParameter4 )
  {
    v5 = BugCheckParameter4;
    do
    {
      result = KeFlushIoBuffers((ULONG_PTR)v5, a2, 1, a4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  return result;
}
