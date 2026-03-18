/*
 * XREFs of ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1C03B5458
 * Callers:
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03B013C (MonitorDisableMonitorVirtualModeSupport.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x1C021B234 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 */

void __fastcall DXGMONITOR::_DisableVirtualModeSupport(
        DXGMONITOR *this,
        unsigned __int8 a2,
        struct DxgMonitor::IMonitorDeferredEventSource *a3)
{
  int v4; // esi
  char v5; // cl
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = *((_BYTE *)this + 176);
  if ( (v5 & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *((_BYTE *)this + 176);
  }
  v7 = *((_QWORD *)this + 26);
  *((_BYTE *)this + 176) = ((_BYTE)v4 << 7) | v5 & 0x7F;
  v8 = *(__int64 **)(v7 + 16);
  v9 = *v8;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, void **))(v9 + 8))(v8, 0LL, &v11) >= 0 )
    DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v10, v11, L"VMSDisabled", v4);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11);
  (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a3)(
    a3,
    *((unsigned int *)this + 45),
    11LL);
}
