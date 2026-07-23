/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x1402F6A40
 * Callers:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_14035FDEC @ 0x14035FDEC (sub_14035FDEC.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_1409B18CC @ 0x1409B18CC (sub_1409B18CC.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  ULONG_PTR v2; // rax
  ULONG_PTR v3; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 2 * Count + v2, v2);
    if ( v3 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}
