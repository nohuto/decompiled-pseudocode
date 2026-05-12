/*
 * XREFs of StorLogMFNDQueryChildPFProperty @ 0x1C007653C
 * Callers:
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C00AC84C (StorQueryMFNDChildPFGlobalProperty.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzhhuuuuuq_EtwWriteTransfer @ 0x1C00755C8 (McTemplateK0qjzzzhhuuuuuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDQueryChildPFProperty(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm1
  const wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r11
  char v12; // r10
  char v13; // r9
  __int16 v14; // r14
  __int16 v15; // bx
  const wchar_t *v16; // rdx
  const wchar_t *v17; // rcx
  __int128 v18; // [rsp+80h] [rbp-48h] BYREF
  __int128 v19; // [rsp+90h] [rbp-38h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v7 = *(_OWORD *)(a1 + 5000);
    v8 = *(const wchar_t **)(a1 + 5016);
    v9 = *(_QWORD *)(a1 + 16);
    v19 = v7;
    v18 = 0LL;
    RaidDriverGetName(v9, (__int64)&v18);
    if ( byte_1C0092A03 < 0 )
    {
      if ( a2 )
      {
        v12 = *(_BYTE *)(a2 + 10);
        v13 = *(_BYTE *)(a2 + 9);
        LOBYTE(v10) = *(_BYTE *)(a2 + 8);
        v14 = *(_WORD *)(a2 + 6);
        v15 = *(_WORD *)(a2 + 4);
      }
      else
      {
        v12 = 0;
        v13 = 0;
        LOBYTE(v10) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
      }
      v16 = (const wchar_t *)&unk_1C0081788;
      v17 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(v11 + 5952) )
        v17 = *(const wchar_t **)(v11 + 5952);
      if ( v8 )
        v16 = v8;
      McTemplateK0qjzzzhhuuuuuq_EtwWriteTransfer(
        (__int64)v17,
        &EventMFNDQueryChildPFProperty,
        v10,
        *(_DWORD *)(v11 + 56),
        (__int64)&v19,
        *((const wchar_t **)&v18 + 1),
        v16,
        v17,
        v15,
        v14,
        v10,
        v13,
        v12,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
