/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C00016A0
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00015CC (RaidUnitAdaptiveIdleTimeout.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0088388 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x1C0048124 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // rsi
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // rdx
  _DWORD *v14; // r8

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD **)(a1 + 1744);
  if ( (*(_BYTE *)(v5 + 110) & 0x40) != 0 )
  {
    v9 = *(_DWORD *)(v5 + 5872);
    v10 = v6[7];
    if ( v9 == v10 && !a3 )
      return;
    v11 = v5;
    v12 = v6;
    if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
    {
      McTemplateK0quuuqqtt_EtwWriteTransfer(
        (v6[8] >> 10) & 1,
        v5,
        v5,
        *(_DWORD *)(v5 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        v10,
        v9,
        (v6[8] & 0x400) != 0,
        (v6[8] & 0x800) != 0);
      v11 = *(_QWORD *)(a1 + 24);
      v12 = *(_DWORD **)(a1 + 1744);
    }
    v12[7] = *(_DWORD *)(v11 + 5872);
    v13 = 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 5872LL);
LABEL_19:
    PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 1744), v13);
    return;
  }
  if ( a2 == -1 )
  {
    v7 = -1LL;
  }
  else
  {
    if ( a2 < v6[6] )
      a2 = v6[6];
    v7 = 10000LL * a2;
  }
  v8 = v6[7];
  if ( a2 != v8 )
  {
    v14 = v6;
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C00799E2 & 0x10) != 0 )
      {
        McTemplateK0quuuqqtt_EtwWriteTransfer(
          (v6[8] >> 10) & 1,
          v5,
          (_DWORD)v6,
          *(_DWORD *)(v5 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          v8,
          a2,
          (v6[8] & 0x400) != 0,
          (v6[8] & 0x800) != 0);
        v14 = *(_DWORD **)(a1 + 1744);
      }
    }
    v14[7] = a2;
    v13 = v7;
    goto LABEL_19;
  }
}
