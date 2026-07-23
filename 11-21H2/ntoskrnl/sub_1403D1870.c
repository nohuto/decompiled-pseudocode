/*
 * XREFs of sub_1403D1870 @ 0x1403D1870
 * Callers:
 *     sub_1403D1850 @ 0x1403D1850 (sub_1403D1850.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1403D1DA8 @ 0x1403D1DA8 (sub_1403D1DA8.c)
 *     sub_1403D1DE4 @ 0x1403D1DE4 (sub_1403D1DE4.c)
 *     sub_1403D1F74 @ 0x1403D1F74 (sub_1403D1F74.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403D1870(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // rbp
  unsigned int v10; // esi
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  __int64 Pool2; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned int v20; // r13d
  unsigned int *v21; // r12
  int *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // r15
  int v25; // eax
  unsigned int *v26; // rcx
  __int64 v27; // rsi
  bool v28; // zf
  _DWORD *v29; // r14
  unsigned int v30; // eax
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // [rsp+20h] [rbp-188h]
  unsigned int v41; // [rsp+24h] [rbp-184h]
  unsigned int v42; // [rsp+34h] [rbp-174h]
  __int64 v44; // [rsp+40h] [rbp-168h]
  __int64 v45; // [rsp+48h] [rbp-160h]
  _DWORD v46[68]; // [rsp+50h] [rbp-158h] BYREF

  memset(&v46[2], 0, 0x100uLL);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 33600);
  v45 = a1 + 33600;
  if ( v7 )
  {
    if ( a3 == 1 )
      return v6;
    v40 = *(_BYTE *)(v7 + 1);
    sub_1403D1F74(a1 + 33600);
  }
  else
  {
    v40 = 0;
  }
  v9 = *(unsigned int *)(a2 + 116);
  if ( (_DWORD)v9 )
  {
    v10 = 0;
    if ( *(_BYTE *)(a2 + 19) == 1 )
    {
      v11 = (_DWORD *)(a2 + 120);
      v12 = (unsigned int)v9;
      do
      {
        v13 = v10 + 1;
        if ( (*v11 & 0x100) != 0 )
          v13 = v10;
        v11 += 8;
        v10 = v13;
        --v12;
      }
      while ( v12 );
    }
    v14 = (344 * v9 + 1107) & 0xFFFFFFFC;
    v41 = v14 + 8 * *(_DWORD *)(a2 + 112);
    v42 = v41 + 24 * v10;
    v15 = (((v42 + 1000 * v9 + 47) & 0xFFFFFFF8) + 4 * v9 + 15) & 0xFFFFFFF8;
    if ( qword_140D01518 )
      v15 += ((_DWORD)v9 * *((_DWORD *)qword_140D01518 + 1)) << 6;
    Pool2 = ExAllocatePool2(64LL, v15, 1766674512LL);
    v44 = Pool2;
    v17 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 36) = a3;
      *(_QWORD *)(Pool2 + 40) = *(_QWORD *)(a2 + 72);
      *(_BYTE *)Pool2 = *(_BYTE *)(a2 + 19);
      *(_BYTE *)(Pool2 + 2) = *(_BYTE *)(a2 + 16);
      *(_BYTE *)(Pool2 + 8) = *(_BYTE *)(a2 + 18);
      *(_DWORD *)(Pool2 + 64) = 0;
      *(_DWORD *)(Pool2 + 32) = v9;
      *(_QWORD *)(Pool2 + 600) = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(Pool2 + 624) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(Pool2 + 632) = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(Pool2 + 640) = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(Pool2 + 616) = *(_QWORD *)(a2 + 80);
      *(_QWORD *)(Pool2 + 608) = *(_QWORD *)(a2 + 64);
      *(_QWORD *)(Pool2 + 648) = *(_QWORD *)(a2 + 88);
      *(_QWORD *)(Pool2 + 656) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(Pool2 + 664) = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(Pool2 + 672) = *(_QWORD *)(a2 + 104);
      *(_QWORD *)(Pool2 + 680) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(Pool2 + 736) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(Pool2 + 1080) = 1;
      *(_QWORD *)(Pool2 + 744) = Pool2 + v14;
      *(_QWORD *)(Pool2 + 1096) = Pool2 + 1088;
      if ( v10 )
      {
        v18 = Pool2 + v41;
        *(_DWORD *)(Pool2 + 1048) = v10;
        *(_QWORD *)(Pool2 + 1056) = v18;
        v19 = v18 + 24LL * v10;
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)(Pool2 + 72) = 2097184LL;
      memset((void *)(Pool2 + 80), 0, 0x100uLL);
      v20 = 0;
      v21 = (unsigned int *)(v19 + 4);
      v22 = (int *)(a2 + 120);
      v23 = v17 + 1368;
      v24 = v17 + ((((v42 + 1000 * (_DWORD)v9 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v9 + 15) & 0xFFFFFFF8);
      do
      {
        *(_OWORD *)v23 = *((_OWORD *)v22 + 1);
        *(_QWORD *)(v23 - 264) = 2097153LL;
        memset((void *)(v23 - 256), 0, 0x100uLL);
        *(_BYTE *)(v23 + 72) = ((unsigned int)*v22 >> 3) & 0xF;
        *(_BYTE *)(v23 + 74) = *(_BYTE *)v22 & 1;
        *(_BYTE *)(v23 + 75) = (*v22 & 4) != 0;
        *(_BYTE *)(v23 + 76) = (*v22 & 2) != 0;
        v25 = *v22;
        if ( *v22 < 0 )
        {
          *(_DWORD *)(v23 + 28) = 1;
          *(_BYTE *)(v23 + 73) = 1;
          v25 = *v22;
        }
        *(_BYTE *)(v23 + 77) = (v25 & 0x80) != 0;
        *(_BYTE *)(v23 + 78) = BYTE1(*v22) & 1;
        *(_BYTE *)(v23 + 79) = (*v22 & 0x40000000) != 0;
        *(_DWORD *)(v23 + 16) = v22[1];
        *(_DWORD *)(v23 + 24) = v22[3];
        *(_DWORD *)(v23 + 20) = v22[2];
        *(_QWORD *)(v23 + 48) = v23 + 40;
        *(_QWORD *)(v23 + 40) = v23 + 40;
        if ( v20 && dword_140D050BC == 2 )
          *(_DWORD *)(v23 + 32) = 0x80000000;
        v26 = (unsigned int *)qword_140D01518;
        if ( qword_140D01518 )
        {
          *(_DWORD *)(v23 + 60) = *((_DWORD *)qword_140D01518 + 1);
          *(_QWORD *)(v23 + 64) = v24;
          v24 += (unsigned __int64)v26[1] << 6;
        }
        if ( v21 != (unsigned int *)4 && (*v22 & 0x100) == 0 )
        {
          v21 -= 6;
          *((_BYTE *)v21 - 3) = 1;
          *v21 = v20;
        }
        ++v20;
        v23 += 344LL;
        v22 += 8;
      }
      while ( v20 < (unsigned int)v9 );
      v27 = v44 + v42;
      v28 = qword_140D01518 == 0LL;
      *(_QWORD *)(v44 + 1032) = v44 + ((v42 + 1000 * (_DWORD)v9 + 47) & 0xFFFFFFF8);
      *(_DWORD *)v27 = v9;
      if ( !v28 )
      {
        v37 = (__int64 *)(v27 + 200);
        v38 = v9;
        v39 = v44 + 1400;
        do
        {
          *v37 = v39;
          v39 += 344LL;
          v37 += 125;
          --v38;
        }
        while ( v38 );
      }
      KeAcquireSpinLockAtDpcLevel(&qword_140C23008);
      v29 = *(_DWORD **)v45;
      *(_QWORD *)v45 = v44;
      KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
      if ( v40 )
        *(_DWORD *)(v44 + 28) = v29[7];
      if ( !v29 || (v30 = v29[4], v30 >= (unsigned int)v9) )
        v30 = 0;
      *(_DWORD *)(v44 + 16) = v30;
      *(_BYTE *)(v44 + 1) = v40;
      v31 = *(_QWORD *)(v45 + 8);
      *(_QWORD *)(v45 + 8) = v27;
      if ( v31 )
      {
        v34 = *(_QWORD *)(v31 + 24);
        v35 = 0;
        for ( *(_QWORD *)(v27 + 24) = v34; v35 < *(_DWORD *)v31; *(_QWORD *)(v27 + 24) = v34 )
        {
          v36 = v35++;
          v34 += *(_QWORD *)(1000 * v36 + v31 + 40);
        }
        v32 = a1;
      }
      else
      {
        v32 = a1;
        *(_QWORD *)(v27 + 24) = DesiredTime * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
      }
      sub_1403D1DE4(v45);
      if ( v31 )
        *(_DWORD *)(v27 + 8) = *(_DWORD *)(v31 + 8) + 1;
      v46[0] = 2097153;
      memset(&v46[1], 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v46, *(_DWORD *)(v32 + 36));
      LOBYTE(v33) = sub_1403D1DA8(v44);
      sub_14042A5E0(v33, v46);
      if ( *(_DWORD *)(v44 + 36) != 1 && *(_BYTE *)v44 == 1 )
        qword_140D06CB0 = (unsigned int)(10000 * dword_140D0524C);
      if ( v29 )
        ExFreePoolWithTag(v29, 0x694D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
