/*
 * XREFs of sub_180001A08 @ 0x180001A08
 * Callers:
 *     sub_1800242D0 @ 0x1800242D0 (sub_1800242D0.c)
 * Callees:
 *     sub_180001554 @ 0x180001554 (sub_180001554.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001A08(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        void **a9,
        void **a10)
{
  __int64 v11; // rdx
  _BYTE *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  _BYTE *v19; // rcx
  int v20; // edx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-49h]
  int v24; // [rsp+58h] [rbp-41h]
  int v25; // [rsp+5Ch] [rbp-3Dh]
  __int64 v26; // [rsp+60h] [rbp-39h]
  __int64 v27; // [rsp+68h] [rbp-31h]
  __int64 v28; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  __int64 v30; // [rsp+80h] [rbp-19h]
  __int64 v31; // [rsp+88h] [rbp-11h]
  _BYTE *v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+98h] [rbp-1h]
  int v34; // [rsp+9Ch] [rbp+3h]
  _BYTE *v35; // [rsp+A0h] [rbp+7h]
  int v36; // [rsp+A8h] [rbp+Fh]
  int v37; // [rsp+ACh] [rbp+13h]

  v11 = -1LL;
  v12 = *a10;
  if ( *a10 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_180106082;
    v14 = 1;
  }
  v36 = v14;
  v35 = v12;
  v37 = 0;
  v15 = *a9;
  if ( *a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &unk_180106082;
    v17 = 1;
  }
  v33 = v17;
  v30 = a8;
  v32 = v15;
  v34 = 0;
  v31 = 4LL;
  v18 = *a7;
  v26 = a6;
  v28 = v18;
  v29 = 16LL;
  v27 = 4LL;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v19[v11] );
    v20 = v11 + 1;
  }
  else
  {
    v19 = &unk_180106082;
    v20 = 1;
  }
  v23 = v19;
  v24 = v20;
  v25 = 0;
  return sub_180001554((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 8u, &v22);
}
