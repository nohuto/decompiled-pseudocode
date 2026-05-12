/*
 * XREFs of StorLogMFNDNameSpaceWrite @ 0x1C003E15C
 * Callers:
 *     RaidAdapterMFNDNameSpaceWrite @ 0x1C0036658 (RaidAdapterMFNDNameSpaceWrite.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzqqqxqqquuq_EtwWriteTransfer @ 0x1C00331C8 (McTemplateK0qjzzzqqqxqqquuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDNameSpaceWrite(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        char a5,
        char a6,
        unsigned __int16 a7,
        int a8)
{
  __int128 v11; // xmm1
  const wchar_t *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r11
  const wchar_t *v15; // r9
  __int64 v16; // rcx
  const wchar_t *v17; // rdx
  const wchar_t *v18; // r9
  __int64 v19; // rcx
  const wchar_t *v20; // rdx
  __int128 v21; // [rsp+90h] [rbp-38h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v11 = *(_OWORD *)(a1 + 5000);
    v12 = *(const wchar_t **)(a1 + 5016);
    v13 = *(_QWORD *)(a1 + 16);
    v22 = v11;
    v21 = 0LL;
    RaidDriverGetName(v13, (__int64)&v21);
    if ( a8 >= 0 )
    {
      if ( byte_1C0092A03 < 0 )
      {
        v18 = (const wchar_t *)&unk_1C0081788;
        v19 = a7;
        v20 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(v14 + 5952) )
          v20 = *(const wchar_t **)(v14 + 5952);
        if ( v12 )
          v18 = v12;
        LOWORD(v19) = a7 >> 1;
        McTemplateK0qjzzzqqqxqqquuq_EtwWriteTransfer(
          v19,
          &EventMFNDNameSpaceWriteSuccess,
          (unsigned int)a8,
          *(_DWORD *)(v14 + 56),
          (__int64)&v22,
          *((const wchar_t **)&v21 + 1),
          v18,
          v20,
          *(_DWORD *)(v14 + 5964),
          *(_DWORD *)(v14 + 5960),
          a2,
          a3,
          a4,
          a5,
          a6,
          a7 >> 1,
          (a7 >> 9) & 7,
          a8);
      }
    }
    else if ( (byte_1C0092A07 & 0x10) != 0 )
    {
      v15 = (const wchar_t *)&unk_1C0081788;
      v16 = a7;
      v17 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(v14 + 5952) )
        v17 = *(const wchar_t **)(v14 + 5952);
      if ( v12 )
        v15 = v12;
      LOWORD(v16) = a7 >> 1;
      McTemplateK0qjzzzqqqxqqquuq_EtwWriteTransfer(
        v16,
        &EventMFNDNameSpaceWriteFailure,
        (unsigned int)a8,
        *(_DWORD *)(v14 + 56),
        (__int64)&v22,
        *((const wchar_t **)&v21 + 1),
        v15,
        v17,
        *(_DWORD *)(v14 + 5964),
        *(_DWORD *)(v14 + 5960),
        a2,
        a3,
        a4,
        a5,
        a6,
        a7 >> 1,
        (a7 >> 9) & 7,
        a8);
    }
  }
}
