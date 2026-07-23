/*
 * XREFs of sub_1406831A8 @ 0x1406831A8
 * Callers:
 *     PsUpdateComponentPower @ 0x140209380 (PsUpdateComponentPower.c)
 *     sub_1407EDD60 @ 0x1407EDD60 (sub_1407EDD60.c)
 *     sub_1407F2D00 @ 0x1407F2D00 (sub_1407F2D00.c)
 * Callees:
 *     sub_140209110 @ 0x140209110 (sub_140209110.c)
 *     sub_140209470 @ 0x140209470 (sub_140209470.c)
 *     sub_140238BF8 @ 0x140238BF8 (sub_140238BF8.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402F614C @ 0x1402F614C (sub_1402F614C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068191C @ 0x14068191C (sub_14068191C.c)
 *     sub_1406836F0 @ 0x1406836F0 (sub_1406836F0.c)
 */

void __fastcall sub_1406831A8(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // esi
  ULONG_PTR v7; // r14
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // r9d
  unsigned int v13; // r10d
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edx
  int v20; // eax
  int v21; // r9d
  int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // r9d
  __int16 v25; // r8
  unsigned int *v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  __int16 v29; // dx
  unsigned int v30; // r8d
  unsigned int v31; // edx
  unsigned __int8 v32; // si
  unsigned int *v33; // rbx
  unsigned __int64 *v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // edx
  __int64 *v38; // rcx
  __int64 *v39; // r10
  unsigned int v40; // ebx
  unsigned int v41; // ecx
  int v42; // r9d
  int v43; // r9d
  __int64 v44; // [rsp+20h] [rbp-D8h]
  __int64 v45; // [rsp+20h] [rbp-D8h]
  __int64 v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+20h] [rbp-D8h]
  _DWORD v49[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 2280);
  v4 = a3;
  memset(v49, 0, sizeof(v49));
  if ( v3 )
  {
    v7 = v3 + 432;
    sub_1402D66A8(v3 + 432);
    if ( a2 == 9 )
    {
      v44 = *(_QWORD *)(v3 + 384);
      v21 = 1000;
      if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - (unsigned int)v44 <= 0x3E8 )
        v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v44;
      if ( ~v21 < (HIDWORD(v44) & 0x7FFFFFFFu) )
        v22 = -1;
      else
        v22 = (HIDWORD(v44) & 0x7FFFFFFF) + v21;
      HIDWORD(v45) = (HIDWORD(v44) ^ v22) & 0x7FFFFFFF ^ HIDWORD(v44);
      LODWORD(v45) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_QWORD *)(v3 + 384) = v45;
      v18 = sub_1402F614C();
      v17 = (unsigned int *)(v3 + 344);
      goto LABEL_16;
    }
    if ( a2 <= 9 )
    {
      v8 = a2 - 4;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              memset(&v49[2], 0, 0x88uLL);
              v49[1] = HIDWORD(a3);
              v49[0] = v4;
              sub_1406836F0(a1, v49);
            }
            goto LABEL_17;
          }
          v11 = sub_1402F614C();
          v12 = -1;
          v13 = v11;
          if ( (_WORD)v4 )
          {
            v14 = *(_DWORD *)(v3 + 128);
            if ( ~(unsigned __int16)v4 < v14 )
              v15 = -1;
            else
              v15 = v14 + (unsigned __int16)v4;
            *(_DWORD *)(v3 + 128) = v15;
            sub_140209470((unsigned int *)(v3 + 320), v13);
          }
          if ( WORD1(a3) )
          {
            v19 = *(_DWORD *)(v3 + 132);
            v20 = v19 + WORD1(a3);
            if ( ~WORD1(a3) < v19 )
              v20 = v12;
            *(_DWORD *)(v3 + 132) = v20;
            sub_140209470((unsigned int *)(v3 + 328), v13);
          }
          if ( !WORD2(a3) )
          {
LABEL_17:
            sub_1402935D0(v7);
            return;
          }
          v16 = *(_DWORD *)(v3 + 136);
          if ( ~WORD2(a3) >= v16 )
            v12 = v16 + WORD2(a3);
          *(_DWORD *)(v3 + 136) = v12;
          v17 = (unsigned int *)(v3 + 336);
          v18 = v13;
LABEL_16:
          sub_140209470(v17, v18);
          goto LABEL_17;
        }
        sub_140209110(
          (unsigned __int64 *)(v3 + 112),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v28 = sub_1402F614C();
        v29 = *(_WORD *)(v3 + 464);
        v30 = v28;
        v26 = (unsigned int *)(v3 + 312);
        if ( v4 )
        {
          *(_WORD *)(v3 + 464) = v29 | 2;
          v27 = v28;
          goto LABEL_31;
        }
        *(_WORD *)(v3 + 464) = v29 & 0xFFFD;
        v31 = v28;
      }
      else
      {
        sub_140209110(
          (unsigned __int64 *)(v3 + 104),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v23 = sub_1402F614C();
        v25 = *(_WORD *)(v3 + 464);
        v26 = (unsigned int *)(v3 + 304);
        if ( v4 )
        {
          v27 = v23;
          *(_WORD *)(v3 + 464) = v25 | 1;
LABEL_31:
          sub_140209470(v26, v27);
LABEL_32:
          sub_14068191C(a1);
          goto LABEL_17;
        }
        v31 = v23;
        *(_WORD *)(v3 + 464) = v25 & 0xFFFE;
        v30 = v23;
      }
      sub_140238BF8((__int64 *)v26, v31 - (v24 >> 12), v30);
      goto LABEL_32;
    }
    if ( a2 <= 11 )
    {
      v32 = v4 != 0;
      if ( a2 == 11 )
      {
        v33 = (unsigned int *)(v3 + 360);
        v34 = (unsigned __int64 *)(v3 + 400);
      }
      else
      {
        v33 = (unsigned int *)(v3 + 352);
        v34 = (unsigned __int64 *)(v3 + 392);
      }
      sub_140209110(v34, v32, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v35 = sub_1402F614C();
      v18 = v35;
      if ( v32 )
      {
        v17 = v33;
        goto LABEL_16;
      }
      v37 = v35 - (v36 >> 12);
      v38 = (__int64 *)v33;
    }
    else
    {
      if ( a2 == 13 )
      {
        ++*(_DWORD *)(v3 + 424);
        v18 = sub_1402F614C();
        v17 = (unsigned int *)(v3 + 376);
        goto LABEL_16;
      }
      if ( a2 != 12 )
      {
        if ( a2 == 14 )
          ++*(_DWORD *)(v3 + 428);
        goto LABEL_17;
      }
      v39 = (__int64 *)(v3 + 408);
      if ( v4 == 3 )
      {
        if ( *(int *)(v3 + 412) < 0 )
          goto LABEL_17;
        v46 = *v39;
        v42 = 4096;
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - (unsigned int)*v39 <= 0x1000 )
          v42 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *v39;
        if ( ~v42 < (HIDWORD(v46) & 0x7FFFFFFFu) )
          v43 = -1;
        else
          v43 = (HIDWORD(v46) & 0x7FFFFFFF) + v42;
        HIDWORD(v47) = (HIDWORD(v46) ^ v43) & 0x7FFFFFFF ^ HIDWORD(v46);
        LODWORD(v47) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *v39 = v47;
        v18 = sub_1402F614C();
LABEL_55:
        v17 = (unsigned int *)(v3 + 368);
        goto LABEL_16;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
        goto LABEL_17;
      v40 = *(_DWORD *)(v3 + 472);
      if ( v4 == 1 )
      {
        *(_DWORD *)(v3 + 472) = ++v40;
        if ( v40 > 1 )
          goto LABEL_17;
      }
      else if ( v40 )
      {
        *(_DWORD *)(v3 + 472) = --v40;
        if ( v40 )
          goto LABEL_17;
      }
      sub_140209110(
        (unsigned __int64 *)(v3 + 408),
        v40 != 0,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v35 = sub_1402F614C();
      v18 = v35;
      if ( v40 )
        goto LABEL_55;
      v37 = v35 - (v41 >> 12);
      v38 = (__int64 *)(v3 + 368);
    }
    sub_140238BF8(v38, v37, v35);
    goto LABEL_17;
  }
}
