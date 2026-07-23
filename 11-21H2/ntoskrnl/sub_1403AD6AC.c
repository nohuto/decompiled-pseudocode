/*
 * XREFs of sub_1403AD6AC @ 0x1403AD6AC
 * Callers:
 *     sub_1403AD4F0 @ 0x1403AD4F0 (sub_1403AD4F0.c)
 *     sub_14056CDBC @ 0x14056CDBC (sub_14056CDBC.c)
 * Callees:
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_1402E40E0 @ 0x1402E40E0 (sub_1402E40E0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403AD92C @ 0x1403AD92C (sub_1403AD92C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057AAF8 @ 0x14057AAF8 (sub_14057AAF8.c)
 */

_QWORD *__fastcall sub_1403AD6AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int i; // esi
  unsigned int v8; // r15d
  unsigned __int64 v9; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // rcx
  volatile signed __int64 *v12; // rax
  _QWORD *v13; // rbx
  struct _KPRCB *v14; // rcx
  _QWORD *result; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // r9d
  unsigned __int64 v24; // rdi
  bool v25; // al
  __int64 v26; // r14
  char v27; // dl
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int64 *v35; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v36; // [rsp+40h] [rbp-30h] BYREF
  _QWORD **v37; // [rsp+48h] [rbp-28h]
  __int128 v38; // [rsp+50h] [rbp-20h]
  __int64 v39; // [rsp+60h] [rbp-10h]
  __int64 v40; // [rsp+B8h] [rbp+48h]
  char v42; // [rsp+C8h] [rbp+58h] BYREF

  v40 = a2;
  v4 = 0LL;
  v37 = &v36;
  v5 = a2;
  v42 = 0;
  v36 = &v36;
  v35 = 0LL;
  for ( i = 0; i < 2; ++i )
  {
    v8 = 0;
    v9 = ((unsigned __int64)i << 13) + v5 + 512;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v34 = 0;
      while ( 1 )
      {
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v11 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v30 = *(_DWORD *)(v11 + 24);
            *(_DWORD *)(v11 + 24) = v30 + 1;
            if ( v30 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
          break;
        v31 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v31 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v32 = *(_DWORD *)(v31 + 24) - 1;
            *(_DWORD *)(v31 + 24) = v32;
            if ( !v32 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v34, a2, v4, a4);
        while ( *(_QWORD *)v9 );
      }
      v12 = (volatile signed __int64 *)v9;
      v13 = *(_QWORD **)(v9 + 8);
      v35 = (volatile signed __int64 *)v9;
      if ( v13 != (_QWORD *)(v9 + 8) )
      {
        do
        {
          v26 = (__int64)(v13 - 4);
          v27 = *((_BYTE *)v13 - 31);
          v13 = (_QWORD *)*v13;
          if ( (v27 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v27 & 2) == 0) )
          {
            sub_1402E40E0(v40, v26, v8, &v35);
            v28 = v37;
            v29 = (_QWORD *)(v26 + 32);
            if ( *v37 != &v36 )
              goto LABEL_52;
            *(_QWORD *)(v26 + 40) = v37;
            *v29 = &v36;
            *v28 = v29;
            v37 = (_QWORD **)(v26 + 32);
          }
        }
        while ( v13 != (_QWORD *)(v9 + 8) );
        v12 = v35;
      }
      v4 = 0LL;
      _InterlockedAnd64(v12, 0LL);
      v14 = KeGetCurrentPrcb();
      a2 = *((_QWORD *)v14 + 4375);
      if ( a2 )
      {
        if ( *((_BYTE *)v14 + 32) <= 1u )
        {
          v33 = *(_DWORD *)(a2 + 24) - 1;
          *(_DWORD *)(a2 + 24) = v33;
          if ( !v33 )
          {
            sub_140418E4C(v14);
            v4 = 0LL;
          }
        }
      }
      ++v8;
      v9 += 32LL;
    }
    while ( v8 < 0x100 );
    v5 = v40;
  }
  result = v36;
  if ( v36 != &v36 )
  {
    while ( 1 )
    {
      v16 = (unsigned __int64)(result - 4);
      v17 = *result;
      v18 = (_QWORD *)result[1];
      if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v18 != result )
        break;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = *(_QWORD *)(a3 + 24);
      v20 = *(_QWORD *)(v16 + 24);
      v21 = v20 - v19;
      if ( v19 >= 0 )
      {
        if ( v21 > v20 )
          v21 = 0LL;
      }
      else if ( v21 < v20 )
      {
        v21 = -1LL;
      }
      v22 = __ROL8__(qword_140D06CC8 ^ *(_QWORD *)(v16 + 48), qword_140D06CC8);
      v23 = (unsigned __int8)(v21 >> 18);
      v38 = 0LL;
      v24 = qword_140D06E28 ^ _byteswap_uint64(v16 ^ v22);
      *(_DWORD *)v16 |= 0x80u;
      *(_QWORD *)(v16 + 24) = v21;
      v39 = 0LL;
      LODWORD(v38) = *(_DWORD *)v16;
      BYTE2(v38) = v21 >> 18;
      *(_DWORD *)v16 = v38;
      if ( *(_BYTE *)(a3 + 32) )
        v25 = sub_1402B7800(a1, v16, v24, v23, &v42);
      else
        v25 = sub_1402B7800(a1, v16, v24, v23, 0LL);
      if ( v25 )
      {
        if ( _bittest((_DWORD *)&xmmword_140D06900 + 2, 0x11u) )
          sub_14057AAF8(v16, v24, 0LL);
        else
          _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
      }
      else
      {
        sub_1402A7FE0(a1, v16, 0LL);
      }
      result = v36;
      if ( v36 == &v36 )
        goto LABEL_30;
    }
LABEL_52:
    __fastfail(3u);
  }
LABEL_30:
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)sub_1403AD92C(a3);
  return result;
}
