/*
 * XREFs of sub_1C003EBBC @ 0x1C003EBBC
 * Callers:
 *     sub_1C0037944 @ 0x1C0037944 (sub_1C0037944.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0033010 @ 0x1C0033010 (sub_1C0033010.c)
 */

void __fastcall sub_1C003EBBC(__int64 a1, int a2)
{
  __int128 v3; // xmm1
  const wchar_t *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  const wchar_t *v9; // rax
  const wchar_t *v10; // rcx
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  __int128 v12; // [rsp+60h] [rbp-28h] BYREF

  if ( byte_1C0093BE8 )
  {
    v3 = *(_OWORD *)(a1 + 5000);
    v4 = *(const wchar_t **)(a1 + 5016);
    v5 = *(_QWORD *)(a1 + 16);
    v12 = v3;
    v11 = 0LL;
    sub_1C0010EE0(v5, (__int64)&v11);
    if ( (byte_1C0093A07 & 0x20) != 0 )
    {
      v9 = (const wchar_t *)&unk_1C0082788;
      if ( a2 < 0 )
        v10 = (const wchar_t *)&unk_1C0082788;
      else
        v10 = *(const wchar_t **)(v8 + 5952);
      if ( v4 )
        v9 = v4;
      sub_1C0033010(
        (__int64)v10,
        v6,
        v7,
        *(_DWORD *)(v8 + 56),
        (__int64)&v12,
        *((const wchar_t **)&v11 + 1),
        v9,
        v10,
        a2);
    }
  }
}
