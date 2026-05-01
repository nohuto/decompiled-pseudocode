/*
 * XREFs of ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x1805687C4
 * Callers:
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180568CD4 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1800AF200 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x180568308 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180568B44 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

void __fastcall Win32AppInfo::TerminateApp(Win32AppInfo *this, char a2)
{
  __int64 *j; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // r9
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  j = (__int64 *)**((_QWORD **)this + 4);
  while ( !*((_BYTE *)j + 25) )
  {
    if ( Win32ProcessInfo::IsProcessActive((__int64 ***)j[5]) )
    {
      v7 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                       v5,
                       _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
      if ( *v7 > 5u )
      {
        v12 = (__int64)L"Found app process to terminate";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (int)v7,
          (int)&dword_1806C73B1,
          0,
          v8,
          (const WCHAR **)&v12);
      }
      LOBYTE(v6) = a2;
      Win32ProcessInfo::TerminateApp(j[5], v6, this);
    }
    v9 = (__int64 **)j[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v11 = *v9;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
        j = v11;
    }
  }
}
