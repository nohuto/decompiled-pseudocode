/*
 * XREFs of sub_1C0077460 @ 0x1C0077460
 * Callers:
 *     sub_1C00AFB40 @ 0x1C00AFB40 (sub_1C00AFB40.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00754BC @ 0x1C00754BC (sub_1C00754BC.c)
 */

void __fastcall sub_1C0077460(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  int v7; // ebx
  __int128 v8; // xmm0
  const wchar_t *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r9
  char v13; // r15
  __int16 v14; // r12
  __int16 v15; // r13
  char v16; // r10
  __int16 v17; // ax
  __int16 v18; // r11
  const wchar_t *v19; // r8
  const wchar_t *v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // [rsp+E0h] [rbp-88h]
  __int16 v23; // [rsp+E4h] [rbp-84h]
  __int16 v24; // [rsp+E8h] [rbp-80h]
  __int16 v25; // [rsp+ECh] [rbp-7Ch]
  __int16 v26; // [rsp+F0h] [rbp-78h]
  __int16 v27; // [rsp+F4h] [rbp-74h]
  __int16 v28; // [rsp+F8h] [rbp-70h]
  __int16 v29; // [rsp+FCh] [rbp-6Ch]
  __int16 v30; // [rsp+100h] [rbp-68h]
  char v31; // [rsp+104h] [rbp-64h]
  __int128 v32; // [rsp+108h] [rbp-60h] BYREF
  __int128 v33; // [rsp+118h] [rbp-50h] BYREF

  if ( byte_1C0093BE8 )
  {
    v32 = 0LL;
    v7 = a2 ? *(unsigned __int16 *)(a2 + 24) + *(unsigned __int16 *)(a2 + 26) : 0;
    v8 = *(_OWORD *)(a1 + 5000);
    v9 = *(const wchar_t **)(a1 + 5016);
    v10 = *(_QWORD *)(a1 + 16);
    v33 = v8;
    sub_1C0010EE0(v10, (__int64)&v32);
    if ( (byte_1C0093A07 & 0x20) != 0 )
    {
      v12 = (v11 + 60) & -(__int64)(v11 != 0);
      if ( v11 )
      {
        v13 = *(_BYTE *)(v11 + 52);
        v14 = *(_WORD *)(v11 + 50);
        v15 = *(_WORD *)(v11 + 48);
        v16 = *(_BYTE *)(v11 + 42);
        v22 = *(_WORD *)(v11 + 46);
        v23 = *(_WORD *)(v11 + 44);
        v24 = *(_WORD *)(v11 + 40);
        v25 = *(_WORD *)(v11 + 38);
        v26 = *(_WORD *)(v11 + 36);
        v27 = *(_WORD *)(v11 + 32);
        v28 = *(_WORD *)(v11 + 30);
        v29 = *(_WORD *)(v11 + 28);
        v30 = *(_WORD *)(v11 + 26);
        v17 = *(_WORD *)(v11 + 24);
        v18 = *(_WORD *)(v11 + 8);
        v31 = v17;
      }
      else
      {
        v13 = 0;
        LOBYTE(v22) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v23) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v24) = 0;
        v16 = 0;
        LOBYTE(v25) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v18) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v30) = 0;
        v31 = 0;
      }
      v19 = (const wchar_t *)&unk_1C0082788;
      v20 = (const wchar_t *)&unk_1C0082788;
      v21 = a3;
      if ( *(_QWORD *)(a1 + 5952) )
        v20 = *(const wchar_t **)(a1 + 5952);
      if ( v9 )
        v19 = v9;
      LOWORD(v21) = a3 >> 9;
      LOBYTE(v21) = (a3 >> 9) & 7;
      sub_1C00754BC(
        v21,
        &stru_1C0088FB8,
        (__int64)v19,
        *(_DWORD *)(a1 + 56),
        (__int64)&v33,
        *((const wchar_t **)&v32 + 1),
        v19,
        v20,
        v18,
        v31,
        v30,
        v29,
        v28,
        v27,
        v26,
        v25,
        v24,
        v16,
        v23,
        v22,
        v15,
        v14,
        v13,
        24 * v7,
        v12,
        a3 >> 1,
        v21,
        a4);
    }
  }
}
