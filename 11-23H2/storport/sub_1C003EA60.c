/*
 * XREFs of sub_1C003EA60 @ 0x1C003EA60
 * Callers:
 *     sub_1C00377A4 @ 0x1C00377A4 (sub_1C00377A4.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0033158 @ 0x1C0033158 (sub_1C0033158.c)
 */

void __fastcall sub_1C003EA60(__int64 a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int128 v8; // xmm1
  const wchar_t *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rax
  __int16 v13; // r9
  const wchar_t *v14; // r8
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // [rsp+80h] [rbp-38h] BYREF
  __int128 v18; // [rsp+90h] [rbp-28h] BYREF

  if ( byte_1C0093BE8 )
  {
    v8 = *(_OWORD *)(a1 + 5000);
    v9 = *(const wchar_t **)(a1 + 5016);
    v10 = *(_QWORD *)(a1 + 16);
    v18 = v8;
    v17 = 0LL;
    sub_1C0010EE0(v10, (__int64)&v17);
    if ( (byte_1C0093A07 & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(v11 + 5968);
      if ( v12 )
        v13 = *(_WORD *)(v12 + 8);
      else
        LOBYTE(v13) = -1;
      v14 = (const wchar_t *)&unk_1C0082788;
      v15 = (const wchar_t *)&unk_1C0082788;
      v16 = a4;
      if ( *(_QWORD *)(v11 + 5952) )
        v15 = *(const wchar_t **)(v11 + 5952);
      if ( v9 )
        v14 = v9;
      LOWORD(v16) = a4 >> 9;
      LOBYTE(v16) = (a4 >> 9) & 7;
      sub_1C0033158(
        v16,
        (__int64)v15,
        (__int64)v14,
        *(_DWORD *)(v11 + 56),
        (__int64)&v18,
        *((const wchar_t **)&v17 + 1),
        v14,
        v15,
        *(_DWORD *)(v11 + 5964),
        *(_DWORD *)(v11 + 5960),
        a2,
        a3,
        v13,
        a4 >> 1,
        v16,
        a5);
    }
  }
}
