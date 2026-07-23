/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndex @ 0x180015C44
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180110C4C (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1801111E8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegValidateConfigNode @ 0x180112E34 (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015DA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, unsigned int a2, __int16 a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v7; // r8
  __int64 v9; // rax
  char v10; // dl
  int v12; // ecx
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // r8
  const WCHAR *v16; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a3;
  v7 = a2;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 24);
  if ( a2 != 3 )
  {
    v10 = 1;
    if ( (_DWORD)v7 == 1 )
    {
LABEL_4:
      LOBYTE(v7) = v10;
      return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, (unsigned __int16)v5, v7, a4);
    }
    if ( (_DWORD)v7 == 2 )
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
  v12 = 0;
  if ( !*(_WORD *)(v9 + 6) )
  {
LABEL_14:
    v15 = *(_QWORD *)(a1 + 32);
    if ( v15 )
    {
      if ( (v5 & 0x8000u) == 0LL && (unsigned int)v5 < *(unsigned __int16 *)(v15 + 6) )
      {
        v16 = (const WCHAR *)(*(_QWORD *)(v15 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v15 + 16) + 2 * v5));
        if ( v16 )
        {
          RtlInitUnicodeString(&DestinationString, v16);
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
  v13 = *(_QWORD *)(v9 + 16);
  while ( 1 )
  {
    v14 = 28LL * v12;
    if ( (*(_WORD *)(v14 + v13) & 0x1020) == 0x20 && *(_WORD *)(v14 + v13 + 6) == (_WORD)v5 && a4 )
      break;
    if ( ++v12 >= *(unsigned __int16 *)(v9 + 6) )
      goto LABEL_14;
  }
  *a4 = v12;
  return v4;
}
