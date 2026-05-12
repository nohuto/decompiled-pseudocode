/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C00048B4
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00047A0 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00A2EDC (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x1C004AF2C (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, char a3)
{
  _QWORD **v4; // rdi
  __int64 v5; // rdx
  __int64 v8; // rbp
  int v9; // r8d
  int v10; // r9d
  int v11; // r8d
  __int64 v12; // rdx
  __int64 result; // rax

  v4 = (_QWORD **)(a1 + 1792);
  v5 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v5 + 110) & 0x40) != 0 )
  {
    v10 = *(_DWORD *)(v5 + 5936);
    v11 = *((_DWORD *)*v4 + 7);
    if ( v10 == v11 && !a3 )
      return result;
    if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0quuuqqtt_EtwWriteTransfer(
        (*((_DWORD *)*v4 + 8) >> 10) & 1,
        v5,
        v11,
        *(_DWORD *)(v5 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        v11,
        v10,
        ((*v4)[4] & 0x400) != 0,
        ((*v4)[4] & 0x800) != 0);
    *((_DWORD *)*v4 + 7) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5936LL);
    v12 = 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 5936LL);
    return PoFxSetDeviceIdleTimeout(**v4, v12);
  }
  if ( a2 == -1 )
  {
    v8 = -1LL;
  }
  else
  {
    if ( a2 < *((_DWORD *)*v4 + 6) )
      a2 = *((_DWORD *)*v4 + 6);
    result = a2;
    v8 = 10000LL * a2;
  }
  v9 = *((_DWORD *)*v4 + 7);
  if ( a2 != v9 )
  {
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0092A02 & 0x10) != 0 )
        McTemplateK0quuuqqtt_EtwWriteTransfer(
          (*((_DWORD *)*v4 + 8) >> 10) & 1,
          v5,
          v9,
          *(_DWORD *)(v5 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          v9,
          a2,
          ((*v4)[4] & 0x400) != 0,
          ((*v4)[4] & 0x800) != 0);
    }
    v12 = v8;
    *((_DWORD *)*v4 + 7) = a2;
    return PoFxSetDeviceIdleTimeout(**v4, v12);
  }
  return result;
}
