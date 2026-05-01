/*
 * XREFs of ?EnumerateAppViews@UwpAppPackageInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180622F94
 * Callers:
 *     ?EnumerateAppStateData@UwpAppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180622F00 (-EnumerateAppStateData@UwpAppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpAppPackageInfo::EnumerateAppViews(
        __int64 ***this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  __int64 v3; // rax
  UwpAppPackageInfo *v5; // rdx
  __int64 *j; // rbx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx

  v3 = *(_QWORD *)a2;
  v5 = (UwpAppPackageInfo *)this;
  if ( (unsigned __int64)this[3] >= 8 )
    v5 = (UwpAppPackageInfo *)*this;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, UwpAppPackageInfo *))(v3 + 24))(
    a2,
    v5);
  j = *this[4];
  while ( !*((_BYTE *)j + 25) )
  {
    (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, __int64))(*(_QWORD *)a2 + 48LL))(
      a2,
      j[4]);
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
}
