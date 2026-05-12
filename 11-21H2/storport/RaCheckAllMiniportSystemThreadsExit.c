/*
 * XREFs of RaCheckAllMiniportSystemThreadsExit @ 0x1C004DADC
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C008CA88 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0qjzzqq_EtwWriteTransfer @ 0x1C004CAA4 (McTemplateK0qjzzqq_EtwWriteTransfer.c)
 */

__int16 __fastcall RaCheckAllMiniportSystemThreadsExit(__int64 a1)
{
  signed __int32 v1; // eax
  char v2; // di
  __int128 v3; // xmm1
  const wchar_t *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  const wchar_t *v9; // rcx
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  __int128 v12; // [rsp+60h] [rbp-28h] BYREF

  v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 5864), 0, 0);
  v2 = v1;
  if ( v1 )
  {
    if ( StorEtwLoggingEnabled )
    {
      v3 = *(_OWORD *)(a1 + 4936);
      v4 = *(const wchar_t **)(a1 + 4952);
      v5 = *(_QWORD *)(a1 + 16);
      v12 = v3;
      v11 = 0LL;
      LOWORD(v1) = RaidDriverGetName(v5, (__int64)&v11);
      if ( byte_1C00799E6 < 0 )
      {
        v9 = (const wchar_t *)&unk_1C006A690;
        if ( v4 )
          v9 = v4;
        LOWORD(v1) = McTemplateK0qjzzqq_EtwWriteTransfer(
                       (__int64)v9,
                       v6,
                       v7,
                       *(_DWORD *)(v8 + 56),
                       (__int64)&v12,
                       *((const wchar_t **)&v11 + 1),
                       v9,
                       *(_DWORD *)(v8 + 5860),
                       v2);
      }
    }
  }
  return v1;
}
