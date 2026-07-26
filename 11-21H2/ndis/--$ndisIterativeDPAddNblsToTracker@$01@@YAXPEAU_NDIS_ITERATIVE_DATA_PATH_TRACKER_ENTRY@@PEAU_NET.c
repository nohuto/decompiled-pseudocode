/*
 * XREFs of ??$ndisIterativeDPAddNblsToTracker@$01@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0034C30
 * Callers:
 *     ??$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034A28 (--$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00607B0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ??$ndisIterativeDPGetNumNbls@$01@@YAKPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0034D2C (--$ndisIterativeDPGetNumNbls@$01@@YAKPEAU_NET_BUFFER_LIST@@@Z.c)
 */

unsigned __int64 __fastcall ndisIterativeDPAddNblsToTracker<2>(
        _QWORD *a1,
        __int64 *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // rcx

  result = (unsigned __int64)a1;
  if ( !*a1 )
  {
    *a1 = a2;
    goto LABEL_12;
  }
  v6 = a1[1];
  if ( a4 != *(_DWORD *)(v6 + 140) || a3 != *(_DWORD *)(v6 + 132) || (a3 & 0xCB00) != 0 )
  {
    *(_QWORD *)(v6 + 112) = a2;
LABEL_12:
    *(_QWORD *)(result + 8) = a2;
    a2[14] = 0LL;
    v12 = *a2;
    *((_DWORD *)a2 + 33) = a3;
    *((_DWORD *)a2 + 35) = a4;
    if ( v12 )
    {
      result = a5;
      *(_QWORD *)(v12 + 112) = a5;
    }
    return result;
  }
  v7 = ndisIterativeDPGetNumNbls<2>();
  v10 = v9;
  v11 = v7 + a5;
  for ( result = *v9; result; result = *(_QWORD *)result )
    v10 = (_QWORD *)result;
  *v10 = v8;
  if ( *v9 )
  {
    result = v11;
    *(_QWORD *)(*v9 + 112LL) = v11;
  }
  return result;
}
