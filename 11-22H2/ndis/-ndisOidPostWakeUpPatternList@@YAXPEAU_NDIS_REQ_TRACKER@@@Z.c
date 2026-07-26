/*
 * XREFs of ?ndisOidPostWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B438 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostWakeUpPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 4);
  if ( *(_DWORD *)(v1 + 4) && *(_DWORD *)(v1 + 32) == -50265844 )
  {
    *(_DWORD *)(v1 + 32) = -50265851;
    if ( !*((_DWORD *)a1 + 10) )
      ndisXlateWolPatternListToWakeUpPatternList(a1);
  }
}
