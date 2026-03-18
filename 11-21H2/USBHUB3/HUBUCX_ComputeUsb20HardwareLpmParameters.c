/*
 * XREFs of HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1C0024700
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001E460 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C0023340 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBUCX_ComputeUsb20HardwareLpmParameters(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  char v5; // dl
  int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // r10d

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00671E8);
  if ( (*(_DWORD *)(a1 + 1632) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 2224) = 2;
LABEL_3:
    v5 = 0;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a1 + 1644) & 0x20000) != 0 )
  {
    *(_DWORD *)(a1 + 2224) = 3;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x10000) != 0 )
  {
    *(_DWORD *)(a1 + 2224) = 4;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v4 + 4) & 0x8000) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 5;
    goto LABEL_3;
  }
  v6 = *(_DWORD *)(a1 + 2440);
  v5 = 1;
  if ( (v6 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 6;
    goto LABEL_3;
  }
  if ( (v6 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 7;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x40) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 8;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 2224) = 1;
  *(_DWORD *)(a2 + 60) |= 1u;
  *(_DWORD *)(a2 + 24) |= 0x20u;
  v7 = *(_DWORD *)(a2 + 60) & 0xFFF807FF | (*(unsigned __int8 *)(v4 + 72) << 11);
  *(_DWORD *)(a2 + 60) = v7;
  if ( (*(_DWORD *)(a1 + 1644) & 0x40000) == 0 )
    v7 |= 2u;
  v8 = v7 & 0xFFFFF803 | 0x20;
  *(_DWORD *)(a2 + 60) = v8;
  v9 = *(_DWORD *)(a1 + 2440);
  v10 = v9 >> 1;
  if ( (v9 & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x80u) != 0 )
  {
    if ( (v9 & 4) != 0 )
    {
      *(_DWORD *)(a2 + 60) = v8 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v8) & 0x78;
      v8 ^= ((unsigned __int8)v10 ^ (unsigned __int8)v8) & 0x78;
      v9 = *(_DWORD *)(a1 + 2440);
    }
    if ( (v9 & 8) != 0 )
      *(_DWORD *)(a2 + 60) = v8 | ((v9 & 0xF00 | 8) >> 1);
  }
LABEL_24:
  if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 )
    *(_DWORD *)(a1 + 2224) = 9;
  return v5;
}
