/*
 * XREFs of StorLogMFNDQueryCCQueuesState @ 0x1C0075FC8
 * Callers:
 *     StorQueryMFNDChildPFQueuesState @ 0x1C00ACE44 (StorQueryMFNDChildPFQueuesState.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qjzzzhhhhhhhhhuhhhhuqbr20uuq_EtwWriteTransfer @ 0x1C0074C8C (McTemplateK0qjzzzhhhhhhhhhuhhhhuqbr20uuq_EtwWriteTransfer.c)
 */

void __fastcall StorLogMFNDQueryCCQueuesState(__int64 a1, char a2, __int64 a3, unsigned __int16 a4, char a5)
{
  __int128 v8; // xmm1
  const wchar_t *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r9
  char v13; // r15
  int v14; // ecx
  __int16 v15; // r12
  __int16 v16; // r13
  char v17; // r14
  __int16 v18; // ax
  __int16 v19; // bx
  int v20; // r10d
  const wchar_t *v21; // r8
  const wchar_t *v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // [rsp+E0h] [rbp-88h]
  __int16 v25; // [rsp+E4h] [rbp-84h]
  __int16 v26; // [rsp+E8h] [rbp-80h]
  __int16 v27; // [rsp+ECh] [rbp-7Ch]
  __int16 v28; // [rsp+F0h] [rbp-78h]
  __int16 v29; // [rsp+F4h] [rbp-74h]
  __int16 v30; // [rsp+F8h] [rbp-70h]
  __int16 v31; // [rsp+FCh] [rbp-6Ch]
  char v32; // [rsp+100h] [rbp-68h]
  __int128 v33; // [rsp+108h] [rbp-60h] BYREF
  __int128 v34; // [rsp+118h] [rbp-50h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v8 = *(_OWORD *)(a1 + 5000);
    v9 = *(const wchar_t **)(a1 + 5016);
    v10 = *(_QWORD *)(a1 + 16);
    v34 = v8;
    v33 = 0LL;
    RaidDriverGetName(v10, (__int64)&v33);
    if ( byte_1C0092A03 < 0 )
    {
      v12 = (a3 + 44) & -(__int64)(a3 != 0);
      if ( a3 )
      {
        v13 = *(_BYTE *)(a3 + 36);
        v14 = *(unsigned __int16 *)(a3 + 8) + *(unsigned __int16 *)(a3 + 10);
        v15 = *(_WORD *)(a3 + 34);
        v16 = *(_WORD *)(a3 + 32);
        v17 = *(_BYTE *)(a3 + 26);
        v24 = *(_WORD *)(a3 + 30);
        v25 = *(_WORD *)(a3 + 28);
        v26 = *(_WORD *)(a3 + 24);
        v27 = *(_WORD *)(a3 + 22);
        v28 = *(_WORD *)(a3 + 20);
        v29 = *(_WORD *)(a3 + 16);
        v30 = *(_WORD *)(a3 + 14);
        v31 = *(_WORD *)(a3 + 12);
        v18 = *(_WORD *)(a3 + 10);
        v19 = *(_WORD *)(a3 + 8);
        v32 = v18;
        v20 = 24 * v14;
      }
      else
      {
        v20 = 0;
        LOBYTE(v24) = 0;
        v13 = 0;
        LOBYTE(v25) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v16) = 0;
        LOBYTE(v27) = 0;
        v17 = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v19) = 0;
        LOBYTE(v30) = 0;
        LOBYTE(v31) = 0;
        v32 = 0;
      }
      v21 = (const wchar_t *)&unk_1C0081788;
      v22 = (const wchar_t *)&unk_1C0081788;
      v23 = a4;
      if ( *(_QWORD *)(v11 + 5952) )
        v22 = *(const wchar_t **)(v11 + 5952);
      if ( v9 )
        v21 = v9;
      LOWORD(v23) = a4 >> 9;
      LOBYTE(v23) = (a4 >> 9) & 7;
      McTemplateK0qjzzzhhhhhhhhhuhhhhuqbr20uuq_EtwWriteTransfer(
        v23,
        &EventMFNDQueryCCQueuesState,
        (__int64)v21,
        *(_DWORD *)(v11 + 56),
        (__int64)&v34,
        *((const wchar_t **)&v33 + 1),
        v21,
        v22,
        a2,
        v19,
        v32,
        v31,
        v30,
        v29,
        v28,
        v27,
        v26,
        v17,
        v25,
        v24,
        v16,
        v15,
        v13,
        v20,
        v12,
        a4 >> 1,
        v23,
        a5);
    }
  }
}
