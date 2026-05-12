/*
 * XREFs of sub_1C003E940 @ 0x1C003E940
 * Callers:
 *     sub_1C003ECD8 @ 0x1C003ECD8 (sub_1C003ECD8.c)
 *     sub_1C00AEC48 @ 0x1C00AEC48 (sub_1C00AEC48.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0033AE4 @ 0x1C0033AE4 (sub_1C0033AE4.c)
 */

__int16 __fastcall sub_1C003E940(__int64 a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int128 v8; // xmm1
  const wchar_t *v9; // rdi
  __int64 v10; // rcx
  __int16 result; // ax
  __int64 v12; // r11
  const wchar_t *v13; // r8
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // [rsp+70h] [rbp-38h] BYREF
  __int128 v17; // [rsp+80h] [rbp-28h] BYREF

  if ( byte_1C0093BE8 )
  {
    v8 = *(_OWORD *)(a1 + 5000);
    v9 = *(const wchar_t **)(a1 + 5016);
    v10 = *(_QWORD *)(a1 + 16);
    v17 = v8;
    v16 = 0LL;
    result = sub_1C0010EE0(v10, (__int64)&v16);
    if ( byte_1C0093A03 < 0 )
    {
      v13 = (const wchar_t *)&unk_1C0082788;
      v14 = (const wchar_t *)&unk_1C0082788;
      v15 = a4;
      if ( *(_QWORD *)(v12 + 5952) )
        v14 = *(const wchar_t **)(v12 + 5952);
      if ( v9 )
        v13 = v9;
      LOWORD(v15) = a4 >> 9;
      LOBYTE(v15) = (a4 >> 9) & 7;
      return sub_1C0033AE4(
               v15,
               &stru_1C0088ED8,
               (__int64)v13,
               *(_DWORD *)(v12 + 56),
               (__int64)&v17,
               *((const wchar_t **)&v16 + 1),
               v13,
               v14,
               a2,
               a3,
               a4 >> 1,
               v15,
               a5);
    }
  }
  return result;
}
