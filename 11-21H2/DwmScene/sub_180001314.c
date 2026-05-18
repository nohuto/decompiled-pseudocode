/*
 * XREFs of sub_180001314 @ 0x180001314
 * Callers:
 *     sub_180023190 @ 0x180023190 (sub_180023190.c)
 *     sub_180023630 @ 0x180023630 (sub_180023630.c)
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001314(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        void **a9)
{
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  int v16; // edx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  _BYTE *v19; // [rsp+50h] [rbp-31h]
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  _BYTE *v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+98h] [rbp+17h]
  int v30; // [rsp+9Ch] [rbp+1Bh]

  v10 = -1LL;
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
    v11 = &unk_180128042;
    v13 = 1;
  }
  v29 = v13;
  v26 = a8;
  v28 = v11;
  v30 = 0;
  v27 = 4LL;
  v14 = *a7;
  v22 = a6;
  v24 = v14;
  v25 = 16LL;
  v23 = 4LL;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v15[v10] );
    v16 = v10 + 1;
  }
  else
  {
    v15 = &unk_180128042;
    v16 = 1;
  }
  v19 = v15;
  v20 = v16;
  v21 = 0;
  return sub_180001278((__int64)&dword_1801EA1C0, a2, 0LL, 0LL, 7u, &v18);
}
