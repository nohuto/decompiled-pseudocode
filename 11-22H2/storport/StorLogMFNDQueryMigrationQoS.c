/*
 * XREFs of StorLogMFNDQueryMigrationQoS @ 0x1C0076990
 * Callers:
 *     StorQueryMFNDMigrationQoS @ 0x1C00AD4EC (StorQueryMFNDMigrationQoS.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer @ 0x1C0032E20 (McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDQueryMigrationQoS(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm1
  const wchar_t *v8; // r14
  __int64 v9; // rcx
  unsigned int *v10; // r11
  unsigned int v11; // ebp
  unsigned int v12; // esi
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  __int64 v15; // r8
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
      if ( v10 )
      {
        v11 = v10[6];
        v12 = v10[5];
        v13 = v10[4];
        v14 = v10[3];
        v15 = v10[2];
      }
      else
      {
        LOBYTE(v11) = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v14) = 0;
        v15 = 0LL;
      }
      v16 = (const wchar_t *)&unk_1C0081788;
      v17 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(a1 + 5952) )
        v17 = *(const wchar_t **)(a1 + 5952);
      if ( v8 )
        v16 = v8;
      McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer(
        (__int64)v17,
        &EventMFNDQueryMigrationQoS,
        v15,
        *(_DWORD *)(a1 + 56),
        (__int64)&v19,
        *((const wchar_t **)&v18 + 1),
        v16,
        v17,
        v15,
        v14,
        v13,
        v12,
        v11,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
