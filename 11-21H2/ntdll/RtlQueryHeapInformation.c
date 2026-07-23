/*
 * XREFs of RtlQueryHeapInformation @ 0x18007D840
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FF0F0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpReadProcessHeaps @ 0x180103BD0 (RtlpReadProcessHeaps.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180115D90 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x18007DE24 (RtlpHpTagQueryTags.c)
 *     RtlpHpStackTraceSerialize @ 0x1801162AC (RtlpHpStackTraceSerialize.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS v6; // r9d
  NTSTATUS v8; // r9d

  if ( HeapInformationClass == -2147483647 )
  {
    if ( HeapInformationLength < 8 )
    {
      if ( ReturnLength )
        *ReturnLength = 8LL;
      return -1073741789;
    }
    else
    {
      *(_QWORD *)HeapInformation = &RtlpHeapFailureInfo;
      v8 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
    }
    return v8;
  }
  else
  {
    v6 = 0;
    if ( HeapInformationClass )
    {
      switch ( HeapInformationClass )
      {
        case 2:
          if ( HeapInformationLength < 0x58 )
            return -1073741811;
          else
            return RtlpQueryExtendedHeapInformation(HeapInformation, HeapInformationLength, ReturnLength, 0LL);
        case 4:
          return RtlpHpTagQueryTags(HeapInformation);
        case 5:
          return RtlpHpStackTraceSerialize(HeapInformation, HeapInformationLength, ReturnLength, 0LL);
        case 7:
          if ( !HeapHandle || !HeapInformation || *((_DWORD *)HeapHandle + 4) != -571548178 )
            return -1073741811;
          if ( ReturnLength )
            *ReturnLength = 8LL;
          if ( HeapInformationLength != 8 )
            return -1073741811;
          *(_QWORD *)HeapInformation = *((_QWORD *)HeapHandle + 13);
          return v6;
        default:
          return -1073741811;
      }
    }
    else if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
    {
      if ( HeapInformationLength >= 4 )
      {
        if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
          *(_DWORD *)HeapInformation = 2;
        else
          *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 419);
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return 0;
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return -1073741789;
      }
    }
    else
    {
      return -1073741822;
    }
  }
}
