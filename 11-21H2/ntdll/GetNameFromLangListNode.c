/*
 * XREFs of GetNameFromLangListNode @ 0x18004B20C
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x18004C2E4 (RtlpAddNeutralsToMergedList.c)
 *     RtlGetNeutralFallback @ 0x18004C4FC (RtlGetNeutralFallback.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18004C70C (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D524 (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 */

__int64 __fastcall GetNameFromLangListNode(__int64 a1, _WORD *a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    switch ( *a2 )
    {
      case 1:
        if ( !RtlLCIDToCultureName((__int16)a2[2], a3) )
          return (unsigned int)-1073741595;
        return v3;
      case 2:
        v6 = 28LL * (__int16)a2[2];
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( *(__int16 *)(v6 + v7 + 6) > 0 )
        {
          v8 = *(_QWORD *)(a1 + 32);
          v9 = *(__int16 *)(v6 + v7 + 6);
LABEL_8:
          RtlInitUnicodeString(a3, (PCWSTR)(*(_QWORD *)(v8 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v8 + 16) + 2 * v9)));
          return v3;
        }
        if ( *(_WORD *)(v6 + v7 + 4) && RtlLCIDToCultureName(*(unsigned __int16 *)(v6 + v7 + 4), a3) )
          return v3;
        break;
      case 3:
        v8 = *(_QWORD *)(a1 + 32);
        v9 = (__int16)a2[2];
        goto LABEL_8;
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
