/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x1405FEA78
 * Callers:
 *     EtwTraceObjectOperation @ 0x1405FD584 (EtwTraceObjectOperation.c)
 *     EtwTraceDuplicateHandle @ 0x1409E534C (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1409E5E68 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1409E6E1C (EtwpTraceHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpTraceKernelEventWithFilter(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  bool i; // zf

  v8 = a3 & *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&a3, v8); !i; i = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    EtwpLogKernelEvent(a1, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4232), a2, a4, a5);
  }
}
