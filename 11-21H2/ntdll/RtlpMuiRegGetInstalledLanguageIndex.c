/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndex @ 0x18004B60C
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18004B31C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801107CC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180110D60 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1801129D8 (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18004B778 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, int a2, __int16 a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v9; // r8
  char v10; // dl
  int v12; // r9d
  unsigned int v13; // ecx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r8
  const WCHAR *v17; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a3;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 24);
  if ( a2 != 3 )
  {
    v10 = 1;
    if ( a2 == 1 )
    {
LABEL_4:
      LOBYTE(v9) = v10;
      return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, (unsigned __int16)v5, v9, a4);
    }
    if ( a2 == 2 )
    {
      if ( (__int16)v5 > 0 && (int)v5 < *(unsigned __int16 *)(v9 + 6) )
      {
        if ( a4 )
          *a4 = v5;
        return v4;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741772;
  }
  v12 = *(unsigned __int16 *)(v9 + 6);
  v13 = 0;
  if ( !*(_WORD *)(v9 + 6) )
  {
LABEL_14:
    v16 = *(_QWORD *)(a1 + 32);
    if ( v16 )
    {
      if ( (v5 & 0x8000u) == 0LL && (unsigned int)v5 < *(unsigned __int16 *)(v16 + 6) )
      {
        v17 = (const WCHAR *)(*(_QWORD *)(v16 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v16 + 16) + 2 * v5));
        if ( v17 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            LOWORD(v5) = Lcid;
            v10 = 0;
            goto LABEL_4;
          }
        }
      }
    }
    return (unsigned int)-1073741772;
  }
  v14 = *(_QWORD *)(v9 + 16);
  while ( 1 )
  {
    v15 = 28LL * v13;
    if ( (*(_WORD *)(v15 + v14) & 0x1020) == 0x20 && *(_WORD *)(v15 + v14 + 6) == (_WORD)v5 && a4 )
      break;
    if ( (int)++v13 >= v12 )
      goto LABEL_14;
  }
  *a4 = v13;
  return v4;
}
