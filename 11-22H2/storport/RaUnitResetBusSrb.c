/*
 * XREFs of RaUnitResetBusSrb @ 0x1C005E3D0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 * Callees:
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C005C574 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0062F04 (RaidUnitSubmitResetRequest.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( (byte_1C0092A04 & 2) != 0 )
    McTemplateK0zqjujssstq_EtwWriteTransfer(
      a1,
      *(_QWORD *)(a1 + 24) + 5000LL,
      a1 + 169,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5000LL,
      *(_BYTE *)(a1 + 96),
      a1 + 2024,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      *(_BYTE *)(a1 + 450) & 1,
      1);
  return RaidUnitSubmitResetRequest(a1, a2);
}
