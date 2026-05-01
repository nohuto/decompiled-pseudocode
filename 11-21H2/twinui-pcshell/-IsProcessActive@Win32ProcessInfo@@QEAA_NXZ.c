/*
 * XREFs of ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x180568308
 * Callers:
 *     ?IsAppActive@Win32AppInfo@@QEAA_NXZ @ 0x1805681BC (-IsAppActive@Win32AppInfo@@QEAA_NXZ.c)
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x1805687C4 (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Win32ProcessInfo::IsProcessActive(__int64 ***this)
{
  __int64 *j; // rax
  __int64 **v2; // rcx
  __int64 *i; // rcx
  __int64 *v4; // rdx

  j = **this;
  while ( !*((_BYTE *)j + 25) )
  {
    if ( *(_DWORD *)j[5] != 1 )
      return 1;
    v2 = (__int64 **)j[2];
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v4 = *v2;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v4 + 25); v4 = (__int64 *)*v4 )
        j = v4;
    }
  }
  return 0;
}
