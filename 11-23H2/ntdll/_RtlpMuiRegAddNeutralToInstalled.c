/*
 * XREFs of _RtlpMuiRegAddNeutralToInstalled @ 0x18000A13C
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A534 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180009F98 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralToInstalled(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned int i; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  const WCHAR *v8; // r8
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-E8h] BYREF
  const WCHAR *v12; // [rsp+28h] [rbp-E0h]
  _BYTE v13[176]; // [rsp+30h] [rbp-D8h] BYREF

  memset_thunk_772440563353939046(v13, 0, 0xAAuLL);
  v2 = 0;
  if ( a1 && (v3 = *(_QWORD *)(a1 + 24)) != 0 && *(_QWORD *)(v3 + 16) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v3 + 6); ++i )
    {
      v5 = *(_QWORD *)(v3 + 16) + 28LL * i;
      if ( *(__int16 *)(v5 + 6) <= 0 )
      {
        v10 = *(unsigned __int16 *)(v5 + 4);
        v11 = 11141120;
        v12 = (const WCHAR *)v13;
        if ( (int)RtlLcidToLocaleName(v10, &v11, 2LL, 0LL) < 0 )
          goto LABEL_10;
        v8 = v12;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 32);
        v7 = (unsigned int)*(__int16 *)(v5 + 6);
        if ( !v6 )
          goto LABEL_10;
        if ( (unsigned int)v7 > *(unsigned __int16 *)(v6 + 6) )
          goto LABEL_10;
        v8 = (const WCHAR *)(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v7));
        if ( !v8 )
          goto LABEL_10;
      }
      RtlpMuiRegAddNeutralLanguage(a1, v5, v8);
LABEL_10:
      v3 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
