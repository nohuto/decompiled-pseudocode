/*
 * XREFs of RaidUnitStorageTcgResetState @ 0x1C00538C0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     TcglibTPerReset @ 0x1C007AA28 (TcglibTPerReset.c)
 */

__int64 __fastcall RaidUnitStorageTcgResetState(__int64 a1, IRP *a2)
{
  int TcgProperties; // esi
  char v5; // r11
  __int64 v6; // r9
  const wchar_t *v7; // rax
  __int64 v8; // r8
  int v9; // r9d
  const wchar_t *v10; // rbx
  int v12; // [rsp+B0h] [rbp-58h]
  __int128 v13; // [rsp+B8h] [rbp-50h] BYREF
  char v14[32]; // [rsp+C8h] [rbp-40h] BYREF

  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
  {
    TcgProperties = -2147483631;
  }
  else
  {
    TcgProperties = RaidGetTcgProperties(a1, v14);
    if ( TcgProperties >= 0 )
      TcgProperties = TcglibTPerReset(*(_QWORD *)(a1 + 3496));
    *(_DWORD *)(a1 + 456) &= ~8u;
  }
  a2->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    v12 = *(_DWORD *)(a1 + 96);
    RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v13);
    v6 = *(_QWORD *)(a1 + 24);
    if ( (byte_1C0092A07 & 4) != 0 )
    {
      v7 = *(const wchar_t **)(v6 + 5016);
      v8 = v6 + 5000;
      v9 = *(_DWORD *)(v6 + 56);
      v10 = (const wchar_t *)&unk_1C0081788;
      if ( v7 )
        v10 = v7;
      McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
        a1 + 169,
        a1 + 160,
        v8,
        v9,
        v5,
        SBYTE1(v12),
        SBYTE2(v12),
        a1 + 2024,
        v8,
        *((const wchar_t **)&v13 + 1),
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        v10,
        "TcgResetState",
        v14,
        TcgProperties,
        0,
        0,
        0,
        0);
    }
  }
  return RaidCompleteRequestEx(a2, 0, TcgProperties);
}
