/*
 * XREFs of StorLogMFNDQueryNSPageMap @ 0x1C0076AF8
 * Callers:
 *     StorQueryMFNDNamespacePageMap @ 0x1C00AD6CC (StorQueryMFNDNamespacePageMap.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzqquuq_EtwWriteTransfer @ 0x1C00335D0 (McTemplateK0qjzzzqquuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDQueryNSPageMap(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm1
  const wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r11
  int v11; // r9d
  __int64 v12; // r8
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rcx
  __int128 v15; // [rsp+70h] [rbp-38h] BYREF
  __int128 v16; // [rsp+80h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v7 = *(_OWORD *)(a1 + 5000);
    v8 = *(const wchar_t **)(a1 + 5016);
    v9 = *(_QWORD *)(a1 + 16);
    v16 = v7;
    v15 = 0LL;
    RaidDriverGetName(v9, (__int64)&v15);
    if ( byte_1C0092A03 < 0 )
    {
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 16);
        v12 = *(unsigned int *)(v10 + 8);
      }
      else
      {
        LOBYTE(v11) = 0;
        v12 = 0LL;
      }
      v13 = (const wchar_t *)&unk_1C0081788;
      v14 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(a1 + 5952) )
        v14 = *(const wchar_t **)(a1 + 5952);
      if ( v8 )
        v13 = v8;
      McTemplateK0qjzzzqquuq_EtwWriteTransfer(
        (__int64)v14,
        &EventMFNDQueryNSPageMap,
        v12,
        *(_DWORD *)(a1 + 56),
        (__int64)&v16,
        *((const wchar_t **)&v15 + 1),
        v13,
        v14,
        v12,
        v11,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
