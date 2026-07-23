/*
 * XREFs of VfDriverLoadImage @ 0x140ABCDF4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x140B57B7C (VfDriverLoadBootDrivers.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x14020A190 (VfTargetDriversAdd.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversLoadCallback @ 0x140ADA724 (VfSuspectDriversLoadCallback.c)
 */

void __fastcall VfDriverLoadImage(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  char v6; // al

  v3 = a3;
  if ( !_bittest16((const signed __int16 *)(a1 + 110), 9u)
    && (!VfDifRunningWithoutReboot || VfXdvEnabled || !RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &XdvName, 1u)) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v5) + 15LL) >> 4;
    else
      v6 = 12;
    if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    {
      LOBYTE(a2) = v6;
      VfSuspectDriversLoadCallback(a1, a2, v3);
    }
    else
    {
      VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v6, 0LL);
    }
  }
}
