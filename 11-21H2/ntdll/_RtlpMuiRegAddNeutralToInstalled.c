/*
 * XREFs of _RtlpMuiRegAddNeutralToInstalled @ 0x18006F480
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006E5F4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x18004B900 (RtlLcidToLocaleName.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18006F570 (_RtlpMuiRegAddNeutralLanguage.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralToInstalled(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int i; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  LCID v9; // ecx
  _UNICODE_STRING LocaleName; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v11[176]; // [rsp+30h] [rbp-D8h] BYREF

  memset(v11, 0, 0xAAuLL);
  v2 = 0;
  if ( a1 && (v3 = *(_QWORD *)(a1 + 24)) != 0 && *(_QWORD *)(v3 + 16) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v3 + 6); ++i )
    {
      v5 = *(_QWORD *)(v3 + 16) + 28LL * i;
      if ( *(__int16 *)(v5 + 6) <= 0 )
      {
        v9 = *(unsigned __int16 *)(v5 + 4);
        *(_DWORD *)&LocaleName.Length = 11141120;
        LocaleName.Buffer = (wchar_t *)v11;
        if ( RtlLcidToLocaleName(v9, &LocaleName, 2u, 0) < 0 )
          goto LABEL_10;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 32);
        v7 = (unsigned int)*(__int16 *)(v5 + 6);
        if ( !v6
          || (unsigned int)v7 > *(unsigned __int16 *)(v6 + 6)
          || !(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v7)) )
        {
          goto LABEL_10;
        }
      }
      RtlpMuiRegAddNeutralLanguage(a1, v5);
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
