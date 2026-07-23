/*
 * XREFs of sub_14065F10C @ 0x14065F10C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402E108C @ 0x1402E108C (sub_1402E108C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140461882 @ 0x140461882 (sub_140461882.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_14065F10C(__int64 a1, _QWORD *a2, int *a3, unsigned int *a4)
{
  size_t v4; // r15
  int v5; // edi
  unsigned int v9; // ebx
  __int64 v10; // rbp
  unsigned int i; // edx
  __int64 v12; // r13
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 (**v15)[2]; // rax
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned int *v18; // r14
  struct _KTHREAD *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // r8
  unsigned int v22; // eax
  _DWORD *v23; // r11
  char v24; // cl
  unsigned int v25; // r12d
  _BYTE *v26; // r10
  int v27; // r13d
  char *v28; // r9
  __int64 *v29; // r14
  int v30; // ecx
  int v31; // r12d
  unsigned int k; // r14d
  __int64 v34; // r10
  __int64 v35; // r12
  unsigned int v36; // eax
  _DWORD *v37; // rbp
  unsigned int v38; // r12d
  unsigned __int8 *v39; // r13
  unsigned int v40; // ebx
  __int64 *v41; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  int *v45; // rsi
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // ecx
  _DWORD *v49; // rdx
  unsigned int v50; // r11d
  _OWORD *v51; // r8
  int v52; // r10d
  unsigned int j; // r9d
  __int64 v54; // rax
  unsigned int v55; // eax
  _DWORD *v56; // rdx
  char *v57; // rcx
  __int64 v58; // rcx
  unsigned int v59; // [rsp+20h] [rbp-58h]
  __int64 v60; // [rsp+28h] [rbp-50h]
  __int64 v61; // [rsp+80h] [rbp+8h] BYREF
  int *v62; // [rsp+90h] [rbp+18h]
  unsigned int *v63; // [rsp+98h] [rbp+20h]

  v63 = a4;
  v62 = a3;
  v4 = *a4;
  v5 = 0;
  LODWORD(v61) = 0;
  v9 = 8;
  if ( a1 == qword_140D05008 )
    v10 = 2147353472LL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1320LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = *(&off_140A39080 + 2 * i);
    v14 = *v13 - *a2;
    if ( *v13 == *a2 )
      v14 = v13[1] - a2[1];
    if ( !v14 )
    {
      memset(a3, 0, v4);
      v58 = *((unsigned __int8 *)&off_140A39080 + 8 * v12 + 8);
      v40 = 24;
      if ( *(_BYTE *)(v10 + 2 * v58) )
      {
        v40 = 56;
        if ( (unsigned int)v4 < 0x38 )
          goto LABEL_85;
        a3[3] = 1;
        a3[6] = 1;
        *((_WORD *)a3 + 15) = *(unsigned __int8 *)(v10 + 2 * v58);
        *((_QWORD *)a3 + 5) = *(unsigned __int8 *)(v10 + 2 * v58 + 1);
      }
      else
      {
        if ( (unsigned int)v4 < 0x18 )
          goto LABEL_85;
        a3[3] = 0;
      }
      *a3 = 1;
      a3[5] = 1;
      a3[4] = 0;
      a3[2] = 0;
      goto LABEL_86;
    }
  }
  v15 = sub_1402E108C(a2);
  if ( v15 )
  {
    v61 = 0LL;
    v37 = a3 + 6;
    v38 = 0;
    v39 = (unsigned __int8 *)(a1 + 4232);
    v40 = 24;
    v41 = (__int64 *)v15;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      LOBYTE(v16) = 1;
      v60 = sub_140797594(a1, *v39, v16);
      if ( v60 )
      {
        sub_140461882(v41, 32LL * v38 + a1 + 4284, &v61);
        v44 = v61;
        if ( v61 )
        {
          ++v5;
          v40 += 32;
          if ( v40 <= (unsigned int)v4 )
          {
            *v37 = 1;
            *((_QWORD *)v37 + 2) = v44;
            *((_WORD *)v37 + 3) = *v39;
            v37 += 8;
          }
        }
        LOBYTE(v43) = 1;
        sub_1407981E8(v60, v43);
      }
      sub_1402F9540((__int64)KeGetCurrentThread());
      ++v38;
      v39 += 2;
    }
    while ( v38 < 8 );
    v45 = v62;
    v62[2] = 0;
    v45[3] = v5;
    v5 = 0;
    if ( v40 <= (unsigned int)v4 )
    {
      *v45 = 1;
LABEL_86:
      *v63 = v40;
      return (unsigned int)v5;
    }
LABEL_85:
    v5 = -1073741789;
    goto LABEL_86;
  }
  v17 = sub_1407968D0(a1, a2, 0LL);
  if ( v17 )
  {
    v18 = v63;
    memset(a3, 0, *v63);
    v19 = KeGetCurrentThread();
    --*((_WORD *)v19 + 242);
    ExAcquirePushLockExclusiveEx(v17 + 408, 0LL);
    v20 = v17 + 56;
    v21 = *(__int64 **)(v17 + 56);
    *(_QWORD *)(v17 + 416) = KeGetCurrentThread();
    if ( v21 == (__int64 *)(v17 + 56) )
    {
LABEL_24:
      *(_QWORD *)(v17 + 416) = 0LL;
      ExReleasePushLockEx(v17 + 408, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
      v31 = v61;
      if ( !(_DWORD)v61 )
      {
        v48 = v9 + 16;
        v49 = (int *)((char *)a3 + v9);
        v31 = 2;
        if ( v9 + 16 < v9 )
          goto LABEL_63;
        v50 = v9 + 48;
        v51 = (_OWORD *)((char *)a3 + v48);
        v52 = 0;
        for ( j = 0; j < 8; ++j )
        {
          v54 = 32 * (j + 4LL);
          if ( *(_DWORD *)(v54 + v17) )
          {
            ++v52;
            if ( v50 < v48 )
              goto LABEL_63;
            v48 += 32;
            v50 += 32;
            if ( v48 <= (unsigned int)v4 )
            {
              *v51 = *(_OWORD *)(v54 + v17);
              v51[1] = *(_OWORD *)(v54 + v17 + 16);
              v51 += 2;
            }
          }
        }
        if ( v48 <= (unsigned int)v4 )
        {
          v49[2] = 0;
          v49[1] = v52;
          *v49 = v48 - v9;
          v49[3] = 2;
        }
        v55 = v48 + 16;
        v56 = (int *)((char *)a3 + v48);
        if ( v48 + 16 < v48 )
          goto LABEL_63;
        v9 = v48 + 48;
        v57 = (char *)a3 + v55;
        if ( v55 + 32 < v55 )
          goto LABEL_63;
        if ( v9 <= (unsigned int)v4 )
        {
          v56[2] = 0;
          v56[1] = 0;
          *v56 = 0;
          v56[3] = 3;
          *(_DWORD *)v57 = *(_BYTE *)(v17 + 91) & 1;
          if ( (*(_BYTE *)(v17 + 91) & 1) != 0 )
          {
            v56[1] = 1;
            v57[4] = *(_BYTE *)(v17 + 90);
            *((_QWORD *)v57 + 2) = *(_QWORD *)(v17 + 80);
            *((_WORD *)v57 + 3) = *(_WORD *)(v17 + 88);
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v22 = v9 + 16;
        v23 = (int *)((char *)a3 + v9);
        v59 = v9;
        v24 = 0;
        v25 = v9;
        if ( v9 + 16 < v9 )
          break;
        LODWORD(v61) = v61 + 1;
        v26 = (char *)v21 + 98;
        v27 = 0;
        v28 = (char *)a3 + v22;
        v9 += 16;
        v29 = v21;
        if ( (*((_BYTE *)v21 + 98) & 8) != 0 )
        {
          v24 = 1;
          if ( (*(_BYTE *)(v17 + 91) & 1) != 0 )
          {
            v46 = v22 + 32;
            v27 = 1;
            if ( v46 < v9 )
              break;
            v9 = v46;
            if ( v46 <= (unsigned int)v4 )
            {
              *(_DWORD *)v28 = 1;
              v28[4] = *(_BYTE *)(v17 + 90);
              *((_QWORD *)v28 + 2) = *(_QWORD *)(v17 + 80);
              *((_WORD *)v28 + 3) = *(_WORD *)(v17 + 88);
            }
          }
        }
        else if ( *((_BYTE *)v21 + 100) || *((_BYTE *)v21 + 101) )
        {
          for ( k = 0; k < 8; ++k )
          {
            v34 = 32 * (k + 4LL);
            if ( *(_DWORD *)(v34 + v17) && ((unsigned __int8)(1 << k) & *((_BYTE *)v21 + 100)) != 0 )
            {
              ++v27;
              v47 = v9 + 32;
              if ( v9 + 32 < v9 )
                goto LABEL_62;
              v9 += 32;
              if ( v47 <= (unsigned int)v4 )
              {
                *(_OWORD *)v28 = *(_OWORD *)(v34 + v17);
                *((_OWORD *)v28 + 1) = *(_OWORD *)(v34 + v17 + 16);
                v28 += 32;
              }
            }
            v35 = v21[5];
            if ( v35 && *(_DWORD *)(v35 + v34) && ((unsigned __int8)(1 << k) & *((_BYTE *)v21 + 101)) != 0 )
            {
              ++v27;
              v36 = v9 + 32;
              if ( v9 + 32 < v9 )
                goto LABEL_62;
              v9 += 32;
              if ( v36 <= (unsigned int)v4 )
              {
                *(_OWORD *)v28 = *(_OWORD *)(v35 + v34);
                *((_OWORD *)v28 + 1) = *(_OWORD *)(v35 + v34 + 16);
                v28 += 32;
              }
            }
          }
          v26 = (char *)v21 + 98;
          v20 = v17 + 56;
          v25 = v59;
          v24 = 0;
          v29 = v21;
        }
        v21 = (__int64 *)*v21;
        if ( v9 > (unsigned int)v4 )
        {
          if ( v21 == (__int64 *)v20 )
            goto LABEL_23;
        }
        else
        {
          if ( v24 )
            v23[3] = 1;
          if ( (*v26 & 2) != 0 )
            v30 = *(_DWORD *)(v29[10] + 1088);
          else
            v30 = 0;
          v23[2] = v30;
          v23[1] = v27;
          if ( v21 == (__int64 *)v20 )
          {
            *v23 = 0;
LABEL_23:
            v18 = v63;
            goto LABEL_24;
          }
          *v23 = v9 - v25;
        }
      }
LABEL_62:
      *(_QWORD *)(v17 + 416) = 0LL;
      ExReleasePushLockEx(v17 + 408, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
      v18 = v63;
      v31 = v61;
LABEL_63:
      v9 = -1;
      v5 = -2147483643;
    }
    sub_140796B04((PVOID)v17);
    if ( v5 >= 0 )
    {
      if ( v9 > (unsigned int)v4 )
        v5 = -1073741789;
      else
        *a3 = v31;
    }
    *v18 = v9;
    return (unsigned int)v5;
  }
  return 3221226133LL;
}
