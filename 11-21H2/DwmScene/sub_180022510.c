/*
 * XREFs of sub_180022510 @ 0x180022510
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

void __fastcall sub_180022510(__int64 a1, _BYTE *a2, __int64 a3, _BYTE *a4, void *a5, void *a6, int a7)
{
  __int64 v8; // rax
  void *v9; // r8
  __int64 v10; // rdx
  int v11; // edx
  void *v12; // r8
  __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // rdx
  int v16; // edx
  int v17; // eax
  int v18; // [rsp+30h] [rbp-61h] BYREF
  __int64 v19; // [rsp+38h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-51h] BYREF
  _BYTE *v21; // [rsp+60h] [rbp-31h]
  int v22; // [rsp+68h] [rbp-29h]
  int v23; // [rsp+6Ch] [rbp-25h]
  __int64 *v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h]
  _BYTE *v26; // [rsp+80h] [rbp-11h]
  int v27; // [rsp+88h] [rbp-9h]
  int v28; // [rsp+8Ch] [rbp-5h]
  void *v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+98h] [rbp+7h]
  int v31; // [rsp+9Ch] [rbp+Bh]
  void *v32; // [rsp+A0h] [rbp+Fh]
  int v33; // [rsp+A8h] [rbp+17h]
  int v34; // [rsp+ACh] [rbp+1Bh]
  int *v35; // [rsp+B0h] [rbp+1Fh]
  __int64 v36; // [rsp+B8h] [rbp+27h]

  if ( (unsigned int)dword_1801EA188 > 5 )
  {
    v18 = a7;
    v35 = &v18;
    v8 = -1LL;
    v19 = a3;
    v9 = a6;
    v36 = 4LL;
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
    v32 = v9;
    v12 = a5;
    v33 = v11;
    v34 = 0;
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
    v29 = v12;
    v30 = v14;
    v31 = 0;
    if ( a4 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a4[v15] );
      v16 = v15 + 1;
    }
    else
    {
      a4 = &unk_180128042;
      v16 = 1;
    }
    v27 = v16;
    v24 = &v19;
    v25 = 8LL;
    v26 = a4;
    v28 = 0;
    if ( a2 )
    {
      do
        ++v8;
      while ( a2[v8] );
      v17 = v8 + 1;
    }
    else
    {
      a2 = &unk_180128042;
      v17 = 1;
    }
    v22 = v17;
    v21 = a2;
    v23 = 0;
    sub_180001278((__int64)&dword_1801EA188, (unsigned __int8 *)dword_1801CC512, 0LL, 0LL, 8u, &v20);
  }
}
