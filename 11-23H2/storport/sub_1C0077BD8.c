/*
 * XREFs of sub_1C0077BD8 @ 0x1C0077BD8
 * Callers:
 *     sub_1C00AFE68 @ 0x1C00AFE68 (sub_1C00AFE68.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00757B4 @ 0x1C00757B4 (sub_1C00757B4.c)
 */

void __fastcall sub_1C0077BD8(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
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
  int v22; // [rsp+F0h] [rbp-78h]
  int v23; // [rsp+F4h] [rbp-74h]
  int v24; // [rsp+F8h] [rbp-70h]
  int v25; // [rsp+FCh] [rbp-6Ch]
  int v26; // [rsp+100h] [rbp-68h]
  int v27; // [rsp+104h] [rbp-64h]
  __int16 v28; // [rsp+108h] [rbp-60h]
  __int16 v29; // [rsp+10Ch] [rbp-5Ch]
  __int16 v30; // [rsp+110h] [rbp-58h]
  __int128 v31; // [rsp+118h] [rbp-50h] BYREF
  __int128 v32; // [rsp+128h] [rbp-40h] BYREF

  if ( byte_1C0093BE8 )
  {
    v7 = *(_OWORD *)(a1 + 5000);
    v8 = *(const wchar_t **)(a1 + 5016);
    v9 = *(_QWORD *)(a1 + 16);
    v32 = v7;
    v31 = 0LL;
    sub_1C0010EE0(v9, (__int64)&v31);
    if ( (byte_1C0093A07 & 0x20) != 0 )
    {
      LOBYTE(v11) = 0;
      if ( a2 )
      {
        v12 = *(_DWORD *)(a2 + 64);
        v13 = *(_DWORD *)(a2 + 60);
        v14 = *(_DWORD *)(a2 + 52);
        v15 = *(_DWORD *)(a2 + 44);
        v16 = *(_DWORD *)(a2 + 40);
        v17 = *(_DWORD *)(a2 + 36);
        v18 = *(unsigned int *)(a2 + 32);
        v22 = *(_DWORD *)(a2 + 88);
        v23 = *(_DWORD *)(a2 + 84);
        v24 = *(_DWORD *)(a2 + 80);
        v25 = *(_DWORD *)(a2 + 76);
        v26 = *(_DWORD *)(a2 + 72);
        v27 = *(_DWORD *)(a2 + 68);
        v28 = *(_WORD *)(a2 + 26);
        v29 = *(_WORD *)(a2 + 24);
        v30 = *(_WORD *)(a2 + 22);
        v11 = *(_WORD *)(a2 + 20);
        v19 = *(_WORD *)(a2 + 8);
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
        v18 = 0LL;
        LOBYTE(v28) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v19) = 0;
        LOBYTE(v30) = 0;
      }
      v20 = (const wchar_t *)&unk_1C0082788;
      v21 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(v10 + 5952) )
        v21 = *(const wchar_t **)(v10 + 5952);
      if ( v8 )
        v20 = v8;
      sub_1C00757B4(
        (__int64)v21,
        (__int64)v20,
        v18,
        *(_DWORD *)(v10 + 56),
        (__int64)&v32,
        *((const wchar_t **)&v31 + 1),
        v20,
        v21,
        v19,
        v11,
        v30,
        v29,
        v28,
        v18,
        v17,
        v16,
        v15,
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
