/*
 * XREFs of StorLogMFNDCapability @ 0x1C003DACC
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_EtwWriteTransfer @ 0x1C003279C (McTemplateK0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_EtwWriteTransfer.c)
 */

__int16 __fastcall StorLogMFNDCapability(__int64 a1)
{
  __int128 v1; // xmm1
  const wchar_t *v2; // rbx
  __int64 v3; // rcx
  __int16 result; // ax
  __int64 v5; // r11
  __int64 v6; // rcx
  const wchar_t *v7; // r8
  __int64 v8; // rdx
  __int128 v9; // [rsp+110h] [rbp-38h] BYREF
  __int128 v10; // [rsp+120h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    if ( *(_QWORD *)(a1 + 5968) )
    {
      v1 = *(_OWORD *)(a1 + 5000);
      v2 = *(const wchar_t **)(a1 + 5016);
      v3 = *(_QWORD *)(a1 + 16);
      v10 = v1;
      v9 = 0LL;
      result = RaidDriverGetName(v3, (__int64)&v9);
      if ( byte_1C0092A03 < 0 )
      {
        v7 = (const wchar_t *)&unk_1C0081788;
        if ( v2 )
          v7 = v2;
        v8 = *(_BYTE *)(v5 + 111) & 1;
        v6 = *(_QWORD *)(v5 + 5968);
        return McTemplateK0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_EtwWriteTransfer(
                 v6,
                 v8,
                 (__int64)v7,
                 *(_DWORD *)(v5 + 56),
                 (__int64)&v10,
                 *((const wchar_t **)&v9 + 1),
                 v7,
                 v8,
                 *(_DWORD *)(v5 + 5964),
                 *(_DWORD *)(v5 + 5960),
                 *(_DWORD *)v6,
                 *(_BYTE *)(v6 + 4),
                 *(_BYTE *)(v6 + 5),
                 *(_WORD *)(v6 + 8),
                 *(_WORD *)(v6 + 10),
                 *(_WORD *)(v6 + 12),
                 *(_WORD *)(v6 + 14),
                 *(_WORD *)(v6 + 16),
                 *(_WORD *)(v6 + 18),
                 *(_WORD *)(v6 + 20),
                 *(_WORD *)(v6 + 22),
                 *(_DWORD *)(v6 + 24),
                 *(_DWORD *)(v6 + 28),
                 *(_DWORD *)(v6 + 32),
                 *(_DWORD *)(v6 + 36),
                 *(_DWORD *)(v6 + 40),
                 *(_DWORD *)(v6 + 44),
                 *(_DWORD *)(v6 + 48),
                 *(_DWORD *)(v6 + 52),
                 *(_DWORD *)(v6 + 56),
                 *(_DWORD *)(v6 + 60),
                 *(_DWORD *)(v6 + 64),
                 *(_DWORD *)(v6 + 68),
                 *(_BYTE *)(v6 + 72));
      }
    }
  }
  return result;
}
