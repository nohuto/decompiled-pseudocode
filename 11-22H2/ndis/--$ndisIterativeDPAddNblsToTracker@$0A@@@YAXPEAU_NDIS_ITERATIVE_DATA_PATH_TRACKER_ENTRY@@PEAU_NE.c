/*
 * XREFs of ??$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036C70
 * Callers:
 *     ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0036AD4 (--$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0065880 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIterativeDPAddNblsToTracker<0>(_QWORD *a1, __int64 a2, int a3, int a4)
{
  _QWORD *v4; // rax
  _QWORD *i; // rcx

  if ( !*a1 )
  {
    *a1 = a2;
LABEL_11:
    a1[1] = a2;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_DWORD *)(a2 + 132) = a3;
    *(_DWORD *)(a2 + 140) = a4;
    return;
  }
  v4 = (_QWORD *)a1[1];
  if ( a4 != *((_DWORD *)v4 + 35) || a3 != *((_DWORD *)v4 + 33) || (a3 & 0x34) != 0 )
  {
    v4[14] = a2;
    goto LABEL_11;
  }
  for ( i = (_QWORD *)*v4; i; i = (_QWORD *)*i )
    v4 = i;
  *v4 = a2;
}
