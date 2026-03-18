/*
 * XREFs of RtlAppendStringToString @ 0x1407DD170
 * Callers:
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x14085497C (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x140A1A8E8 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x140A1ACD4 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
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
