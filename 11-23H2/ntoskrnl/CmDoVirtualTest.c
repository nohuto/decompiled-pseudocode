/*
 * XREFs of CmDoVirtualTest @ 0x14034794C
 * Callers:
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14070EA40 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x1407AC9F0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140A0DFB0 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1407BA4FC (CmpIsSystemEntity.c)
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
