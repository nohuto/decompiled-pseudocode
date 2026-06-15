/*
 * XREFs of AudioServerGetAudioStreamHandle @ 0x180120A70
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18004304C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180043210 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@PEAU__POSITION@@@Z @ 0x18011D584 (-GetAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADS.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x18011DFB0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 */

__int64 __fastcall AudioServerGetAudioStreamHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  LPCRITICAL_SECTION v12; // rdi
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  _QWORD *i; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  *a3 = 0LL;
  EnterCriticalSection(&g_csVadList);
  v7 = (_QWORD *)g_VADServerList;
  for ( i = (_QWORD *)g_VADServerList; ; v7 = i )
  {
    if ( !v7 )
    {
      v3 = -2005139332;
      goto LABEL_9;
    }
    v8 = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt(v6, (__int64)v7);
    v10 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 552LL) == a2 )
      break;
LABEL_6:
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v9, &i);
  }
  v13 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(v10 + 600), &v13) < 0 || !v13 )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v13);
    goto LABEL_6;
  }
  *a3 = v10;
  v12 = g_ADGProcess;
  v13 = 0LL;
  EnterCriticalSection(g_ADGProcess);
  if ( ++LODWORD(v12[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v12);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v12);
  }
  LeaveCriticalSection(v12);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v13);
LABEL_9:
  LeaveCriticalSection(&g_csVadList);
  return v3;
}
