/*
 * XREFs of sub_1C0077A00 @ 0x1C0077A00
 * Callers:
 *     sub_1C00AF8D0 @ 0x1C00AF8D0 (sub_1C00AF8D0.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0075FCC @ 0x1C0075FCC (sub_1C0075FCC.c)
 */

void __fastcall sub_1C0077A00(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm1
  const wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r11
  int v11; // r13d
  int v12; // r12d
  int v13; // r15d
  int v14; // r14d
  int v15; // r10d
  int v16; // r9d
  __int64 v17; // r8
  int v18; // eax
  __int16 v19; // di
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rcx
  int v22; // [rsp+B0h] [rbp-58h]
  char v23; // [rsp+B4h] [rbp-54h]
  __int128 v24; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v25; // [rsp+C8h] [rbp-40h] BYREF

  if ( byte_1C0093BE8 )
  {
    v7 = *(_OWORD *)(a1 + 5000);
    v8 = *(const wchar_t **)(a1 + 5016);
    v9 = *(_QWORD *)(a1 + 16);
    v25 = v7;
    v24 = 0LL;
    sub_1C0010EE0(v9, (__int64)&v24);
    if ( (byte_1C0093A07 & 0x20) != 0 )
    {
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 48);
        v12 = *(_DWORD *)(a2 + 44);
        v13 = *(_DWORD *)(a2 + 40);
        v14 = *(_DWORD *)(a2 + 36);
        v15 = *(_DWORD *)(a2 + 32);
        v16 = *(_DWORD *)(a2 + 28);
        v17 = *(unsigned int *)(a2 + 20);
        v22 = *(_DWORD *)(a2 + 56);
        v18 = *(_DWORD *)(a2 + 52);
        v19 = *(_WORD *)(a2 + 8);
        v23 = v18;
      }
      else
      {
        LOBYTE(v22) = 0;
        LOBYTE(v11) = 0;
        v23 = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
        v17 = 0LL;
        LOBYTE(v19) = 0;
      }
      v20 = (const wchar_t *)&unk_1C0082788;
      v21 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(v10 + 5952) )
        v21 = *(const wchar_t **)(v10 + 5952);
      if ( v8 )
        v20 = v8;
      sub_1C0075FCC(
        (__int64)v21,
        (__int64)v20,
        v17,
        *(_DWORD *)(v10 + 56),
        (__int64)&v25,
        *((const wchar_t **)&v24 + 1),
        v20,
        v21,
        v19,
        v17,
        v16,
        v15,
        v14,
        v13,
        v12,
        v11,
        v23,
        v22,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
