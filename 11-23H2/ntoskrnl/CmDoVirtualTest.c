/*
 * XREFs of CmDoVirtualTest @ 0x140347BDC
 * Callers:
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x1407ACBE0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140A0E260 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1407BA7DC (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( !CmpVEEnabled )
    return 0;
  v3 = a1;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1, v3, a2) == 0;
}
