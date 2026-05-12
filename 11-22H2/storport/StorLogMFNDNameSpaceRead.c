/*
 * XREFs of StorLogMFNDNameSpaceRead @ 0x1C003DF64
 * Callers:
 *     RaidAdapterMFNDNameSpaceRead @ 0x1C0036530 (RaidAdapterMFNDNameSpaceRead.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzqqqxqquuq_EtwWriteTransfer @ 0x1C00333D8 (McTemplateK0qjzzzqqqxqquuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDNameSpaceRead(__int64 a1, char a2, char a3, char a4, char a5, unsigned __int16 a6, int a7)
{
  __int128 v10; // xmm1
  const wchar_t *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r11
  const wchar_t *v14; // r9
  __int64 v15; // rcx
  const wchar_t *v16; // rdx
  const wchar_t *v17; // r9
  __int64 v18; // rcx
  const wchar_t *v19; // rdx
  __int128 v20; // [rsp+90h] [rbp-38h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v10 = *(_OWORD *)(a1 + 5000);
    v11 = *(const wchar_t **)(a1 + 5016);
    v12 = *(_QWORD *)(a1 + 16);
    v21 = v10;
    v20 = 0LL;
    RaidDriverGetName(v12, (__int64)&v20);
    if ( a7 >= 0 )
    {
      if ( byte_1C0092A03 < 0 )
      {
        v17 = (const wchar_t *)&unk_1C0081788;
        v18 = a6;
        v19 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(v13 + 5952) )
          v19 = *(const wchar_t **)(v13 + 5952);
        if ( v11 )
          v17 = v11;
        LOWORD(v18) = a6 >> 1;
        McTemplateK0qjzzzqqqxqquuq_EtwWriteTransfer(
          v18,
          &EventMFNDNameSpaceReadSuccess,
          (unsigned int)a7,
          *(_DWORD *)(v13 + 56),
          (__int64)&v21,
          *((const wchar_t **)&v20 + 1),
          v17,
          v19,
          *(_DWORD *)(v13 + 5964),
          *(_DWORD *)(v13 + 5960),
          a2,
          a3,
          a4,
          a5,
          a6 >> 1,
          (a6 >> 9) & 7,
          a7);
      }
    }
    else if ( (byte_1C0092A07 & 0x10) != 0 )
    {
      v14 = (const wchar_t *)&unk_1C0081788;
      v15 = a6;
      v16 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(v13 + 5952) )
        v16 = *(const wchar_t **)(v13 + 5952);
      if ( v11 )
        v14 = v11;
      LOWORD(v15) = a6 >> 1;
      McTemplateK0qjzzzqqqxqquuq_EtwWriteTransfer(
        v15,
        &EventMFNDNameSpaceReadFailure,
        (unsigned int)a7,
        *(_DWORD *)(v13 + 56),
        (__int64)&v21,
        *((const wchar_t **)&v20 + 1),
        v14,
        v16,
        *(_DWORD *)(v13 + 5964),
        *(_DWORD *)(v13 + 5960),
        a2,
        a3,
        a4,
        a5,
        a6 >> 1,
        (a6 >> 9) & 7,
        a7);
    }
  }
}
