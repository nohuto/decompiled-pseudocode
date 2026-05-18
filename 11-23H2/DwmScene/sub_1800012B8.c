/*
 * XREFs of sub_1800012B8 @ 0x1800012B8
 * Callers:
 *     sub_180021330 @ 0x180021330 (sub_180021330.c)
 * Callees:
 *     sub_180001554 @ 0x180001554 (sub_180001554.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800012B8(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        void **a9,
        __int64 a10)
{
  __int64 v10; // rcx
  _BYTE *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  _BYTE *v14; // r8
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // r8
  int v18; // ecx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v21; // [rsp+50h] [rbp-49h]
  int v22; // [rsp+58h] [rbp-41h]
  int v23; // [rsp+5Ch] [rbp-3Dh]
  __int64 v24; // [rsp+60h] [rbp-39h]
  __int64 v25; // [rsp+68h] [rbp-31h]
  __int64 v26; // [rsp+70h] [rbp-29h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  _BYTE *v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+8Ch] [rbp-Dh]
  _BYTE *v31; // [rsp+90h] [rbp-9h]
  int v32; // [rsp+98h] [rbp-1h]
  int v33; // [rsp+9Ch] [rbp+3h]
  __int64 v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]

  v34 = a10;
  v10 = -1LL;
  v35 = 4LL;
  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = &unk_180106082;
    v13 = 1;
  }
  v32 = v13;
  v31 = v11;
  v33 = 0;
  v14 = *a8;
  if ( *a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_180106082;
    v16 = 1;
  }
  v29 = v16;
  v26 = a7;
  v24 = a6;
  v28 = v14;
  v30 = 0;
  v27 = 4LL;
  v17 = *a5;
  v25 = 8LL;
  if ( v17 )
  {
    do
      ++v10;
    while ( v17[v10] );
    v18 = v10 + 1;
  }
  else
  {
    v17 = &unk_180106082;
    v18 = 1;
  }
  v21 = v17;
  v22 = v18;
  v23 = 0;
  return sub_180001554((int)&dword_1801C8188, a2, 0, 0, 8u, &v20);
}
