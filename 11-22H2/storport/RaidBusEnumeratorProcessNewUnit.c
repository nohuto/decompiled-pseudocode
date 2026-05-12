/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x1C001D0FC
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0015DC4 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     RaidAdapterInsertUnit @ 0x1C0017E28 (RaidAdapterInsertUnit.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1C001A370 (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     RaidStartUnit @ 0x1C00212D8 (RaidStartUnit.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

char __fastcall RaidBusEnumeratorProcessNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  char v6; // al
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  const wchar_t *v10; // rcx
  size_t v11; // r8

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 88) = 1;
  *(_DWORD *)(v2 + 92) = 4;
  *(_WORD *)(v2 + 90) = *(_WORD *)(v5 + 56);
  *(_OWORD *)(v2 + 104) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v2 + 120) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v2 + 136) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(v2 + 152) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(v2 + 160) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
  *(_OWORD *)(v2 + 169) = *(_OWORD *)(*(_QWORD *)(a2 + 32) + 16LL);
  *(_DWORD *)(v2 + 442) = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( *(_WORD *)(a2 + 42) )
  {
    v11 = 255LL;
    if ( *(_WORD *)(a2 + 40) < 0xFFu )
      v11 = *(unsigned __int16 *)(a2 + 40);
    memmove((void *)(v2 + 186), *(const void **)(a2 + 48), v11);
  }
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  v6 = *(_BYTE *)(v2 + 448) & 0xF7;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 693) = 1;
  *(_BYTE *)(v2 + 448) = v6 | 4;
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)(v2 + 656));
  if ( *(_QWORD *)(*(_QWORD *)a1 + 4816LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 4808LL), *(unsigned __int8 *)(a2 + 4)) )
  {
    *(_DWORD *)(v2 + 1872) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  RaidStartUnit(v2);
  *(_DWORD *)(v2 + 3344) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4212LL);
  LOBYTE(v7) = RaidIsUnitControlSupported(v2, 12);
  if ( (_BYTE)v7 )
  {
    v7 = RaCallMiniportUnitControl(*(_QWORD *)(v2 + 24) + 336LL);
    if ( v7 >= 0 )
      LOBYTE(v7) = -1;
  }
  if ( (byte_1C0092A06 & 2) != 0 )
  {
    v9 = *(_QWORD *)(v2 + 24);
    v10 = (const wchar_t *)&unk_1C0081788;
    if ( *(_QWORD *)(v9 + 5016) )
      v10 = *(const wchar_t **)(v9 + 5016);
    LOBYTE(v7) = McTemplateK0zqjuuusssz_EtwWriteTransfer(
                   (__int64)v10,
                   v9 + 5000,
                   v8,
                   *(const wchar_t **)(v9 + 4656),
                   *(_DWORD *)(v9 + 56),
                   v9 + 5000,
                   *(_BYTE *)(v2 + 96),
                   *(_BYTE *)(v2 + 97),
                   *(_BYTE *)(v2 + 98),
                   (const char *)(v2 + 160),
                   (const char *)(v2 + 169),
                   (const char *)(v2 + 186),
                   v10);
  }
  return v7;
}
