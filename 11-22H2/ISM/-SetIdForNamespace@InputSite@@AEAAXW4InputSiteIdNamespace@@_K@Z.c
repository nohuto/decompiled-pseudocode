/*
 * XREFs of ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x180070BB8
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180070C3C (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@QEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x180002D40 (--$_Emplace_reallocate@UInputSiteId@@@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@s.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

char *__fastcall InputSite::SetIdForNamespace(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 i; // rcx
  _BYTE *v6; // rdx
  char *result; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a1 + 16;
  for ( i = *(_QWORD *)(a1 + 16); i != v3 && *(_DWORD *)i != a2; i += 16LL )
    ;
  if ( i == v3 )
  {
    LODWORD(v8) = a2;
    v6 = *(_BYTE **)(v4 + 8);
    *((_QWORD *)&v8 + 1) = a3;
    if ( v6 == *(_BYTE **)(v4 + 16) )
    {
      return std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>((const void **)v4, v6, &v8);
    }
    else
    {
      *(_OWORD *)v6 = v8;
      *(_QWORD *)(v4 + 8) += 16LL;
    }
  }
  else
  {
    *(_QWORD *)(i + 8) = a3;
  }
  return result;
}
