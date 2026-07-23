/*
 * XREFs of sub_1403C10B0 @ 0x1403C10B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 *     sub_14082926C @ 0x14082926C (sub_14082926C.c)
 *     sub_140995B08 @ 0x140995B08 (sub_140995B08.c)
 *     sub_1409A4584 @ 0x1409A4584 (sub_1409A4584.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1403C10B0(__int64 *a1, int *a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // r10
  unsigned int v7; // ebx
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // r11
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned int v13; // esi
  unsigned int v14; // ebp
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  GUID v24; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+30h] [rbp-28h]

  v25 = 0;
  v3 = *a1;
  v24 = 0LL;
  v6 = 0x4B00E9D55D3E9A59LL - v3;
  if ( v3 == 0x4B00E9D55D3E9A59LL )
    v6 = 0x486551FF34FFBDA6LL - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v20 = 0x49E5FCA47D263F15LL - v3;
    if ( v3 == 0x49E5FCA47D263F15LL )
      v20 = 0x245CBDBFF2A94B85LL - a1[1];
    if ( v20 )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v8 = 1LL;
  v9 = 0;
  if ( !byte_140C0C644 )
    v9 = byte_140C4EF1C == 0;
  v10 = 0x4B00E9D55D3E9A59LL - v3;
  if ( 0x4B00E9D55D3E9A59LL == v3 )
    v10 = 0x486551FF34FFBDA6LL - a1[1];
  if ( !v10 && byte_140C5AC3C )
  {
    v21 = v9;
    if ( *a2 == 1 )
      v21 = 1;
    v9 = v21;
    if ( dword_140C23F08 )
      v9 = 1;
  }
  v11 = 0x49E5FCA47D263F15LL - *a1;
  if ( !v11 )
    v11 = 0x245CBDBFF2A94B85LL - a1[1];
  if ( v11 )
  {
    if ( v9 )
    {
      v12 = xmmword_14003BEC0;
      v13 = 43;
      v14 = 28;
    }
    else
    {
      v12 = (__int128)stru_140011F28;
      v13 = 5;
      v14 = 5;
    }
    v24 = (GUID)v12;
  }
  else
  {
    if ( !v9 )
      v24 = stru_140011F38;
    v13 = v9 ? 46 : 16;
    v14 = v9 ? 49 : 16;
    if ( v9 )
      goto LABEL_20;
  }
  v25 = *a2;
  sub_140828EBC(0LL, 20LL, &v24);
LABEL_20:
  v15 = sub_14082926C(v11, v8);
  v18 = v15;
  if ( v9 )
  {
    sub_140A48330(v17, v16);
    sub_140995B08(v13);
    sub_140A47CF8(v23, v22);
  }
  else if ( v15 != -1 && (unsigned __int8)sub_1407F0F98(v17, v16) )
  {
    sub_1409A4584(v18, v14);
  }
  return v7;
}
