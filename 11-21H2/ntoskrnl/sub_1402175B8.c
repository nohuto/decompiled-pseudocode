/*
 * XREFs of sub_1402175B8 @ 0x1402175B8
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     sub_140217A2C @ 0x140217A2C (sub_140217A2C.c)
 *     sub_140217AC8 @ 0x140217AC8 (sub_140217AC8.c)
 *     sub_140217CA0 @ 0x140217CA0 (sub_140217CA0.c)
 *     sub_140217E70 @ 0x140217E70 (sub_140217E70.c)
 *     sub_140217FB0 @ 0x140217FB0 (sub_140217FB0.c)
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402175B8(
        unsigned int a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // esi
  _QWORD *v8; // r13
  unsigned int v9; // edi
  unsigned __int64 v10; // r12
  char v11; // r15
  __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned __int64 *v14; // r11
  __int64 *v15; // rbx
  unsigned __int64 v16; // r10
  unsigned int v17; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // rdx
  __int64 v20; // r9
  char v21; // r14
  __int64 v22; // rsi
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v24; // rsi
  _QWORD *v25; // r14
  __int64 v26; // r12
  unsigned int v27; // esi
  char v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // r10
  __int64 v31; // rcx
  _BYTE *v32; // rax
  int v33; // edx
  __int64 v34; // rcx
  __int64 *v35; // r11
  unsigned int v36; // r8d
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 **v39; // rdx
  unsigned __int64 v40; // r14
  unsigned int v41; // eax
  char v42; // r13
  int v43; // r12d
  unsigned __int8 CurrentIrql; // r10
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // r8
  char v49; // al
  struct _KTHREAD *v50; // r8
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  char v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rax
  _QWORD *v58; // rdi
  unsigned __int64 v59; // rax
  char *v60; // r15
  __int64 v61; // r8
  char v62; // [rsp+30h] [rbp-D0h]
  unsigned int v64; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v65; // [rsp+38h] [rbp-C8h]
  unsigned int v66; // [rsp+40h] [rbp-C0h]
  int v67; // [rsp+44h] [rbp-BCh]
  int v68; // [rsp+48h] [rbp-B8h]
  unsigned int v69; // [rsp+4Ch] [rbp-B4h]
  __int64 v70; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h]
  _QWORD *v72; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v75[512]; // [rsp+78h] [rbp-88h] BYREF

  v7 = a3;
  v69 = a3;
  v8 = a2;
  v72 = a2;
  v9 = a1;
  v66 = a1;
  v10 = 0LL;
  v71 = a7;
  v70 = 0LL;
  v11 = a4;
  memset(v75, 0, 0x1F8uLL);
  v12 = *v8;
  v13 = 1;
  v64 = 0;
  v74 = v12;
  if ( v9 > 1 )
  {
    v14 = v8 + 1;
    v15 = &v74;
    do
    {
      v16 = *v14;
      v17 = v13;
      if ( *v15 > *v14 )
      {
        do
        {
          v45 = v17--;
          *(_QWORD *)&v75[8 * v45 - 8] = *(_QWORD *)&v75[8 * v17 - 8];
        }
        while ( v17 && *(&v74 + v17 - 1) > v16 );
      }
      ++v13;
      ++v15;
      ++v14;
      *(_QWORD *)&v75[8 * v17 - 8] = v16;
    }
    while ( v13 < v9 );
  }
  CurrentThread = KeGetCurrentThread();
  v73 = CurrentThread;
  v21 = sub_140217E70((_DWORD)CurrentThread, a6, 0, (unsigned int)&v70, (__int64)&v64);
  v62 = v21;
LABEL_6:
  LOBYTE(v20) = a5;
  LOBYTE(v19) = v11;
  LODWORD(v22) = sub_140217CA0(CurrentThread, v19, v7, v20);
  if ( !(_DWORD)v22 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = v74;
    v65 = 0LL;
    sub_1402F3290(v74);
    if ( v9 <= 1 )
    {
      v27 = 0;
      if ( !v9 )
      {
LABEL_19:
        *((_QWORD *)CurrentThread + 25) = 0LL;
        v33 = 0;
        *((_QWORD *)CurrentThread + 122) = 0LL;
        while ( 1 )
        {
          v34 = v8[v33];
          if ( (*(_BYTE *)v34 & 0x7F) == 2 )
          {
            v49 = *((_BYTE *)CurrentPrcb + 13242);
            v50 = *(struct _KTHREAD **)(v34 + 40);
            if ( CurrentThread == v50 && *(_BYTE *)(v34 + 2) == v49 && *(_DWORD *)(v34 + 4) == 0x80000000 )
            {
              sub_140217AC8(&v74, v9);
              LOBYTE(v61) = v21;
              sub_1402946B8(CurrentPrcb, CurrentThread, v61);
              RtlRaiseStatus(-1073741423);
            }
            if ( *(int *)(v34 + 4) <= 0 && (CurrentThread != v50 || *(_BYTE *)(v34 + 2) != v49) )
            {
LABEL_23:
              if ( v33 == v9 )
              {
                if ( v9 )
                {
                  v46 = v9;
                  do
                  {
                    sub_140217A2C(*v8++, CurrentThread, CurrentPrcb);
                    --v46;
                  }
                  while ( v46 );
                }
                sub_140217AC8(&v74, v9);
                v22 = *((_QWORD *)CurrentThread + 25);
                LOBYTE(v47) = v21;
                *((_QWORD *)CurrentThread + 122) = 0LL;
                sub_1402946B8(CurrentPrcb, CurrentThread, v47);
              }
              else if ( (unsigned int)sub_140217FB0(CurrentThread, v64, v70) )
              {
                sub_140217AC8(&v74, v9);
                LOBYTE(v51) = v21;
                sub_1402946B8(CurrentPrcb, CurrentThread, v51);
                LODWORD(v22) = 258;
              }
              else
              {
                v36 = 0;
                if ( v9 )
                {
                  v37 = v35;
                  do
                  {
                    v38 = v37[4] + 8;
                    v39 = *(__int64 ***)(v37[4] + 16);
                    if ( *v39 != (__int64 *)v38 )
                      __fastfail(3u);
                    *v37 = v38;
                    ++v36;
                    v37[1] = (__int64)v39;
                    *v39 = v37;
                    *(_QWORD *)(v38 + 8) = v37;
                    v37 += 6;
                  }
                  while ( v36 < v9 );
                }
                sub_140217AC8(&v74, v9);
                *((_BYTE *)CurrentThread + 587) = v9;
                v40 = 0LL;
                if ( v10 )
                {
                  do
                  {
                    _BitScanForward64(&v52, v10);
                    v53 = v52;
                    v67 = v52;
                    v54 = v8[(unsigned int)v52];
                    v65 &= ~(1LL << v52);
                    v55 = sub_140347C10(v54, 0LL, 0LL);
                    v56 = v55;
                    if ( !v55 )
                      break;
                    v40 |= 1LL << v53;
                    sub_14029F580(v55);
                    v10 = v65;
                    v57 = v27++;
                    v75[v57 + 504] = (2 * *(_BYTE *)(v56 + 16)) | 1;
                  }
                  while ( v10 );
                  v9 = v66;
                }
                v41 = sub_1402B5240((_DWORD)CurrentThread, v71, v64, v70, 0LL);
                LODWORD(v22) = v41;
                if ( v41 <= 0x3F || (v42 = 0, v41 - 128 <= 0x3F) )
                  v42 = 1;
                *((_QWORD *)CurrentThread + 122) = 0LL;
                v43 = 0;
                if ( v40 )
                {
                  v58 = v72;
                  do
                  {
                    _BitScanForward64(&v59, v40);
                    v68 = v59;
                    v40 &= ~(1LL << v59);
                    v65 = (unsigned int)v59;
                    v60 = (char *)KeGetCurrentThread() + 96 * (v75[v43 + 504] >> 1) + 1696;
                    sub_140347C10(v58[(unsigned int)v59], v60, 0LL);
                    if ( v42 )
                      v60[18] = 1;
                    else
                      sub_140353BB0(v58[v65]);
                    ++v43;
                  }
                  while ( v40 );
                  CurrentThread = v73;
                  v9 = v66;
                }
                if ( (_DWORD)v22 == 256 )
                {
                  v21 = 0;
                  v62 = 0;
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
                  {
                    v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                    v19 = *(_DWORD *)(v20 + 20) | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4u;
                    *(_DWORD *)(v20 + 20) = v19;
                  }
                  v8 = v72;
                  v10 = 0LL;
                  v7 = v69;
                  v11 = a4;
                  *((_BYTE *)CurrentThread + 390) = CurrentIrql;
                  goto LABEL_6;
                }
              }
              return (unsigned int)v22;
            }
          }
          else if ( *(int *)(v34 + 4) <= 0 )
          {
            goto LABEL_23;
          }
          if ( ++v33 >= v9 )
            goto LABEL_23;
        }
      }
    }
    else
    {
      v25 = v75;
      v26 = v9 - 1;
      do
      {
        if ( *v25 != v24 )
        {
          v24 = *v25;
          sub_1402F3290(*v25);
        }
        ++v25;
        --v26;
      }
      while ( v26 );
      v10 = v65;
      v27 = 0;
      v21 = v62;
    }
    v28 = 0;
    v29 = v8;
    v30 = v9;
    v31 = v71 + 17;
    do
    {
      v32 = (_BYTE *)*v29;
      *(_BYTE *)(v31 - 1) = 0;
      *(_BYTE *)v31 = 4;
      *(_WORD *)(v31 + 1) = 0;
      if ( CurrentThread )
        *(_QWORD *)(v31 + 7) = CurrentThread;
      *(_QWORD *)(v31 + 15) = v32;
      v31 += 48LL;
      if ( (*(_BYTE *)*v29 & 0x7F) == 2 && (*(_BYTE *)(*v29 + 48LL) & 2) != 0 )
        v10 |= 1LL << v28;
      ++v28;
      ++v29;
      --v30;
    }
    while ( v30 );
    v65 = v10;
    goto LABEL_19;
  }
  return (unsigned int)v22;
}
