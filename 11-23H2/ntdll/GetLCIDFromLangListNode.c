/*
 * XREFs of GetLCIDFromLangListNode @ 0x180070844
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180070640 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall GetLCIDFromLangListNode(__int64 a1, _WORD *a2, _WORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int16 v6; // ax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v12 = 0;
  if ( a2 && a3 )
  {
    v5 = g_RegInfo;
    *a3 = 0;
    if ( a1 )
      v5 = a1;
    switch ( *a2 )
    {
      case 1:
        *a3 = a2[2];
        return v3;
      case 2:
        v6 = *(_WORD *)(28LL * (__int16)a2[2] + *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) + 4);
        *a3 = v6;
        if ( v6 )
          return v3;
        v9 = 28LL * (__int16)a2[2];
        v10 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL);
        if ( *(__int16 *)(v9 + v10 + 6) <= 0 )
          return (unsigned int)-1073741595;
        v8 = *(__int16 *)(v9 + v10 + 6);
        break;
      case 3:
        v8 = (__int16)a2[2];
        break;
      default:
        return (unsigned int)-1073741595;
    }
    RtlInitUnicodeString(
      &DestinationString,
      (PCWSTR)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 16LL) + 2 * v8)));
    if ( RtlCultureNameToLCID(&DestinationString.Length, &v12) )
    {
      *a3 = v12;
      return v3;
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
