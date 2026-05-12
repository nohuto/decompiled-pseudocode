/*
 * XREFs of sub_1C003E72C @ 0x1C003E72C
 * Callers:
 *     sub_1C0036B68 @ 0x1C0036B68 (sub_1C0036B68.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00336DC @ 0x1C00336DC (sub_1C00336DC.c)
 */

void __fastcall sub_1C003E72C(__int64 a1, char a2, char a3, char a4, char a5, char a6, unsigned __int16 a7, int a8)
{
  __int128 v11; // xmm1
  const wchar_t *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r11
  const wchar_t *v15; // r9
  __int64 v16; // rcx
  const wchar_t *v17; // rdx
  const wchar_t *v18; // r9
  __int64 v19; // rcx
  const wchar_t *v20; // rdx
  __int128 v21; // [rsp+90h] [rbp-38h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-28h] BYREF

  if ( byte_1C0093BE8 )
  {
    v11 = *(_OWORD *)(a1 + 5000);
    v12 = *(const wchar_t **)(a1 + 5016);
    v13 = *(_QWORD *)(a1 + 16);
    v22 = v11;
    v21 = 0LL;
    sub_1C0010EE0(v13, (__int64)&v21);
    if ( a8 >= 0 )
    {
      if ( byte_1C0093A03 < 0 )
      {
        v18 = (const wchar_t *)&unk_1C0082788;
        v19 = a7;
        v20 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(v14 + 5952) )
          v20 = *(const wchar_t **)(v14 + 5952);
        if ( v12 )
          v18 = v12;
        LOWORD(v19) = a7 >> 1;
        sub_1C00336DC(
          v19,
          &stru_1C0088FE8,
          (unsigned int)a8,
          *(_DWORD *)(v14 + 56),
          (__int64)&v22,
          *((const wchar_t **)&v21 + 1),
          v18,
          v20,
          *(_DWORD *)(v14 + 5964),
          *(_DWORD *)(v14 + 5960),
          a2,
          a3,
          a4,
          a5,
          a6,
          a7 >> 1,
          (a7 >> 9) & 7,
          a8);
      }
    }
    else if ( (byte_1C0093A07 & 0x40) != 0 )
    {
      v15 = (const wchar_t *)&unk_1C0082788;
      v16 = a7;
      v17 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(v14 + 5952) )
        v17 = *(const wchar_t **)(v14 + 5952);
      if ( v12 )
        v15 = v12;
      LOWORD(v16) = a7 >> 1;
      sub_1C00336DC(
        v16,
        &stru_1C0089260,
        (unsigned int)a8,
        *(_DWORD *)(v14 + 56),
        (__int64)&v22,
        *((const wchar_t **)&v21 + 1),
        v15,
        v17,
        *(_DWORD *)(v14 + 5964),
        *(_DWORD *)(v14 + 5960),
        a2,
        a3,
        a4,
        a5,
        a6,
        a7 >> 1,
        (a7 >> 9) & 7,
        a8);
    }
  }
}
