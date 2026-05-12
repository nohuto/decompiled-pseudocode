/*
 * XREFs of StorLogMFNDQueryChildPFList @ 0x1C00672D0
 * Callers:
 *     StorQueryMFNDChildPFList @ 0x1C00911EC (StorQueryMFNDChildPFList.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzqqqqbr8uuq_EtwWriteTransfer @ 0x1C0066D94 (McTemplateK0qjzzzqqqqbr8uuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDQueryChildPFList(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm1
  const wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r11
  int v11; // r10d
  __int64 v12; // r8
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rcx
  __int128 v15; // [rsp+80h] [rbp-48h] BYREF
  __int128 v16; // [rsp+90h] [rbp-38h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v7 = *(_OWORD *)(a1 + 4936);
    v8 = *(const wchar_t **)(a1 + 4952);
    v9 = *(_QWORD *)(a1 + 16);
    v16 = v7;
    v15 = 0LL;
    RaidDriverGetName(v9, (__int64)&v15);
    if ( (byte_1C00799E3 & 0x40) != 0 )
    {
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 8);
        v12 = (unsigned int)(*(_DWORD *)(v10 + 4) - 12);
      }
      else
      {
        v12 = 0LL;
        LOBYTE(v11) = 0;
      }
      v13 = (const wchar_t *)&unk_1C006A690;
      v14 = (const wchar_t *)&unk_1C006A690;
      if ( *(_QWORD *)(a1 + 5888) )
        v14 = *(const wchar_t **)(a1 + 5888);
      if ( v8 )
        v13 = v8;
      McTemplateK0qjzzzqqqqbr8uuq_EtwWriteTransfer(
        (__int64)v14,
        (__int64)v13,
        v12,
        *(_DWORD *)(a1 + 56),
        (__int64)&v16,
        *((const wchar_t **)&v15 + 1),
        v13,
        v14,
        *(_DWORD *)(a1 + 5900),
        *(_DWORD *)(a1 + 5896),
        v11,
        v12,
        (v10 + 12) & -(__int64)(v10 != 0),
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
