/*
 * XREFs of RaidAdapterStorageTcgResetState @ 0x1C0051834
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     TcglibTPerReset @ 0x1C007AA28 (TcglibTPerReset.c)
 */

__int64 __fastcall RaidAdapterStorageTcgResetState(__int64 a1, IRP *a2)
{
  int TcgProperties; // edi
  __int64 v5; // r8
  const wchar_t *v6; // rcx
  __int128 v8; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v9; // [rsp+C8h] [rbp-50h] BYREF
  _OWORD pszDest[2]; // [rsp+D8h] [rbp-40h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0) == 1 )
  {
    TcgProperties = -2147483631;
  }
  else
  {
    TcgProperties = RaidGetTcgProperties(a1, pszDest);
    if ( TcgProperties >= 0 )
    {
      TcgProperties = TcglibTPerReset(*(_QWORD *)(a1 + 6008));
      if ( TcgProperties < 0 )
        RtlStringCbCopyA((NTSTRSAFE_PSTR)pszDest, 0x20uLL, "TcglibTPerReset");
    }
    *(_DWORD *)(a1 + 136) &= ~1u;
  }
  a2->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v8);
    if ( (byte_1C0092A07 & 4) != 0 )
    {
      v6 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(a1 + 5016) )
        v6 = *(const wchar_t **)(a1 + 5016);
      McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
        (__int64)v6,
        a1 + 5000,
        v5,
        *(_DWORD *)(a1 + 56),
        RaidNullAddress,
        SBYTE1(RaidNullAddress),
        SBYTE2(RaidNullAddress),
        (__int64)&v9,
        a1 + 5000,
        *((const wchar_t **)&v8 + 1),
        byte_1C0081FE6,
        byte_1C0081FE6,
        byte_1C0081FE6,
        v6,
        "TcgResetState",
        (const char *)pszDest,
        TcgProperties,
        0,
        0,
        0,
        0);
    }
  }
  return RaidCompleteRequestEx(a2, 0, TcgProperties);
}
