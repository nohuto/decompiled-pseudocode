/*
 * XREFs of ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x18014D000
 * Callers:
 *     ?NotifyInputSiteIdentityRemoved@InputSiteManager@@QEAAXUInputSiteId@@@Z @ 0x18014D38C (-NotifyInputSiteIdentityRemoved@InputSiteManager@@QEAAXUInputSiteId@@@Z.c)
 * Callees:
 *     ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x180070D2C (-reset@-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 */

void __fastcall InputSite::RemoveIdForNamespace(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  _DWORD *v6; // rdx
  _OWORD *i; // rcx
  size_t v9; // rbx

  v4 = (_DWORD *)a1[2];
  v6 = (_DWORD *)a1[3];
  while ( v4 != v6 && *v4 != a2 )
    v4 += 4;
  if ( v4 != v6 )
  {
    for ( i = v4 + 4; i != (_OWORD *)v6; ++i )
    {
      if ( *(_DWORD *)i != a2 )
      {
        *(_OWORD *)v4 = *i;
        v4 += 4;
      }
    }
    if ( v4 != v6 )
    {
      v9 = a1[3] - (_QWORD)v6;
      memmove_0(v4, v6, v9);
      a1[3] = (char *)v4 + v9;
    }
  }
  if ( !a2 )
    std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(a1 + 6, (__int64)v6, a3, a4);
}
