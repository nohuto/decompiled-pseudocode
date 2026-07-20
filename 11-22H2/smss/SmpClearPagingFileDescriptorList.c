/*
 * XREFs of SmpClearPagingFileDescriptorList @ 0x140016A30
 * Callers:
 *     SmpCreateEmergencyPagingFile @ 0x140016ED8 (SmpCreateEmergencyPagingFile.c)
 * Callees:
 *     <none>
 */

void SmpClearPagingFileDescriptorList()
{
  struct _UNICODE_STRING *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (struct _UNICODE_STRING *)SmpPagingFileDescriptorList;
    if ( SmpPagingFileDescriptorList == &SmpPagingFileDescriptorList )
      break;
    if ( *((PVOID **)SmpPagingFileDescriptorList + 1) != &SmpPagingFileDescriptorList
      || (v1 = *(_QWORD *)SmpPagingFileDescriptorList,
          *(PVOID *)(*(_QWORD *)SmpPagingFileDescriptorList + 8LL) != SmpPagingFileDescriptorList) )
    {
      __fastfail(3u);
    }
    SmpPagingFileDescriptorList = *(PVOID *)SmpPagingFileDescriptorList;
    *(_QWORD *)(v1 + 8) = &SmpPagingFileDescriptorList;
    RtlFreeUnicodeString(v0 + 1);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v0);
  }
  SmpNumberOfPagefileDescriptors = 0;
}
