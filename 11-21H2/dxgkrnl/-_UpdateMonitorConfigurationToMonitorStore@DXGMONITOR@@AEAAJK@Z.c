/*
 * XREFs of ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C03B9B54
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C020CB18 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 *     ?_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1C03B5528 (-_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1C01DC750 (-OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(PCWSTR *this, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  NTSTATUS v5; // eax
  int ValueData; // [rsp+40h] [rbp+8h] BYREF
  PCWSTR Path; // [rsp+50h] [rbp+18h] BYREF

  Path = 0LL;
  v2 = a2;
  v4 = DXGMONITOR::OpenMonitorDataStore((DXGMONITOR *)(this + 1), 0, (void **)&Path);
  if ( v4 >= 0 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v2, *((unsigned int *)this + 45));
    ValueData = *(_DWORD *)((char *)this + SHIDWORD(this[4 * (unsigned int)v2 + 101]));
    v5 = RtlWriteRegistryValue(0x40000000u, Path, this[4 * v2 + 100], 4u, &ValueData, 4u);
    v4 = v5;
    if ( v5 < 0 )
      WdLogSingleEntry3(2LL, (unsigned int)v2, *((unsigned int *)this + 45), v5);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Path);
  return (unsigned int)v4;
}
