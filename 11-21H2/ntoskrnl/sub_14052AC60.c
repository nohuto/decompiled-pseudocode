/*
 * XREFs of sub_14052AC60 @ 0x14052AC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14090AB48 @ 0x14090AB48 (sub_14090AB48.c)
 */

void sub_14052AC60()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  v0 = qword_140C54C40;
  v1 = 0;
  if ( qword_140C54C40 )
  {
    v2 = 0;
    v3 = qword_140C54C40 + *(unsigned int *)(qword_140C54C40 + 40);
    if ( *(_BYTE *)(qword_140C54C40 + 36) )
    {
      do
      {
        v4 = v2++;
        *(_QWORD *)(136 * v4 + qword_140C54C48) = v3;
        v3 += 2LL;
        v5 = *(unsigned __int8 *)(v0 + 36);
      }
      while ( v2 < v5 );
      if ( (_BYTE)v5 )
      {
        do
        {
          v6 = 136LL * v1;
          v7 = v6 + qword_140C54C48 + 8;
          LOBYTE(v6) = **(_BYTE **)(v6 + qword_140C54C48);
          sub_14090AB48(v6, &DestinationString, v7);
          ++v1;
        }
        while ( v1 < *(unsigned __int8 *)(v0 + 36) );
      }
    }
  }
}
