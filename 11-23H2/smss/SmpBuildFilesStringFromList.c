/*
 * XREFs of SmpBuildFilesStringFromList @ 0x14000A224
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 *     SmpRecordCreatedPageFiles @ 0x14000A310 (SmpRecordCreatedPageFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpBuildFilesStringFromList(const UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  const UNICODE_STRING *v3; // rdx
  SIZE_T v5; // r8
  int Length; // eax
  WCHAR *Heap; // rax
  USHORT v8; // ax
  const UNICODE_STRING *i; // rsi

  v3 = *(const UNICODE_STRING **)&a1->Length;
  v5 = 2LL;
  if ( *(const UNICODE_STRING **)&a1->Length != a1 )
  {
    do
    {
      Length = v3[1].Length;
      v3 = *(const UNICODE_STRING **)&v3->Length;
      LODWORD(v5) = Length + 2 + v5;
    }
    while ( v3 != a1 );
    v5 = (unsigned int)v5;
    if ( (unsigned int)v5 > 0xFFFF )
      return 3221225473LL;
  }
  a2->MaximumLength = v5;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
  a2->Buffer = Heap;
  if ( !Heap )
    return 3221225495LL;
  a2->Length = 0;
  v8 = 0;
  for ( i = *(const UNICODE_STRING **)&a1->Length; i != a1; i = *(const UNICODE_STRING **)&i->Length )
  {
    RtlAppendUnicodeStringToString(a2, i + 1);
    v8 = a2->Length + 2;
    a2->Length = v8;
  }
  a2->Buffer[(unsigned __int64)v8 >> 1] = 0;
  a2->Length += 2;
  return 0LL;
}
