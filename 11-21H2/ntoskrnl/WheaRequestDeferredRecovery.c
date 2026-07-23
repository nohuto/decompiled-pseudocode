/*
 * XREFs of WheaRequestDeferredRecovery @ 0x140645B10
 * Callers:
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 *     sub_14051C4E0 @ 0x14051C4E0 (sub_14051C4E0.c)
 * Callees:
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x14050A7A0 (HalRequestDeferredRecoveryServiceInterrupt.c)
 */

char __fastcall WheaRequestDeferredRecovery(signed __int64 a1, __int64 a2)
{
  signed __int64 v2; // rax

  if ( !byte_140CE1AD1 || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
    return 0;
  *(_QWORD *)(a1 + 32) = a2;
  while ( 1 )
  {
    v2 = qword_140D04C88;
    *(_QWORD *)a1 = qword_140D04C88;
    if ( v2 == _InterlockedCompareExchange64(&qword_140D04C88, a1, v2) )
      break;
    _mm_pause();
  }
  if ( _InterlockedIncrement(&dword_140D04C70) == 1 )
  {
    _InterlockedExchange(&dword_140D04C74, 1);
    HalRequestDeferredRecoveryServiceInterrupt();
  }
  return 1;
}
