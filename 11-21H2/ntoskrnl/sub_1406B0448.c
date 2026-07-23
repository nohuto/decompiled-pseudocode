/*
 * XREFs of sub_1406B0448 @ 0x1406B0448
 * Callers:
 *     sub_1406B0448 @ 0x1406B0448 (sub_1406B0448.c)
 *     sub_1407795E4 @ 0x1407795E4 (sub_1407795E4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406B0448 @ 0x1406B0448 (sub_1406B0448.c)
 *     sub_1406B06CC @ 0x1406B06CC (sub_1406B06CC.c)
 *     sub_1406B074C @ 0x1406B074C (sub_1406B074C.c)
 */

__int64 __fastcall sub_1406B0448(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  int v8; // r14d
  _DWORD *v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned int *v13; // rdi
  unsigned int v14; // r13d
  unsigned int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // r12d
  bool v21; // zf
  unsigned int v22; // r12d
  __int64 *v23; // [rsp+20h] [rbp-50h]
  __int64 *v24; // [rsp+20h] [rbp-50h]
  int v25; // [rsp+4Ch] [rbp-24h]
  unsigned int v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v28; // [rsp+60h] [rbp-10h]
  unsigned int v31; // [rsp+C0h] [rbp+50h] BYREF

  v25 = 1;
  v31 = 0;
  v27 = 0LL;
  if ( a3 < 3 )
    return 3221225485LL;
  v8 = *(_DWORD *)a4 & 0xFF00000;
  if ( !v8 )
    return 3221225485LL;
  v9 = a5;
  *a5 = 0;
  result = sub_1406B06CC(a3, a4, &v31);
  v12 = result;
  if ( (_DWORD)result )
    return result;
  v13 = (unsigned int *)(a4 + 56);
  v14 = -1073741823;
  v28 = (unsigned int *)(v11 + 56LL * v31);
  v15 = a3 - v31;
  v16 = a3 - 1;
  v26 = v15;
  if ( v8 == 0x100000 || v8 == 3145728 )
  {
    while ( 1 )
    {
      if ( v16 <= 1 )
        goto LABEL_29;
      v31 = 0;
      *v9 = 0;
      if ( (*v13 & 0xFF00000) != 0 )
      {
        result = sub_1406B06CC(v16, v13, &v31);
        v20 = v31 + 1;
        if ( (_DWORD)result )
          return result;
        result = sub_1406B0448(a1, a2, v20, (_DWORD)v13, (__int64)v9);
        v12 = result;
        if ( (_DWORD)result == -1073741823 )
        {
          v25 = 0;
        }
        else if ( (_DWORD)result )
        {
          return result;
        }
        v13 += 14 * v20;
        v16 -= v20;
        goto LABEL_12;
      }
      v23 = &v27;
      result = sub_14042A5E0(a2, v13 + 2);
      v12 = result;
      if ( (_DWORD)result != -1073741275 )
        break;
      v12 = 0;
      if ( (*v13 & 0xFFF) == 1 )
      {
        v17 = 0LL;
        v27 = 0LL;
LABEL_11:
        LODWORD(v23) = v13[10];
        sub_1406B074C(0LL, v17, 0LL, *v13, v23, *((_QWORD *)v13 + 6), v13[11], v9);
        v13 += 14;
        --v16;
LABEL_12:
        if ( *v9 == (v8 == 3145728) )
        {
          v13 = v28;
          v18 = 1;
          v16 = v26;
          goto LABEL_14;
        }
      }
      else
      {
        v25 = 0;
        v13 += 14;
        --v16;
      }
    }
    if ( (_DWORD)result )
      return result;
    v17 = v27;
    goto LABEL_11;
  }
  if ( v8 != 5242880 )
    return 3221225485LL;
  if ( (*v13 & 0xFF00000) != 0 )
  {
    result = sub_1406B06CC(v16, v13, &v31);
    v22 = v31 + 1;
    if ( !(_DWORD)result )
    {
      result = sub_1406B0448(a1, a2, v22, (_DWORD)v13, (__int64)v9);
      v12 = result;
      if ( !(_DWORD)result )
      {
        v13 += 14 * v22;
        v16 -= v22;
LABEL_45:
        *v9 = *v9 == 0;
LABEL_29:
        v18 = 0;
LABEL_14:
        if ( !v16 )
          return 3221225485LL;
        v19 = *v13 & 0xFF00000;
        if ( v19 == 0x200000 )
        {
          if ( v8 == 0x100000 )
          {
LABEL_17:
            if ( v18 || v25 || v12 )
              return v12;
            return v14;
          }
        }
        else
        {
          if ( v19 == 0x400000 )
          {
            v21 = v8 == 3145728;
          }
          else
          {
            if ( v19 != 6291456 )
              return 3221225485LL;
            v21 = v8 == 5242880;
          }
          if ( v21 )
            goto LABEL_17;
        }
        return 3221225485LL;
      }
    }
  }
  else
  {
    v24 = &v27;
    result = sub_14042A5E0(a2, a4 + 64);
    v12 = result;
    if ( (_DWORD)result == -1073741275 )
      return v14;
    if ( !(_DWORD)result )
    {
      LODWORD(v24) = *(_DWORD *)(a4 + 96);
      sub_1406B074C(0LL, v27, 0LL, *v13, v24, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 100), v9);
      --v16;
      v13 = (unsigned int *)(a4 + 112);
      goto LABEL_45;
    }
  }
  return result;
}
