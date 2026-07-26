/*
 * XREFs of ??$ndisIterativeDPAddNblsToTracker@$02@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00130CC
 * Callers:
 *     ??$ndisInvokeIterativeDatapath@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C0012F38 (--$ndisInvokeIterativeDatapath@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisIterativeDPAddNblsToTracker<3>(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // rcx

  result = a1 + 1;
  if ( !*a1 )
  {
    *a1 = a2;
LABEL_3:
    *result = a2;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_DWORD *)(a2 + 132) = a3;
    return result;
  }
  v4 = (_QWORD *)*result;
  if ( a3 != *(_DWORD *)(*result + 132LL) || (a3 & 6) != 0 )
  {
    v4[14] = a2;
    goto LABEL_3;
  }
  for ( result = (_QWORD *)*v4; result; result = (_QWORD *)*result )
    v4 = result;
  *v4 = a2;
  return result;
}
