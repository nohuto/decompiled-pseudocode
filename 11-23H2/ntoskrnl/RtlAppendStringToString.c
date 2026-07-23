/*
 * XREFs of RtlAppendStringToString @ 0x1407DD440
 * Callers:
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x140854C7C (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x140A1AF84 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  int Length; // edi
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)v4 + Length <= (unsigned int)Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Source->Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
