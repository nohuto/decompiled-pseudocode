/*
 * XREFs of ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x140008118
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140007F70 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14005F840 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAPEAVCPipeInstance@@AEAPEAU__POSITION@@@Z @ 0x140009BE0 (-GetNext@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAAEAP.c)
 */

struct CPipeInstance *__fastcall CAudioDeviceGraph::FindPipeInstance(CAudioDeviceGraph *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v8 = *((_QWORD *)this + 21);
  if ( v8 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::GetNext(v5, &v8);
      if ( v6 == a2 )
        break;
      if ( !v8 )
        goto LABEL_6;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    return (struct CPipeInstance *)v6;
  }
  else
  {
LABEL_6:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
