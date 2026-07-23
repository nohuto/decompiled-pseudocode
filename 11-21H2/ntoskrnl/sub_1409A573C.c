/*
 * XREFs of sub_1409A573C @ 0x1409A573C
 * Callers:
 *     sub_1409A4784 @ 0x1409A4784 (sub_1409A4784.c)
 *     sub_1409A4934 @ 0x1409A4934 (sub_1409A4934.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A5A64 @ 0x1409A5A64 (sub_1409A5A64.c)
 *     sub_1409A5A88 @ 0x1409A5A88 (sub_1409A5A88.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_1409A573C(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  char v8; // r12
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 Pool2; // rax
  __int64 v14; // r8
  _QWORD *v15; // r15
  unsigned __int64 v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rbx
  char *v19; // rax
  _QWORD *v20; // r9
  char v21; // cl
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // edi
  __int64 v25; // r10
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32; // [rsp+20h] [rbp-10h] BYREF

  v5 = a2;
  v32 = 0LL;
  v8 = 0;
  v9 = sub_1409A5200(&v32, a1);
  v10 = v32;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 3414LL;
LABEL_3:
    sub_1409A8628("TtmpInsertPowerRequestToSession", v12, v11, -1LL);
    goto LABEL_28;
  }
  Pool2 = ExAllocatePool2(64LL, 64LL, 1381004372LL);
  v15 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v12 = 3423LL;
    v11 = 3221225626LL;
    goto LABEL_3;
  }
  *(_QWORD *)(Pool2 + 24) = a4;
  *(_DWORD *)(Pool2 + 20) = a3;
  v16 = v10 + 272;
  *(_QWORD *)(Pool2 + 8) = v5;
  *(_DWORD *)(Pool2 + 16) = v5;
  *(_QWORD *)(Pool2 + 32) = a5;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  *(_DWORD *)(Pool2 + 40) = 0;
  v17 = *(_DWORD *)(v10 + 276);
  v18 = 2 * (v17 >> 5);
  if ( *(_DWORD *)(v10 + 272) < (unsigned int)v18 )
    goto LABEL_27;
  if ( (unsigned int)v18 < 4 )
    v18 = 4LL;
  v19 = (char *)sub_1409A5A64(8LL * (unsigned int)v18, 0LL, v14, 0LL);
  v20 = 0LL;
  if ( v19 )
  {
    if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
    {
      v21 = -1;
      do
      {
        ++v21;
        LODWORD(v18) = (unsigned int)v18 >> 1;
      }
      while ( (_DWORD)v18 );
      v18 = (unsigned int)(1 << v21);
    }
    if ( (unsigned int)v18 > 0x4000000 )
      v18 = 0x4000000LL;
    v22 = (unsigned int)v18;
    if ( v19 > &v19[8 * v18] )
      v22 = 0LL;
    if ( v22 )
      memset64(v19, v16 | 1, v22);
    v23 = *(_DWORD *)(v10 + 276);
    v24 = 0;
    v25 = -1LL << (*(_BYTE *)(v10 + 276) & 0x1F);
    if ( (v23 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v26 = *(_QWORD *)(v10 + 280);
        while ( 1 )
        {
          v20 = *(_QWORD **)(v26 + 8LL * v24);
          if ( ((unsigned __int8)v20 & 1) != 0 )
            break;
          *(_QWORD *)(v26 + 8LL * v24) = *v20;
          v32 = v25 & v20[1];
          v27 = (37
               * (BYTE6(v32)
                + 37
                * (BYTE5(v32)
                 + 37
                 * (BYTE4(v32)
                  + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
               + HIBYTE(v32)) & (unsigned int)(v18 - 1);
          *v20 = *(_QWORD *)&v19[8 * v27];
          *(_QWORD *)&v19[8 * v27] = v20;
        }
        v23 = *(_DWORD *)(v10 + 276);
        ++v24;
      }
      while ( v24 < v23 >> 5 );
    }
    v28 = *(_QWORD *)(v10 + 280);
    v17 = (32 * v18) | v23 & 0x1F;
    *(_QWORD *)(v10 + 280) = v19;
    *(_DWORD *)(v10 + 276) = v17;
    if ( v28 )
    {
      sub_1409A5A88(v28, 0LL, v19, v20);
      v17 = *(_DWORD *)(v10 + 276);
    }
    goto LABEL_27;
  }
  v17 = *(_DWORD *)(v10 + 276);
  if ( v17 >= 0x20 )
  {
LABEL_27:
    v8 = 1;
    v32 = v15[1] & (-1LL << (v17 & 0x1F));
    v29 = *(_QWORD *)(v10 + 280);
    v30 = (37
         * (BYTE6(v32)
          + 37
          * (BYTE5(v32)
           + 37
           * (BYTE4(v32)
            + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
         + HIBYTE(v32)) & ((v17 >> 5) - 1);
    *v15 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v15;
    ++*(_DWORD *)v16;
    goto LABEL_28;
  }
  sub_1409A8628("TtmpInsertPowerRequestToSession", 3446LL, 3221225626LL, -1LL);
  ExFreePoolWithTag(v15, 0x52507454u);
LABEL_28:
  if ( v10 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  return v8;
}
