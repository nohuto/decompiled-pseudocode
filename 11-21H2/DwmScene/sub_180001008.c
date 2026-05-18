/*
 * XREFs of sub_180001008 @ 0x180001008
 * Callers:
 *     sub_180022670 @ 0x180022670 (sub_180022670.c)
 *     sub_180022710 @ 0x180022710 (sub_180022710.c)
 *     sub_1800227A0 @ 0x1800227A0 (sub_1800227A0.c)
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001008(
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
  __int64 v11; // rdx
  _BYTE *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // r8
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // r8
  int v19; // edx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-49h]
  int v23; // [rsp+58h] [rbp-41h]
  int v24; // [rsp+5Ch] [rbp-3Dh]
  __int64 v25; // [rsp+60h] [rbp-39h]
  __int64 v26; // [rsp+68h] [rbp-31h]
  __int64 v27; // [rsp+70h] [rbp-29h]
  __int64 v28; // [rsp+78h] [rbp-21h]
  _BYTE *v29; // [rsp+80h] [rbp-19h]
  int v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+8Ch] [rbp-Dh]
  _BYTE *v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+98h] [rbp-1h]
  int v34; // [rsp+9Ch] [rbp+3h]
  __int64 v35; // [rsp+A0h] [rbp+7h]
  __int64 v36; // [rsp+A8h] [rbp+Fh]

  v35 = a10;
  v11 = -1LL;
  v36 = 4LL;
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
    v12 = &unk_180128042;
    v14 = 1;
  }
  v33 = v14;
  v32 = v12;
  v34 = 0;
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
    v15 = &unk_180128042;
    v17 = 1;
  }
  v30 = v17;
  v27 = a7;
  v25 = a6;
  v29 = v15;
  v31 = 0;
  v28 = 8LL;
  v18 = *a5;
  v26 = 8LL;
  if ( v18 )
  {
    do
      ++v11;
    while ( v18[v11] );
    v19 = v11 + 1;
  }
  else
  {
    v18 = &unk_180128042;
    v19 = 1;
  }
  v22 = v18;
  v23 = v19;
  v24 = 0;
  return sub_180001278((int)&dword_1801EA188, a2, 0, 0, 8u, &v21);
}
