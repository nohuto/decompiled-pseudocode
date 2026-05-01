/*
 * XREFs of ?EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1806254AC
 * Callers:
 *     ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180625404 (-EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Win32ProcessInfo::EnumerateAppViews(
        Win32ProcessInfo *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  _QWORD *v2; // r8
  __int64 *j; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx

  v2 = (_QWORD *)((char *)this + 24);
  if ( *((_QWORD *)this + 6) >= 8uLL )
    v2 = (_QWORD *)*v2;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD, _QWORD *, const WCHAR *))(*(_QWORD *)a2 + 32LL))(
    a2,
    *((unsigned int *)this + 4),
    v2,
    &LocaleName);
  j = **(__int64 ***)this;
  while ( !*((_BYTE *)j + 25) )
  {
    (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, __int64))(*(_QWORD *)a2 + 40LL))(
      a2,
      j[4]);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
}
