/*
 * XREFs of StorLogRegisterMFNDInterface @ 0x1C003E5EC
 * Callers:
 *     RaidAdapterRegisterMFNDInterface @ 0x1C0037434 (RaidAdapterRegisterMFNDInterface.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzq_EtwWriteTransfer @ 0x1C0032AFC (McTemplateK0qjzzzq_EtwWriteTransfer.c)
 */

void __fastcall StorLogRegisterMFNDInterface(__int64 a1, int a2)
{
  __int128 v3; // xmm1
  const wchar_t *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  const wchar_t *v9; // rax
  const wchar_t *v10; // rcx
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  __int128 v12; // [rsp+60h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v3 = *(_OWORD *)(a1 + 5000);
    v4 = *(const wchar_t **)(a1 + 5016);
    v5 = *(_QWORD *)(a1 + 16);
    v12 = v3;
    v11 = 0LL;
    RaidDriverGetName(v5, (__int64)&v11);
    if ( (byte_1C0092A07 & 8) != 0 )
    {
      v9 = (const wchar_t *)&unk_1C0081788;
      if ( a2 < 0 )
        v10 = (const wchar_t *)&unk_1C0081788;
      else
        v10 = *(const wchar_t **)(v8 + 5952);
      if ( v4 )
        v9 = v4;
      McTemplateK0qjzzzq_EtwWriteTransfer(
        (__int64)v10,
        v6,
        v7,
        *(_DWORD *)(v8 + 56),
        (__int64)&v12,
        *((const wchar_t **)&v11 + 1),
        v9,
        v10,
        a2);
    }
  }
}
