/*
 * XREFs of sub_1406AE644 @ 0x1406AE644
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 * Callees:
 *     sub_140360A84 @ 0x140360A84 (sub_140360A84.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406AEA14 @ 0x1406AEA14 (sub_1406AEA14.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_1407E0768 @ 0x1407E0768 (sub_1407E0768.c)
 *     sub_1407E0884 @ 0x1407E0884 (sub_1407E0884.c)
 *     sub_1407E08F4 @ 0x1407E08F4 (sub_1407E08F4.c)
 */

__int64 __fastcall sub_1406AE644(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int *Src; // rsi
  __int64 v6; // r13
  __int16 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  __int64 v13; // rsi
  _DWORD *v14; // rbx
  int v15; // ebx
  __int64 result; // rax
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned int v21; // r15d
  unsigned int v22; // r11d
  unsigned int v23; // r8d
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  unsigned int v29; // r10d
  int v30; // r10d
  int v31; // r10d
  __int64 v32; // r11
  size_t Size; // [rsp+38h] [rbp-81h]
  SIZE_T v34; // [rsp+48h] [rbp-71h]
  __int64 v35; // [rsp+60h] [rbp-59h]
  __int64 v36; // [rsp+68h] [rbp-51h]
  int v37; // [rsp+70h] [rbp-49h]
  ULONG_PTR v38[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v39; // [rsp+88h] [rbp-31h] BYREF
  _OWORD v40[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-1h]
  int v42; // [rsp+C0h] [rbp+7h]
  int v44; // [rsp+130h] [rbp+77h] BYREF
  __int64 v45; // [rsp+138h] [rbp+7Fh] BYREF

  v44 = 0;
  LODWORD(v45) = 0;
  v41 = 0LL;
  v42 = 0;
  v3 = 5LL * a2;
  *(_OWORD *)v38 = 0LL;
  v4 = 0LL;
  v39 = 0LL;
  v35 = 0LL;
  memset(v40, 0, sizeof(v40));
  Src = (unsigned int *)a1[3];
  v6 = *(_QWORD *)(*a1 + 32LL);
  v36 = a2;
  v37 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v7 = *(_WORD *)(*a1 + 30LL);
  *Src = 3;
  *((_QWORD *)Src + 1) = (8 * (v7 & 7u)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, a2, &v45);
  v8 = 0LL;
  if ( (*(_DWORD *)(v6 + 8 * v3 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      Src[1] = 0;
      if ( (unsigned int)v8 >= *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 )
        break;
      while ( 1 )
      {
        v9 = 3 * v8;
        v8 = (unsigned int)(v8 + 1);
        v10 = *(_QWORD *)(v6 + 8 * v3 + 16) + 16 * v9;
        v11 = *(_QWORD *)(v10 + 8);
        if ( (*(_BYTE *)v10 & 0x10) != 0 )
          v4 = v10;
        v35 = v4;
        if ( v11 )
        {
          *(_QWORD *)&Src[2 * Src[1]++ + 4] = v11;
          v12 = Src[1];
          if ( v12 >= *((_DWORD *)a1 + 8) )
            break;
        }
        if ( (unsigned int)v8 >= *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 )
        {
          v12 = Src[1];
          break;
        }
      }
      if ( !v12 )
        break;
      if ( sub_140360A84(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0 && (unsigned __int64)(a1[6] + a1[7] + sub_1407E0884(a1 + 11, 0LL)) < 0x80 )
      {
LABEL_56:
        v15 = -1073741248;
        goto LABEL_16;
      }
      LODWORD(v34) = 0;
      LODWORD(Size) = 8 * v31 + 16;
      v15 = sub_1407308F0(*(_QWORD *)((v32 << 6) + a1[2]), (__int64)v38, 590112, Src, Size, 0LL, v34, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        sub_1407E0768(a1 + 6, Src[1]);
      if ( v15 < 0 )
        goto LABEL_16;
      if ( v15 == 259 )
        KeBugCheckEx(0x191u, 0x15EFuLL, 0LL, 0LL, 0LL);
      v4 = v35;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
    if ( v4 )
    {
      v19 = *a1;
      v20 = 0LL;
      v21 = 0;
      v45 = 0LL;
      ++*(_DWORD *)(v19 + 88);
      if ( *(_DWORD *)(v4 + 16) )
      {
        while ( 1 )
        {
          Src[1] = 0;
          if ( v21 >= *(_DWORD *)(v4 + 16) )
            break;
          v22 = *((_DWORD *)a1 + 8);
          v23 = 0;
          while ( 1 )
          {
            v24 = *(_QWORD *)(v4 + 24);
            v25 = v20;
            v26 = *(_QWORD *)(v24 + 16LL * v21);
            v27 = v26 + *(unsigned int *)(v24 + 16LL * v21 + 8);
            if ( v26 >= v20 )
              v25 = *(_QWORD *)(v24 + 16LL * v21);
            if ( v25 < v27 )
              break;
            v45 = v20;
            v29 = v23;
            if ( v23 >= v22 )
              goto LABEL_34;
LABEL_31:
            if ( ++v21 >= *(_DWORD *)(v4 + 16) )
              goto LABEL_34;
          }
          while ( 1 )
          {
            v28 = v25 >> 10;
            v25 += 4096LL;
            *(_QWORD *)&Src[2 * Src[1] + 4] = v28;
            v23 = Src[1] + 1;
            Src[1] = v23;
            v22 = *((_DWORD *)a1 + 8);
            if ( v23 >= v22 )
              break;
            if ( v25 >= v27 )
            {
              v29 = v23;
              goto LABEL_31;
            }
          }
          v45 = v25;
          v29 = v23;
LABEL_34:
          if ( !v29 )
            break;
          if ( sub_140360A84(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + sub_1407E0884(a1 + 11, 0LL)) < 0x80 )
          {
            goto LABEL_56;
          }
          LODWORD(v34) = 0;
          LODWORD(Size) = 8 * v30 + 16;
          v15 = sub_1407308F0(*(_QWORD *)((v36 << 6) + a1[2]), (__int64)v38, 590112, Src, Size, 0LL, v34, 0);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            sub_1407E0768(a1 + 6, Src[1]);
          if ( v15 < 0 )
            goto LABEL_16;
          if ( v15 == 259 )
            KeBugCheckEx(0x191u, 0x1654uLL, 0LL, 0LL, 0LL);
          v4 = v35;
          if ( v21 >= *(_DWORD *)(v35 + 16) )
            break;
          v20 = v45;
        }
      }
    }
  }
  v13 = 0LL;
  if ( (*(_DWORD *)(v6 + 8 * v3 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v14 = (_DWORD *)(*(_QWORD *)(v6 + 8 * v3 + 16) + 48 * v13);
      if ( (*v14 & 2) != 0 )
      {
        sub_1407E08F4((_DWORD)a1, (_DWORD)v14, a2, (unsigned int)&v39, (__int64)v40, (__int64)&v44);
        v18 = sub_1406AEA14((_DWORD)a1, *((_DWORD *)a1 + 4) + ((_DWORD)v36 << 6), (_DWORD)v14, v17, (__int64)v40, v44);
        v15 = v18;
        if ( v18 < 0 )
        {
          if ( v18 == -1073741248 )
            goto LABEL_16;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)(v6 + 8 * v3 + 12) >> 1 );
  }
  v15 = 0;
LABEL_16:
  result = (unsigned int)v15;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v37;
  return result;
}
