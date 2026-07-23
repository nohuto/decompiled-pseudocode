/*
 * XREFs of _RtlpMuiRegAddNeutralToInstalled @ 0x18000A664
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A754 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18000A1B8 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralToInstalled(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned int i; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  wchar_t *Buffer; // r8
  LCID v10; // ecx
  _UNICODE_STRING LocaleName; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v12[176]; // [rsp+30h] [rbp-D8h] BYREF

  memset_thunk_772440563353939046(v12, 0, 0xAAuLL);
  v2 = 0;
  if ( a1 && (v3 = *(_QWORD *)(a1 + 24)) != 0 && *(_QWORD *)(v3 + 16) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v3 + 6); ++i )
    {
      v5 = *(_QWORD *)(v3 + 16) + 28LL * i;
      if ( *(__int16 *)(v5 + 6) <= 0 )
      {
        v10 = *(unsigned __int16 *)(v5 + 4);
        *(_DWORD *)&LocaleName.Length = 11141120;
        LocaleName.Buffer = (wchar_t *)v12;
        if ( RtlLcidToLocaleName(v10, &LocaleName, 2u, 0) < 0 )
          goto LABEL_10;
        Buffer = LocaleName.Buffer;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 32);
        v7 = (unsigned int)*(__int16 *)(v5 + 6);
        if ( !v6 )
          goto LABEL_10;
        if ( (unsigned int)v7 > *(unsigned __int16 *)(v6 + 6) )
          goto LABEL_10;
        Buffer = (wchar_t *)(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v7));
        if ( !Buffer )
          goto LABEL_10;
      }
      RtlpMuiRegAddNeutralLanguage(a1, v5, Buffer);
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
