/*
 * XREFs of StorLogMFNDNSPageMapControl @ 0x1C003DE04
 * Callers:
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x1C0036438 (RaidAdapterMFNDNameSpacePageMapControl.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzqqqquuq_EtwWriteTransfer @ 0x1C0033000 (McTemplateK0qjzzzqqqquuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDNSPageMapControl(__int64 a1, char a2, char a3, unsigned __int16 a4, int a5)
{
  __int128 v8; // xmm1
  const wchar_t *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r11
  const EVENT_DESCRIPTOR *v12; // rdx
  const wchar_t *v13; // r8
  const wchar_t *v14; // rcx
  char v15; // [rsp+70h] [rbp-48h]
  __int128 v16; // [rsp+80h] [rbp-38h] BYREF
  __int128 v17; // [rsp+90h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v8 = *(_OWORD *)(a1 + 5000);
    v9 = *(const wchar_t **)(a1 + 5016);
    v10 = *(_QWORD *)(a1 + 16);
    v17 = v8;
    v16 = 0LL;
    RaidDriverGetName(v10, (__int64)&v16);
    if ( a5 >= 0 )
    {
      if ( byte_1C0092A03 >= 0 )
        return;
      v15 = a5;
      v12 = (const EVENT_DESCRIPTOR *)&EventMFNDNameSpacePageMapControlSuccess;
    }
    else
    {
      if ( (byte_1C0092A07 & 0x10) == 0 )
        return;
      v15 = a5;
      v12 = (const EVENT_DESCRIPTOR *)&EventMFNDNameSpacePageMapControlFailure;
    }
    v13 = (const wchar_t *)&unk_1C0081788;
    v14 = (const wchar_t *)&unk_1C0081788;
    if ( *(_QWORD *)(v11 + 5952) )
      v14 = *(const wchar_t **)(v11 + 5952);
    if ( v9 )
      v13 = v9;
    McTemplateK0qjzzzqqqquuq_EtwWriteTransfer(
      (__int64)v14,
      v12,
      (__int64)v13,
      *(_DWORD *)(v11 + 56),
      (__int64)&v17,
      *((const wchar_t **)&v16 + 1),
      v13,
      v14,
      *(_DWORD *)(v11 + 5964),
      *(_DWORD *)(v11 + 5960),
      a2,
      a3,
      a4 >> 1,
      (a4 >> 9) & 7,
      v15);
  }
}
