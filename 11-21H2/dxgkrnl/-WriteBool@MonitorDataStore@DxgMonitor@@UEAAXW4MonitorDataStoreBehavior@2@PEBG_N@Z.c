/*
 * XREFs of ?WriteBool@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1C021C120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x1C021B234 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 */

void __fastcall DxgMonitor::MonitorDataStore::WriteBool(__int64 a1, char a2, const WCHAR *a3, unsigned __int8 a4)
{
  __int64 *v4; // rcx
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 4) != 0 )
  {
    v4 = *(__int64 **)(a1 + 16);
    v6 = a4;
    v7 = *v4;
    v9[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, void **))(v7 + 8))(v4, 0LL, v9) >= 0 )
      DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v8, v9[0], a3, v6);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v9);
  }
}
