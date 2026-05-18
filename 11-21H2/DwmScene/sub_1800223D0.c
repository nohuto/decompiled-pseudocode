/*
 * XREFs of sub_1800223D0 @ 0x1800223D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

void __fastcall sub_1800223D0(__int64 a1, void *a2, __int64 a3, int a4, void *a5, void *a6, int a7)
{
  void *v7; // r10
  __int64 v8; // rax
  void *v9; // r8
  __int64 v10; // rcx
  int v11; // ecx
  void *v12; // r8
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  int v16; // [rsp+30h] [rbp-61h] BYREF
  int v17; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v18; // [rsp+38h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-51h] BYREF
  void *v20; // [rsp+60h] [rbp-31h]
  int v21; // [rsp+68h] [rbp-29h]
  int v22; // [rsp+6Ch] [rbp-25h]
  __int64 *v23; // [rsp+70h] [rbp-21h]
  __int64 v24; // [rsp+78h] [rbp-19h]
  int *v25; // [rsp+80h] [rbp-11h]
  __int64 v26; // [rsp+88h] [rbp-9h]
  void *v27; // [rsp+90h] [rbp-1h]
  int v28; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+9Ch] [rbp+Bh]
  void *v30; // [rsp+A0h] [rbp+Fh]
  int v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+ACh] [rbp+1Bh]
  int *v33; // [rsp+B0h] [rbp+1Fh]
  __int64 v34; // [rsp+B8h] [rbp+27h]

  v7 = a2;
  if ( (unsigned int)dword_1801EA188 > 5 )
  {
    v16 = a7;
    v33 = &v16;
    v8 = -1LL;
    v17 = a4;
    v18 = a3;
    v9 = a6;
    v34 = 4LL;
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *((_BYTE *)a6 + v10) );
      v11 = v10 + 1;
    }
    else
    {
      v9 = &unk_180128042;
      v11 = 1;
    }
    v30 = v9;
    v12 = a5;
    v31 = v11;
    v32 = 0;
    if ( a5 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *((_BYTE *)a5 + v13) );
      v14 = v13 + 1;
    }
    else
    {
      v12 = &unk_180128042;
      v14 = 1;
    }
    v28 = v14;
    v25 = &v17;
    v23 = &v18;
    v24 = 8LL;
    v27 = v12;
    v29 = 0;
    v26 = 4LL;
    if ( a2 )
    {
      do
        ++v8;
      while ( *((_BYTE *)a2 + v8) );
      v15 = v8 + 1;
    }
    else
    {
      v7 = &unk_180128042;
      v15 = 1;
    }
    v21 = v15;
    v20 = v7;
    v22 = 0;
    sub_180001278((__int64)&dword_1801EA188, (unsigned __int8 *)dword_1801CC64E, 0LL, 0LL, 8u, &v19);
  }
}
