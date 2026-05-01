/*
 * XREFs of ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180625AC0
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625900 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetExePath@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625A40 (-GetExePath@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ExePathToAppIdMapping::GetExePathFromAppId(PSRWLOCK SRWLock, _QWORD *a2, __int64 *a3)
{
  __int64 *v6; // rbx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  AcquireSRWLockShared(SRWLock);
  v6 = *(__int64 **)SRWLock[1].Ptr;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = v6 + 8;
    if ( (unsigned __int64)v6[11] >= 8 )
      v7 = (_QWORD *)*v7;
    v8 = (__int64)a3;
    if ( (unsigned __int64)a3[3] >= 8 )
      v8 = *a3;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, a3[2], (__int64)v7, v6[10]) )
    {
      std::wstring::wstring(a2, (__int64)(v6 + 4));
      goto LABEL_19;
    }
    v9 = (__int64 **)v6[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
LABEL_19:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return a2;
}
