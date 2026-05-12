/*
 * XREFs of sub_1C0078014 @ 0x1C0078014
 * Callers:
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00B0368 @ 0x1C00B0368 (sub_1C00B0368.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00765A0 @ 0x1C00765A0 (sub_1C00765A0.c)
 */

__int16 __fastcall sub_1C0078014(__int64 a1, char a2, char a3, char a4, unsigned __int16 a5, char a6)
{
  __int128 v10; // xmm1
  const wchar_t *v11; // rdi
  __int64 v12; // rcx
  __int16 result; // ax
  __int64 v14; // rcx
  const wchar_t *v15; // r11
  __int64 v16; // r8
  const wchar_t *v17; // r10
  __int64 v18; // rdx
  __int128 v19; // [rsp+70h] [rbp-48h] BYREF
  __int128 v20; // [rsp+80h] [rbp-38h] BYREF

  if ( byte_1C0093BE8 )
  {
    v10 = *(_OWORD *)(a1 + 5000);
    v11 = *(const wchar_t **)(a1 + 5016);
    v12 = *(_QWORD *)(a1 + 16);
    v20 = v10;
    v19 = 0LL;
    result = sub_1C0010EE0(v12, (__int64)&v19);
    if ( (byte_1C0093A07 & 0x20) != 0 )
    {
      v15 = (const wchar_t *)&unk_1C0082788;
      v16 = a5;
      v17 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(a1 + 5952) )
        v17 = *(const wchar_t **)(a1 + 5952);
      v18 = a5;
      if ( v11 )
        v15 = v11;
      LOWORD(v18) = a5 >> 9;
      LOBYTE(v18) = (a5 >> 9) & 7;
      LOWORD(v16) = a5 >> 1;
      return sub_1C00765A0(
               v14,
               v18,
               v16,
               *(_DWORD *)(a1 + 56),
               (__int64)&v20,
               *((const wchar_t **)&v19 + 1),
               v15,
               v17,
               a2,
               a3,
               a4,
               a5 >> 1,
               v18,
               a6);
    }
  }
  return result;
}
