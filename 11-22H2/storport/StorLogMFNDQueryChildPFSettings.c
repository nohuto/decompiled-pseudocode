/*
 * XREFs of StorLogMFNDQueryChildPFSettings @ 0x1C007669C
 * Callers:
 *     StorQueryMFNDChildPFSettings @ 0x1C00AD1F0 (StorQueryMFNDChildPFSettings.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzhhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer @ 0x1C0075298 (McTemplateK0qjzzzhhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDQueryChildPFSettings(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm1
  const wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r11
  __int16 v11; // ax
  int v12; // r13d
  int v13; // r12d
  int v14; // r15d
  int v15; // r14d
  int v16; // r10d
  int v17; // r9d
  __int64 v18; // r8
  __int16 v19; // di
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rcx
  int v22; // [rsp+F0h] [rbp-88h]
  int v23; // [rsp+F4h] [rbp-84h]
  int v24; // [rsp+F8h] [rbp-80h]
  int v25; // [rsp+FCh] [rbp-7Ch]
  int v26; // [rsp+100h] [rbp-78h]
  int v27; // [rsp+104h] [rbp-74h]
  __int16 v28; // [rsp+108h] [rbp-70h]
  __int16 v29; // [rsp+10Ch] [rbp-6Ch]
  __int16 v30; // [rsp+110h] [rbp-68h]
  __int16 v31; // [rsp+114h] [rbp-64h]
  __int128 v32; // [rsp+120h] [rbp-58h] BYREF
  __int128 v33; // [rsp+130h] [rbp-48h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v7 = *(_OWORD *)(a1 + 5000);
    v8 = *(const wchar_t **)(a1 + 5016);
    v9 = *(_QWORD *)(a1 + 16);
    v33 = v7;
    v32 = 0LL;
    RaidDriverGetName(v9, (__int64)&v32);
    if ( byte_1C0092A03 < 0 )
    {
      LOBYTE(v11) = 0;
      if ( a2 )
      {
        v12 = *(_DWORD *)(a2 + 48);
        v13 = *(_DWORD *)(a2 + 44);
        v14 = *(_DWORD *)(a2 + 36);
        v15 = *(_DWORD *)(a2 + 28);
        v16 = *(_DWORD *)(a2 + 24);
        v17 = *(_DWORD *)(a2 + 20);
        v18 = *(unsigned int *)(a2 + 16);
        v22 = *(_DWORD *)(a2 + 72);
        v23 = *(_DWORD *)(a2 + 68);
        v24 = *(_DWORD *)(a2 + 64);
        v25 = *(_DWORD *)(a2 + 60);
        v26 = *(_DWORD *)(a2 + 56);
        v27 = *(_DWORD *)(a2 + 52);
        v28 = *(_WORD *)(a2 + 34);
        v29 = *(_WORD *)(a2 + 32);
        v30 = *(_WORD *)(a2 + 10);
        v31 = *(_WORD *)(a2 + 8);
        v11 = *(_WORD *)(a2 + 6);
        v19 = *(_WORD *)(a2 + 4);
      }
      else
      {
        LOBYTE(v22) = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v23) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v24) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v25) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v16) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v28) = 0;
        v18 = 0LL;
        LOBYTE(v29) = 0;
        LOBYTE(v19) = 0;
        LOBYTE(v30) = 0;
        LOBYTE(v31) = 0;
      }
      v20 = (const wchar_t *)&unk_1C0081788;
      v21 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(v10 + 5952) )
        v21 = *(const wchar_t **)(v10 + 5952);
      if ( v8 )
        v20 = v8;
      McTemplateK0qjzzzhhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer(
        (__int64)v21,
        (__int64)v20,
        v18,
        *(_DWORD *)(v10 + 56),
        (__int64)&v33,
        *((const wchar_t **)&v32 + 1),
        v20,
        v21,
        v19,
        v11,
        v31,
        v30,
        v18,
        v17,
        v16,
        v15,
        v29,
        v28,
        v14,
        v13,
        v12,
        v27,
        v26,
        v25,
        v24,
        v23,
        v22,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
