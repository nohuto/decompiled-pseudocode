/*
 * XREFs of ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007BC60
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180015844 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180026E30 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampActSetPendState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  char *v4; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx

  v2 = a2;
  v4 = *(char **)(a1 + 528);
  if ( (_BYTE)v2 == 6 )
  {
    if ( v4 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      *(_QWORD *)(a1 + 528) = 0LL;
    }
  }
  else if ( (_BYTE)v2 )
  {
    RtlQueryPerformanceCounter(&v4[8 * (v2 - 1) + 8]);
  }
  v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 563) = v2;
  HampHostUpdateActivityState(v5);
}
