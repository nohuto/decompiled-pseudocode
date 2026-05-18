/*
 * XREFs of sub_1800020C8 @ 0x1800020C8
 * Callers:
 *     sub_180023CD0 @ 0x180023CD0 (sub_180023CD0.c)
 * Callees:
 *     sub_180001554 @ 0x180001554 (sub_180001554.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800020C8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  _BYTE *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  _BYTE *v24; // rcx
  int v25; // edx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  _BYTE *v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+9Ch] [rbp-64h]
  _BYTE *v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]

  v51 = a15;
  v16 = -1LL;
  v49 = a14;
  v47 = a13;
  v45 = a12;
  v43 = a11;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v17 = *a10;
  v46 = 4LL;
  v44 = 8LL;
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_180106082;
    v19 = 1;
  }
  v41 = v19;
  v40 = v17;
  v42 = 0;
  v20 = *a9;
  if ( *a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v20 = &unk_180106082;
    v22 = 1;
  }
  v38 = v22;
  v37 = v20;
  v39 = 0;
  v36 = 16LL;
  v35 = *a8;
  v34 = 16LL;
  v32 = 4LL;
  v23 = *a7;
  v31 = a6;
  v33 = v23;
  v24 = *a5;
  if ( *a5 )
  {
    do
      ++v16;
    while ( v24[v16] );
    v25 = v16 + 1;
  }
  else
  {
    v24 = &unk_180106082;
    v25 = 1;
  }
  v28 = v24;
  v29 = v25;
  v30 = 0;
  return sub_180001554((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 0xDu, &v27);
}
