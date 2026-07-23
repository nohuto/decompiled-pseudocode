/*
 * XREFs of sub_1407E0408 @ 0x1407E0408
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 * Callees:
 *     sub_140360A84 @ 0x140360A84 (sub_140360A84.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     sub_140360E0C @ 0x140360E0C (sub_140360E0C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 *     sub_1407DEE78 @ 0x1407DEE78 (sub_1407DEE78.c)
 *     sub_1407E0768 @ 0x1407E0768 (sub_1407E0768.c)
 *     sub_1407E0884 @ 0x1407E0884 (sub_1407E0884.c)
 *     sub_1407E08A0 @ 0x1407E08A0 (sub_1407E08A0.c)
 */

__int64 __fastcall sub_1407E0408(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int *v7; // r15
  int v8; // eax
  char v9; // r12
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // r13d
  unsigned int v13; // r10d
  unsigned int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  bool v21; // zf
  __int64 result; // rax
  unsigned int v23; // [rsp+30h] [rbp-59h]
  unsigned int v24; // [rsp+34h] [rbp-55h]
  __int64 v25; // [rsp+38h] [rbp-51h] BYREF
  __int64 v26; // [rsp+40h] [rbp-49h]
  __int64 v27; // [rsp+48h] [rbp-41h]
  __int64 v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h]
  __int128 v31; // [rsp+68h] [rbp-21h] BYREF
  __int128 v32; // [rsp+78h] [rbp-11h]
  __int128 v33; // [rsp+88h] [rbp-1h]
  __int64 v34; // [rsp+98h] [rbp+Fh]
  char v35; // [rsp+F0h] [rbp+67h]
  int v36; // [rsp+F8h] [rbp+6Fh]
  unsigned int v37; // [rsp+100h] [rbp+77h]
  __int16 v38; // [rsp+108h] [rbp+7Fh]

  v1 = *a1;
  v34 = 0LL;
  v3 = 0;
  v31 = 0LL;
  v4 = 0;
  v32 = 0LL;
  LODWORD(v25) = 0;
  v33 = 0LL;
  v35 = 0;
  v37 = 0;
  v38 = *(_WORD *)(*a1 + 30LL);
  v30 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  while ( v4 < *(_DWORD *)(v1 + 8) )
  {
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      goto LABEL_27;
    v5 = *(_QWORD *)(v1 + 32);
    v28 = 5LL * v4;
    v6 = 0;
    v24 = 0;
    v27 = v5;
    if ( (*(_DWORD *)(v5 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      goto LABEL_27;
    do
    {
      v7 = (int *)(*(_QWORD *)(v5 + 8 * v28 + 16) + 48LL * v6);
      v8 = *v7;
      if ( (*v7 & 2) != 0 || !v7[4] )
        goto LABEL_26;
      v9 = 0;
      while ( v9 )
      {
        if ( (v8 & 1) != 0 )
          goto LABEL_9;
LABEL_30:
        LOBYTE(v19) = v8;
LABEL_23:
        ++v9;
        LOBYTE(v20) = v19;
        if ( (unsigned __int8)v9 > 1u )
          goto LABEL_24;
      }
      if ( (v8 & 1) != 0 )
        goto LABEL_30;
LABEL_9:
      sub_140360E0C((__int64)&v31);
      if ( (int)sub_1407DEE78(a1, v7, v4, v9, (__int64)&v31) >= 0 )
      {
        v11 = v31;
        v26 = v31;
        v12 = 0;
        v29 = v31;
        *(_QWORD *)v31 = v32;
        v23 = *(_DWORD *)(v11 + 8);
        v36 = 0;
        sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v10, &v25);
        if ( v23 )
        {
          while ( !sub_140360A84(a1) && (unsigned __int64)(a1[6] + a1[7] + sub_1407E0884(a1 + 11, 0LL)) >= 0x80 )
          {
            if ( v12 + 16 > v13 )
              v14 = v13 - v12;
            else
              v14 = 16;
            v15 = v26;
            *(_DWORD *)(v26 + 8) = v14;
            v16 = (_QWORD *)(v15 + 16);
            memmove((void *)(v15 + 16), (const void *)(v15 + 16 + 8LL * v12), 8LL * v14);
            *v16 |= (8 * (v38 & 7u)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            LODWORD(v16) = sub_1406FA730(1u, (__int64)&v29, 0LL);
            sub_1407E0768(a1 + 6, *(unsigned int *)(v26 + 8));
            v17 = v36;
            if ( (int)v16 >= 0 )
            {
              v18 = *(_DWORD *)(v26 + 8);
              v17 = v18 + v36;
              v12 += v18;
              v36 += v18;
              if ( v12 < v23 )
                continue;
            }
            v4 = v37;
            goto LABEL_18;
          }
          v4 = v37;
          v17 = v36;
          v35 = 1;
        }
        else
        {
          v17 = 0;
        }
LABEL_18:
        if ( v9 )
          *(_DWORD *)(v1 + 100) += v17;
        else
          *(_DWORD *)(v1 + 96) += v17;
      }
      sub_1407E08A0(a1[5], &v31);
      if ( v35 || sub_140360A84(a1) )
      {
        v3 = -1073741248;
        goto LABEL_28;
      }
      v8 = *v7;
      v19 = *v7;
      v20 = *v7;
      if ( (*v7 & 8) == 0 )
        goto LABEL_23;
LABEL_24:
      v21 = (v20 & 8) == 0;
      v5 = v27;
      if ( v21 )
        ++*(_DWORD *)(v1 + 84);
LABEL_26:
      v6 = v24 + 1;
      v24 = v6;
    }
    while ( v6 < *(_DWORD *)(v5 + 8 * v28 + 12) >> 1 );
LABEL_27:
    v37 = ++v4;
  }
LABEL_28:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v30;
  return result;
}
