/*
 * XREFs of StorLogMFNDChildPFControl @ 0x1C003BEFC
 * Callers:
 *     RaidAdapterMFNDChildPFControl @ 0x1C00354B8 (RaidAdapterMFNDChildPFControl.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer @ 0x1C00327B4 (McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDChildPFControl(__int64 a1, char a2, char a3, char a4, unsigned __int16 a5, char a6)
{
  __int128 v9; // xmm1
  const wchar_t *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r11
  const wchar_t *v13; // r10
  __int64 v14; // rdx
  const wchar_t *v15; // r8
  __int64 v16; // rcx
  __int128 v17; // [rsp+80h] [rbp-38h] BYREF
  __int128 v18; // [rsp+90h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v9 = *(_OWORD *)(a1 + 4936);
    v10 = *(const wchar_t **)(a1 + 4952);
    v11 = *(_QWORD *)(a1 + 16);
    v18 = v9;
    v17 = 0LL;
    RaidDriverGetName(v11, (__int64)&v17);
    if ( (byte_1C00799E7 & 2) != 0 )
    {
      v13 = (const wchar_t *)&unk_1C006A690;
      v14 = a5;
      v15 = (const wchar_t *)&unk_1C006A690;
      if ( *(_QWORD *)(v12 + 5888) )
        v15 = *(const wchar_t **)(v12 + 5888);
      v16 = a5;
      if ( v10 )
        v13 = v10;
      LOWORD(v16) = a5 >> 9;
      LOBYTE(v16) = (a5 >> 9) & 7;
      LOWORD(v14) = a5 >> 1;
      McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer(
        v16,
        v14,
        (__int64)v15,
        *(_DWORD *)(v12 + 56),
        (__int64)&v18,
        *((const wchar_t **)&v17 + 1),
        v13,
        v15,
        *(_DWORD *)(v12 + 5900),
        *(_DWORD *)(v12 + 5896),
        a2,
        a3,
        a4,
        a5 >> 1,
        v16,
        a6);
    }
  }
}
