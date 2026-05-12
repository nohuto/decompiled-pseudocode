/*
 * XREFs of RaBuildDsmRequestForLedState @ 0x1C004CF80
 * Callers:
 *     RaidEvaluateDsmLedState @ 0x1C004E90C (RaidEvaluateDsmLedState.c)
 * Callees:
 *     memcpy_s @ 0x1C0022C58 (memcpy_s.c)
 */

errno_t __fastcall RaBuildDsmRequestForLedState(__int64 a1, __int64 a2, int a3, int a4)
{
  errno_t result; // eax
  _DWORD *v5; // rcx
  _WORD *v6; // rcx
  _DWORD *v7; // rcx
  int Src; // [rsp+48h] [rbp+20h] BYREF

  Src = a4;
  *(_DWORD *)a1 = 1130980673;
  *(_DWORD *)(a1 + 12) = 4;
  result = 0;
  *(_DWORD *)(a1 + 4) = 1297302623;
  *(_DWORD *)(a1 + 8) = 64;
  *(_DWORD *)(a1 + 16) = 1048578;
  *(GUID *)(a1 + 20) = GUID_ACPI_DSM_PCI_SSD_LED_STATE;
  v5 = (_DWORD *)(a1 + 36);
  v5[1] = 1;
  *v5 = 0x40000;
  v5 += 2;
  *v5 = 0x40000;
  v5[1] = a3;
  v6 = v5 + 2;
  *v6 = 4;
  if ( a3 == 3 )
  {
    v6[1] = 8;
    v7 = v6 + 2;
    *v7 = 262146;
    return memcpy_s(v7 + 1, 4uLL, &Src, 4uLL);
  }
  else
  {
    v6[1] = 0;
  }
  return result;
}
