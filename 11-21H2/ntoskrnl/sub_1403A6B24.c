/*
 * XREFs of sub_1403A6B24 @ 0x1403A6B24
 * Callers:
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 * Callees:
 *     sub_1403A6B80 @ 0x1403A6B80 (sub_1403A6B80.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 */

char __fastcall sub_1403A6B24(const wchar_t **a1, char *a2)
{
  int v4; // eax
  char v5; // bl
  const wchar_t *v6; // rcx

  v4 = sub_1403A6B80();
  v5 = 0;
  if ( v4 >= 0 )
  {
    v5 = 1;
  }
  else
  {
    LOBYTE(v4) = RtlIsStateSeparationEnabled();
    v6 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !(_BYTE)v4 )
      v6 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v6;
  }
  *a2 = v5;
  return v4;
}
