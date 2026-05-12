/*
 * XREFs of sub_1C003E284 @ 0x1C003E284
 * Callers:
 *     sub_1C0036834 @ 0x1C0036834 (sub_1C0036834.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0033334 @ 0x1C0033334 (sub_1C0033334.c)
 */

void __fastcall sub_1C003E284(__int64 a1, char a2, char a3, char a4, unsigned __int16 a5, char a6)
{
  __int128 v9; // xmm1
  const wchar_t *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r11
  const wchar_t *v13; // r10
  __int64 v14; // rcx
  const wchar_t *v15; // r8
  __int128 v16; // [rsp+80h] [rbp-38h] BYREF
  __int128 v17; // [rsp+90h] [rbp-28h] BYREF

  if ( byte_1C0093BE8 )
  {
    v9 = *(_OWORD *)(a1 + 5000);
    v10 = *(const wchar_t **)(a1 + 5016);
    v11 = *(_QWORD *)(a1 + 16);
    v17 = v9;
    v16 = 0LL;
    sub_1C0010EE0(v11, (__int64)&v16);
    if ( (byte_1C0093A07 & 0x20) != 0 )
    {
      v13 = (const wchar_t *)&unk_1C0082788;
      v14 = a5;
      v15 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(v12 + 5952) )
        v15 = *(const wchar_t **)(v12 + 5952);
      if ( v10 )
        v13 = v10;
      LOWORD(v14) = a5 >> 9;
      LOBYTE(v14) = (a5 >> 9) & 7;
      sub_1C0033334(
        v14,
        &stru_1C00890E8,
        (__int64)v15,
        *(_DWORD *)(v12 + 56),
        (__int64)&v17,
        *((const wchar_t **)&v16 + 1),
        v13,
        v15,
        *(_DWORD *)(v12 + 5964),
        *(_DWORD *)(v12 + 5960),
        a2,
        a3,
        a4,
        a5 >> 1,
        v14,
        a6);
    }
  }
}
