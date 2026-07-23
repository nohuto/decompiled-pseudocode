/*
 * XREFs of PspQueryComPlusRunUnderWoW @ 0x1409B13A8
 * Callers:
 *     PspSelectMachineForProcess @ 0x1406B7B58 (PspSelectMachineForProcess.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 *     RtlQueryImageFileKeyOption @ 0x1406B6070 (RtlQueryImageFileKeyOption.c)
 */

NTSTATUS __fastcall PspQueryComPlusRunUnderWoW(__int64 a1, _BYTE *a2)
{
  char v2; // al
  NTSTATUS result; // eax
  void *v6; // rcx
  int SystemInformation; // [rsp+50h] [rbp+18h] BYREF
  ULONG v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = MEMORY[0xFFFFF780000002E0];
  SystemInformation = MEMORY[0xFFFFF780000002E0];
  if ( MEMORY[0xFFFFF780000002E0] == -1 )
  {
    result = ZwQuerySystemInformation(SystemComPlusPackage, &SystemInformation, 4u, 0LL);
    if ( result < 0 )
      return result;
    v2 = SystemInformation;
  }
  if ( (v2 & 1) == 0 )
    goto LABEL_8;
  v6 = *(void **)(a1 + 192);
  if ( !v6 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
      return -1073741823;
    goto LABEL_12;
  }
  v8 = 0;
  result = RtlQueryImageFileKeyOption(v6, L"Wow64", 4, &v8, 4u, 0LL);
  if ( result >= 0 )
  {
    if ( v8 )
    {
LABEL_8:
      *a2 = 1;
      return 0;
    }
LABEL_12:
    *a2 = 0;
    return 0;
  }
  if ( result == -1073741772 )
    goto LABEL_12;
  return result;
}
