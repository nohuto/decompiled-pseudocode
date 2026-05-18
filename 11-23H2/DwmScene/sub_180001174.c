/*
 * XREFs of sub_180001174 @ 0x180001174
 * Callers:
 *     sub_1800213C0 @ 0x1800213C0 (sub_1800213C0.c)
 * Callees:
 *     sub_180001554 @ 0x180001554 (sub_180001554.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001174(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        void **a7,
        void **a8,
        void **a9,
        __int64 a10)
{
  __int64 v11; // rdx
  _BYTE *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // r8
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // r8
  __int64 v19; // rax
  int v20; // eax
  _BYTE *v21; // r8
  int v22; // edx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v25; // [rsp+50h] [rbp-49h]
  int v26; // [rsp+58h] [rbp-41h]
  int v27; // [rsp+5Ch] [rbp-3Dh]
  __int64 v28; // [rsp+60h] [rbp-39h]
  __int64 v29; // [rsp+68h] [rbp-31h]
  _BYTE *v30; // [rsp+70h] [rbp-29h]
  int v31; // [rsp+78h] [rbp-21h]
  int v32; // [rsp+7Ch] [rbp-1Dh]
  _BYTE *v33; // [rsp+80h] [rbp-19h]
  int v34; // [rsp+88h] [rbp-11h]
  int v35; // [rsp+8Ch] [rbp-Dh]
  _BYTE *v36; // [rsp+90h] [rbp-9h]
  int v37; // [rsp+98h] [rbp-1h]
  int v38; // [rsp+9Ch] [rbp+3h]
  __int64 v39; // [rsp+A0h] [rbp+7h]
  __int64 v40; // [rsp+A8h] [rbp+Fh]

  v39 = a10;
  v11 = -1LL;
  v40 = 4LL;
  v12 = *a9;
  if ( *a9 )
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
  v37 = v14;
  v36 = v12;
  v38 = 0;
  v15 = *a8;
  if ( *a8 )
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
  v34 = v17;
  v33 = v15;
  v35 = 0;
  v18 = *a7;
  if ( *a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &unk_180106082;
    v20 = 1;
  }
  v31 = v20;
  v28 = a6;
  v30 = v18;
  v32 = 0;
  v29 = 8LL;
  v21 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v21[v11] );
    v22 = v11 + 1;
  }
  else
  {
    v21 = &unk_180106082;
    v22 = 1;
  }
  v25 = v21;
  v26 = v22;
  v27 = 0;
  return sub_180001554((int)&dword_1801C8188, a2, 0, 0, 8u, &v24);
}
