/*
 * XREFs of sub_1409576F0 @ 0x1409576F0
 * Callers:
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140564528 @ 0x140564528 (sub_140564528.c)
 *     sub_14056471C @ 0x14056471C (sub_14056471C.c)
 */

char __fastcall sub_1409576F0(unsigned int a1, int a2, int *a3)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  char result; // al
  unsigned __int64 v11; // r15
  __int16 *v12; // r8
  int v13; // r10d
  char v14; // [rsp+80h] [rbp-80h] BYREF
  char v15; // [rsp+81h] [rbp-7Fh] BYREF
  char v16; // [rsp+82h] [rbp-7Eh] BYREF
  int v17; // [rsp+84h] [rbp-7Ch] BYREF
  int v18; // [rsp+88h] [rbp-78h] BYREF
  int v19; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  _DWORD *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  _DWORD v29[2]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  _DWORD v33[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  _DWORD *v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  __int64 v38; // [rsp+140h] [rbp+40h]
  _DWORD v39[2]; // [rsp+148h] [rbp+48h] BYREF
  char *v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  char *v42; // [rsp+160h] [rbp+60h]
  __int64 v43; // [rsp+168h] [rbp+68h]
  int *v44; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  int *v46; // [rsp+180h] [rbp+80h]
  __int64 v47; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  __int64 *v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v51; // [rsp+1A8h] [rbp+A8h]
  char *v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]

  v3 = a1;
  if ( !a3 || (v5 = *((_QWORD *)a3 + 5)) == 0 || (v6 = *((_QWORD *)a3 + 3)) == 0 || a1 > 1 )
    __fastfail(5u);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)a3 + 7);
  v9 = *(_QWORD *)&a3[2 * v3 + 16];
  result = 75 * v8;
  v11 = v8 / 0x2710;
  if ( v9 )
    v12 = (__int16 *)(v9 + 40);
  else
    v12 = &word_140C08E88;
  if ( a2 < 0 )
  {
    result = byte_140C0DD4B;
    if ( byte_140C0DD4B < 0 )
      result = sub_140564528(
                 *((unsigned __int8 *)a3 + 48),
                 *((unsigned __int8 *)a3 + 32),
                 (__int64)v12,
                 *(const wchar_t **)(v5 + 48),
                 *(const wchar_t **)(v5 + 64),
                 *a3,
                 v3,
                 *(const wchar_t **)(v6 + 48),
                 *((_BYTE *)a3 + 32),
                 *((_BYTE *)a3 + 48),
                 a3[v3 + 2],
                 *((_BYTE *)a3 + 88),
                 a3[v3 + 4],
                 a3[v3 + 20],
                 *((const wchar_t **)v12 + 1),
                 v11);
  }
  else if ( (byte_140C0DD4C & 1) != 0 )
  {
    result = sub_14056471C(
               *((unsigned __int8 *)a3 + 48),
               *((unsigned __int8 *)a3 + 32),
               (__int64)v12,
               *(const wchar_t **)(v5 + 48),
               *(const wchar_t **)(v5 + 64),
               *a3,
               v3,
               *(const wchar_t **)(v6 + 48),
               *((_BYTE *)a3 + 32),
               *((_BYTE *)a3 + 48),
               a3[v3 + 2],
               *((_BYTE *)a3 + 88),
               v11);
  }
  if ( (unsigned int)dword_140C06550 > 5 )
  {
    result = sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL);
    if ( result )
    {
      v20 = 0x1000000LL;
      v24 = &v20;
      v25 = 8LL;
      v26 = v29;
      v28 = *(_QWORD *)(v5 + 48);
      v29[0] = *(unsigned __int16 *)(v5 + 40);
      v30 = v33;
      v32 = *(_QWORD *)(v5 + 64);
      v33[0] = *(unsigned __int16 *)(v5 + 56);
      v17 = *a3;
      v34 = &v17;
      v36 = v39;
      v38 = *(_QWORD *)(v6 + 48);
      v39[0] = *(unsigned __int16 *)(v6 + 40);
      v14 = *((_BYTE *)a3 + 32);
      v40 = &v14;
      v15 = *((_BYTE *)a3 + 48);
      v42 = &v15;
      v18 = a3[v3 + 2];
      v44 = &v18;
      v19 = a3[v3 + 4];
      v46 = &v19;
      v48 = &v21;
      v50 = &v22;
      v52 = &v16;
      v27 = 2LL;
      v29[1] = v13;
      v31 = 2LL;
      v33[1] = v13;
      v35 = 4LL;
      v37 = 2LL;
      v39[1] = v13;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 4LL;
      v47 = 4LL;
      v21 = v11;
      v49 = 8LL;
      v22 = v7;
      v51 = 8LL;
      v16 = v3;
      v53 = 1LL;
      return sub_14020A9C4((__int64)&dword_140C06550, (unsigned __int8 *)&word_14002C116, 0LL, 0LL, 0x11u, &v23);
    }
  }
  return result;
}
