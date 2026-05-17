/*
 * XREFs of RtlQueryHeapInformation @ 0x18008AD00
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800E2370 (RtlQueryProcessHeapInformation.c)
 *     RtlpGetHeapTag @ 0x1800E2F80 (RtlpGetHeapTag.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FEDF0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpReadProcessHeaps @ 0x1801038BC (RtlpReadProcessHeaps.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180116170 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x18008B400 (RtlpHpTagQueryTags.c)
 *     RtlpHpStackTraceSerialize @ 0x18011669C (RtlpHpStackTraceSerialize.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v6; // r9d
  unsigned int v8; // r9d

  if ( a2 == -2147483647 )
  {
    if ( a4 >= 8 )
    {
      *a3 = &RtlpHeapFailureInfo;
      v8 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    else
    {
      if ( a5 )
        *a5 = 8LL;
      return (unsigned int)-1073741789;
    }
    return v8;
  }
  else
  {
    v6 = 0;
    if ( a2 )
    {
      switch ( a2 )
      {
        case 2:
          if ( a4 < 0x58 )
            return 3221225485LL;
          else
            return RtlpQueryExtendedHeapInformation(a3, a4, a5, 0LL);
        case 4:
          return RtlpHpTagQueryTags(a3);
        case 1:
          if ( a5 )
            *a5 = 4LL;
          if ( a4 >= 4 )
          {
            LOBYTE(v6) = RtlpDisableBreakOnFailureCookie == 0;
            *(_DWORD *)a3 = v6;
            return 0LL;
          }
          else
          {
            return 3221225507LL;
          }
        case 5:
          return RtlpHpStackTraceSerialize(a3, a4, a5, 0LL);
        case 7:
          if ( !a1 || !a3 || *(_DWORD *)(a1 + 16) != -571548178 )
            return (unsigned int)-1073741811;
          if ( a5 )
            *a5 = 8LL;
          if ( a4 == 8 )
            *a3 = *(_QWORD *)(a1 + 104);
          else
            return (unsigned int)-1073741811;
          return v6;
        default:
          return 3221225485LL;
      }
    }
    else if ( *(_DWORD *)(a1 + 16) == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      if ( a4 >= 4 )
      {
        if ( *(_DWORD *)(a1 + 16) == -571548178 )
          *(_DWORD *)a3 = 2;
        else
          *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 419);
        if ( a5 )
          *a5 = 4LL;
        return 0LL;
      }
      else
      {
        if ( a5 )
          *a5 = 4LL;
        return 3221225507LL;
      }
    }
    else
    {
      return 3221225474LL;
    }
  }
}
