/*
 * XREFs of ?IsAppActive@Win32AppInfo@@QEAA_NXZ @ 0x1805681BC
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180569010 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x180568308 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 */

char __fastcall Win32AppInfo::IsAppActive(Win32AppInfo *this)
{
  char v1; // r10
  __int64 *i; // r9
  __int64 *v3; // r9
  __int64 **v4; // rax
  __int64 *j; // rax
  __int64 *v6; // rcx

  v1 = 0;
  i = (__int64 *)**((_QWORD **)this + 4);
  while ( *((_BYTE *)i + 25) == v1 )
  {
    if ( Win32ProcessInfo::IsProcessActive((Win32ProcessInfo *)i[5]) )
      return 1;
    v4 = (__int64 **)v3[2];
    if ( *((_BYTE *)v4 + 25) == v1 )
    {
      v6 = *v4;
      for ( i = (__int64 *)v3[2]; *((_BYTE *)v6 + 25) == v1; v6 = (__int64 *)*v6 )
        i = v6;
    }
    else
    {
      for ( j = (__int64 *)v3[1]; *((_BYTE *)j + 25) == v1 && v3 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v3 = j;
      i = j;
    }
  }
  return 0;
}
