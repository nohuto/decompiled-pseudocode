/*
 * XREFs of sub_14090AF30 @ 0x14090AF30
 * Callers:
 *     sub_14090AEC4 @ 0x14090AEC4 (sub_14090AEC4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052A6F0 @ 0x14052A6F0 (sub_14052A6F0.c)
 *     sub_14090AB48 @ 0x14090AB48 (sub_14090AB48.c)
 */

__int64 sub_14090AF30()
{
  __int64 v0; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v3[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset(v3, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !sub_14052A6F0(0LL) )
  {
    if ( (int)sub_14090AB48(*(_BYTE *)(qword_140C4E850 + 36), &DestinationString, v3) < 0 )
      return 3221225488LL;
    sub_14052A6F0((__int64)v3);
  }
  if ( qword_140C4A0C0 )
    return sub_14042A5E0(*((_QWORD *)&xmmword_140C4A070 + 1), v0);
  return 3221225488LL;
}
