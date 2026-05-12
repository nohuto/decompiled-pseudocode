/*
 * XREFs of RaBuildDsmRequestForLedState @ 0x1C0056498
 * Callers:
 *     RaidEvaluateDsmLedState @ 0x1C0058FAC (RaidEvaluateDsmLedState.c)
 * Callees:
 *     memcpy_s @ 0x1C0022108 (memcpy_s.c)
 */

errno_t __fastcall RaBuildDsmRequestForLedState(__int64 a1, __int64 a2, int a3, int a4)
{
  errno_t result; // eax
  _WORD *v5; // rcx
  _DWORD *v6; // rcx
  int Src; // [rsp+48h] [rbp+20h] BYREF

  Src = a4;
  *(_DWORD *)a1 = 1130980673;
  *(_DWORD *)(a1 + 12) = 4;
  result = 0;
  *(_DWORD *)(a1 + 4) = 1297302623;
  *(_DWORD *)(a1 + 8) = 64;
  *(_DWORD *)(a1 + 16) = 1048578;
  *(GUID *)(a1 + 20) = GUID_ACPI_DSM_PCI_SSD_LED_STATE;
  *(_DWORD *)(a1 + 36) = 0x40000;
  *(_DWORD *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 44) = 0x40000;
  *(_DWORD *)(a1 + 48) = a3;
  v5 = (_WORD *)(a1 + 52);
  *v5 = 4;
  if ( a3 == 3 )
  {
    v5[1] = 8;
    v6 = v5 + 2;
    *v6 = 262146;
    return memcpy_s(v6 + 1, 4uLL, &Src, 4uLL);
  }
  else
  {
    v5[1] = 0;
  }
  return result;
}
