/*
 * XREFs of sub_14031A5C0 @ 0x14031A5C0
 * Callers:
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14020DAE8 @ 0x14020DAE8 (sub_14020DAE8.c)
 *     sub_140222280 @ 0x140222280 (sub_140222280.c)
 *     sub_140234128 @ 0x140234128 (sub_140234128.c)
 *     sub_140252ED0 @ 0x140252ED0 (sub_140252ED0.c)
 *     sub_14027D2D8 @ 0x14027D2D8 (sub_14027D2D8.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 *     sub_14031B1C0 @ 0x14031B1C0 (sub_14031B1C0.c)
 *     sub_14031B510 @ 0x14031B510 (sub_14031B510.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_14062E40C @ 0x14062E40C (sub_14062E40C.c)
 */

__int64 __fastcall sub_14031A5C0(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r12d
  __int64 v5; // r13
  int v7; // r15d
  __int64 v8; // rbp
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // esi
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r11
  unsigned __int64 *v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // r8
  int v28; // r8d
  int v29; // r10d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r10
  _DWORD *v35; // rax
  char v36; // cl
  unsigned __int64 v37; // rax
  int v38; // eax
  bool v39; // zf
  struct _KPRCB *v40; // rcx
  int v41; // edx
  unsigned int v42; // r10d
  int v43; // r8d
  __int64 v44; // rax
  unsigned int v45; // edi
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // rdx
  char v49; // al
  char v50; // al
  __int64 v52; // rax
  char v53; // cl
  int v54; // eax
  char v55; // cl
  unsigned __int64 v56; // rcx
  int v57; // esi
  __int64 v58; // rcx
  __int64 v59; // rsi
  char v60; // cl
  char v61; // al
  __int64 v62; // rdx
  char v63; // al
  int v64; // edi
  unsigned __int64 v65; // rdx
  int v66; // ecx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 *v69; // r9
  __int64 v70; // r10
  unsigned __int64 *v71; // r8
  __int64 v72; // rcx
  unsigned __int64 v73; // rax
  __int64 v74; // r8
  unsigned __int64 *v75; // rcx
  unsigned __int64 v76; // rdx
  char *v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v81; // rax
  int v82; // eax
  volatile LONG *v83; // rdi
  unsigned __int64 *v84; // r11
  __int64 v85; // rdi
  unsigned int v86; // r10d
  __int64 v87; // rcx
  __int64 v88; // rcx
  volatile LONG *v89; // rdi
  unsigned __int64 *v90; // [rsp+20h] [rbp-68h]
  unsigned __int64 v91; // [rsp+28h] [rbp-60h]
  int v92; // [rsp+90h] [rbp+8h] BYREF
  __int64 v93; // [rsp+98h] [rbp+10h]
  int v94; // [rsp+A0h] [rbp+18h]
  __int64 v95; // [rsp+A8h] [rbp+20h]

  v93 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = a3;
  v7 = 0;
  v8 = a3;
  v9 = (unsigned __int64 *)(16LL * a3 + a1 + 80);
  v95 = 16LL * a3;
  v90 = v9;
  if ( a2 < *v9 )
    a2 = *v9;
  if ( a3 == 3 )
  {
    v10 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v10 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v10 > v9[1] )
      v10 = v9[1];
  }
  v91 = v10;
  v11 = 0;
  v94 = 0;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      v12 = 0xFFFFF68000000000uLL;
      if ( v11 )
      {
        v94 = 0;
        v11 = 0;
        if ( v7 >= 4 )
          break;
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        {
          if ( (_DWORD)v5 != 3 )
            goto LABEL_76;
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            sub_14027D2D8(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
          }
          else
          {
            v83 = (volatile LONG *)sub_140282AD0(*(_QWORD *)(a1 + 24));
            ExAcquireSpinLockExclusive(v83);
            *((_DWORD *)v83 + 1) = 0;
            if ( (*(_DWORD *)a1 & 0x400) != 0 )
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51BA4);
            *(_BYTE *)(a1 + 4) &= ~1u;
          }
        }
      }
      v13 = ++*(_QWORD *)(a1 + 144);
      if ( (v13 & 0xF) == 0 && (*(_DWORD *)a1 & 8) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 72);
        v20 = *(_QWORD *)(v19 + 16896);
        if ( v20 < 0x420 )
        {
          v84 = (unsigned __int64 *)(v19 + 6616);
          v85 = 0LL;
          while ( 1 )
          {
            v12 = *v84;
            v86 = 0;
            if ( dword_140C5073C )
              break;
LABEL_205:
            ++v85;
            ++v84;
            if ( v85 > 1 )
            {
              v7 = 5;
              goto LABEL_75;
            }
          }
          while ( 1 )
          {
            v20 += *(unsigned __int16 *)v12;
            if ( v20 >= 0x420 )
              break;
            ++v86;
            v12 += 16LL;
            if ( v86 >= dword_140C5073C )
              goto LABEL_205;
          }
          v11 = v94;
        }
      }
      if ( (*(_DWORD *)a1 & 2) == 0 || ((unsigned __int8)v13 & *(_BYTE *)(a1 + 6)) != 0 )
        goto LABEL_11;
      v34 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v34 + 184) & 7) == 2 )
        v35 = &unk_140C53D00;
      else
        v35 = (_DWORD *)(v34 + 192);
      if ( (*v35 & 0x40000000) != 0 )
        goto LABEL_166;
      if ( (*(_DWORD *)a1 & 4) != 0 )
      {
        v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v36 = *(_BYTE *)(v34 + 184) & 7;
        v92 = 0;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v36 )
          {
            if ( v36 == 7 )
            {
              v81 = (_QWORD *)((char *)CurrentPrcb + 38616);
            }
            else
            {
              if ( v36 == 5 )
              {
                v39 = *((_QWORD *)CurrentPrcb + 4824) == 0LL;
                goto LABEL_57;
              }
              v81 = (_QWORD *)((char *)CurrentPrcb + 38664);
            }
          }
          else
          {
            v81 = (_QWORD *)((char *)CurrentPrcb + 38640);
          }
          v39 = *v81 == 0LL;
          goto LABEL_57;
        }
        if ( v12 < 0xFFFFF6FB7DBED000uLL )
          goto LABEL_54;
        if ( !v36 )
        {
          if ( v12 <= 0xFFFFF6FB7DBEDFFFuLL
            && (v58 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 592LL)) != 0 )
          {
            v12 = (((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
            v38 = (*(_DWORD *)(v58 + 4 * v12) >> 30) & 1;
          }
          else
          {
LABEL_54:
            v37 = *(_QWORD *)v12;
            if ( v12 >= 0xFFFFF6FB7DBED000uLL
              && v12 <= 0xFFFFF6FB7DBED7F8uLL
              && (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v37 & 1) != 0
              && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
            {
              v87 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v87 )
              {
                v12 = (v12 >> 3) & 0x1FF;
                v88 = *(_QWORD *)(v87 + 8 * v12);
                if ( (v88 & 0x20) != 0 )
                  v37 |= 0x20uLL;
                if ( (v88 & 0x42) != 0 )
                  v37 |= 0x42uLL;
              }
            }
            v38 = (v37 >> 60) & 2;
          }
          v39 = v38 == 0;
LABEL_57:
          if ( !v39 )
            goto LABEL_166;
          goto LABEL_58;
        }
        if ( v12 > 0xFFFFF6FB7DBEDFFFuLL )
          goto LABEL_54;
        v77 = sub_14020DAE8(v34, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v92);
        if ( ((*(_DWORD *)v77 >> v92) & 2) != 0 )
          goto LABEL_166;
      }
LABEL_58:
      if ( (*(_DWORD *)a1 & 0x400) != 0 && (dword_140C51BA4 & 0x40000000) != 0 )
        goto LABEL_166;
      if ( *(_BYTE *)(a1 + 7) >= 2u )
        goto LABEL_11;
      v40 = KeGetCurrentPrcb();
      v41 = *((_DWORD *)v40 + 3311);
      v12 = *((unsigned int *)v40 + 8107);
      v42 = *((_DWORD *)v40 + 8279);
      if ( (v41 & 1) == 0 )
      {
        v43 = 0;
        if ( (v41 & 0x1E) != 0 )
        {
          v45 = 2;
          goto LABEL_163;
        }
        if ( *((_BYTE *)v40 + 13241) )
        {
          v45 = 3;
          goto LABEL_163;
        }
        v44 = *((_QWORD *)v40 + 2);
        if ( v44 && v44 != *((_QWORD *)v40 + 1) )
        {
          v45 = 4;
          goto LABEL_163;
        }
LABEL_64:
        if ( (unsigned int)v12 <= 7 )
          goto LABEL_11;
        if ( !v43 )
        {
LABEL_66:
          _disable();
          *((_DWORD *)v40 + 8107) = 0;
          *((_DWORD *)v40 + 8279) = 0;
          sub_140222280((__int64)v40);
          _enable();
          v45 = 0;
          goto LABEL_163;
        }
        goto LABEL_219;
      }
      v43 = 1;
      if ( v42 <= 7 )
        goto LABEL_64;
      if ( *((_BYTE *)v40 + 13241) )
      {
        v45 = 1;
        goto LABEL_163;
      }
LABEL_219:
      if ( (v41 & 0x1E) != 0 )
      {
        v45 = 5;
      }
      else
      {
        if ( *((_QWORD *)v40 + 1) == *((_QWORD *)v40 + 3) )
          goto LABEL_66;
        v45 = 6;
      }
LABEL_163:
      if ( (DWORD1(xmmword_140D06900) & 0x4000000) != 0 )
        sub_14062E40C(v45, (unsigned int)v12, v42);
      if ( v45 )
      {
LABEL_166:
        v82 = sub_140234128(a1, 1LL);
        if ( v82 >= 4 )
          v7 = v82;
        goto LABEL_96;
      }
LABEL_11:
      if ( (*(_DWORD *)a1 & 0x20) != 0 )
      {
        v15 = sub_14031B510(a1, a2, (unsigned int)v5, v12);
        if ( v15 == 3 )
        {
          v11 = 1;
          v7 = 4;
          v94 = 1;
          goto LABEL_20;
        }
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
          goto LABEL_96;
        v46 = *(_QWORD *)(a1 + 64);
        if ( v46 && v46 == a2 )
        {
          *(_QWORD *)(a1 + 64) = 0LL;
          goto LABEL_37;
        }
      }
      else
      {
        v15 = sub_14031B1C0(a1, a2, (unsigned int)v5, v12);
      }
      if ( !v15 )
        goto LABEL_14;
      if ( v15 != 1 && (int)v5 > ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
      {
        v52 = *(_QWORD *)(a1 + 160);
        v53 = *(_BYTE *)(a1 + 4) | 2;
        *(_BYTE *)(a1 + 4) = v53;
        if ( v52 )
        {
          v54 = sub_14042A5E0(a1, v14);
          v53 = *(_BYTE *)(a1 + 4);
LABEL_86:
          v55 = v53 & 0xFD;
          *(_BYTE *)(a1 + 4) = v55;
          if ( (v55 & 1) != 0 )
          {
            if ( v54 >= 4 )
            {
LABEL_195:
              if ( v54 == 5 )
                v7 = 5;
              goto LABEL_96;
            }
          }
          else if ( v54 >= 4 )
          {
            goto LABEL_195;
          }
        }
        else
        {
          v54 = 0;
          if ( *(_BYTE *)(a1 + 7) != 17 )
            goto LABEL_86;
          v55 = v53 & 0xFD;
          *(_BYTE *)(a1 + 4) = v55;
        }
        if ( (v55 & 1) != 0 )
          goto LABEL_96;
        v56 = (__int64)(a2 << 25) >> 16;
        if ( v56 < *(_QWORD *)(a1 + 16 * v5 + 64) )
          v56 = *(_QWORD *)(a1 + 16 * v5 + 64);
        if ( v56 <= *(_QWORD *)(a1 + 16 * v5 + 72) )
        {
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            sub_14031DE00(v93, a2, 0LL);
            sub_14020D8D0(v93, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            *(_QWORD *)(a1 + 48) = a2;
          }
          v57 = 0;
          v7 = sub_14031A5C0(a1, (__int64)(a2 << 25) >> 16, (unsigned int)(v5 - 1));
          if ( *v90 != a2 )
          {
            LOBYTE(v57) = (*v90 & 0xFFF) == 0;
            v66 = *(_DWORD *)a1 & 0x4000;
            if ( v66 && a2 < *v90 )
            {
              if ( (*(_BYTE *)(a1 + 4) & 1) == 0 && (unsigned int)sub_140234128(a1, 1LL) == 5 )
                v7 = 5;
              a2 = *v90;
              v11 = 1;
              v94 = 1;
              goto LABEL_20;
            }
            v67 = v95;
            v68 = a2;
            *(_QWORD *)(a1 + 64) = a2;
            if ( !v66 || (v69 = (unsigned __int64 *)(a1 + v67 + 80), a2 > *v69) )
            {
              v69 = (unsigned __int64 *)(v67 + a1 + 80);
              *v69 = a2;
            }
            v70 = v5;
            if ( v5 < 3 )
            {
              v71 = v69 + 2;
              v72 = 3 - v5;
              do
              {
                v68 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                *v71 = v68;
                v71 += 2;
                --v72;
              }
              while ( v72 );
              v70 = v5;
            }
            v73 = a2;
            v74 = v70;
            if ( v70 )
            {
              v75 = v69 - 2;
              do
              {
                v76 = (__int64)(v73 << 25) >> 16;
                if ( (*(_DWORD *)a1 & 0x4000) == 0 || (v73 = *v75, v76 > *v75) )
                {
                  v73 = v76;
                  *v75 = v76;
                }
                v75 -= 2;
                --v74;
              }
              while ( v74 );
            }
          }
          if ( v7 >= 4 || (*(_BYTE *)(a1 + 4) & 1) != 0 )
            goto LABEL_96;
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            if ( v57
              || (v59 = v93, !(unsigned int)sub_14031DE00(v93, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL)) )
            {
              if ( (unsigned int)sub_140234128(a1, 1LL) == 5 )
                v7 = 5;
LABEL_96:
              v11 = 1;
              v94 = 1;
              goto LABEL_20;
            }
            sub_14020D8D0(v59, a2);
            *(_QWORD *)(a1 + 48) = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          v11 = v94;
        }
        v8 = v5;
      }
LABEL_37:
      v28 = *(_DWORD *)a1;
      v29 = *(_DWORD *)a1 & 1;
      if ( !v29 && !(_DWORD)v5 )
      {
        v30 = *(_QWORD *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        if ( (unsigned __int8)((HIBYTE(v30) & 0xF) - 9) <= 1u )
        {
          if ( (*(_BYTE *)(v93 + 184) & 7) == 0 )
          {
            v78 = sub_1402CFEB0(a2);
            v79 = (__int64)(((sub_140252ED0(v78) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - a2) >> 3;
            if ( v79 > 0xFFFFFFFFLL )
              *(_DWORD *)(a1 + 8) = -1;
            else
              *(_DWORD *)(a1 + 8) = v79;
          }
LABEL_14:
          v7 = 0;
          goto LABEL_15;
        }
        if ( (HIBYTE(v30) & 0xF) == 8 && (v28 & 0x8000) == 0 )
          goto LABEL_14;
      }
      v31 = *(_QWORD *)(a1 + 64);
      if ( v31 && v31 == *v90 )
        *(_QWORD *)(a1 + 64) = 0LL;
      v32 = *(_QWORD *)(a1 + 56);
      if ( v32 && v32 == *v90 )
        *(_QWORD *)(a1 + 56) = 0LL;
      if ( (v28 & 0x40) != 0 || (int)v5 >= 1 && !v29 && (*(_BYTE *)(v93 + 184) & 7) != 0 )
        goto LABEL_14;
      v33 = sub_14042A5E0(a1, a2);
      v7 = v33;
      if ( v33 == 2 )
      {
        v7 = 0;
        goto LABEL_18;
      }
      if ( v33 == 3 )
      {
        v7 = 0;
        sub_140234128(a1, 1LL);
        sub_1405B8348(*(_QWORD *)(a1 + 72));
        v11 = 1;
        v94 = 1;
        goto LABEL_18;
      }
LABEL_15:
      v16 = *(unsigned int *)(a1 + 8) + 1LL;
      *(_DWORD *)(a1 + 8) = 0;
      v17 = a2 + 8 * v16;
      v18 = (a2 >> 9) & 0x7FFFFFFFF8LL;
      a2 = v17;
      if ( (_DWORD)v5 || ((v17 >> 9) & 0x7FFFFFFFF8LL) != v18 )
      {
        v21 = v17;
        if ( (*(_DWORD *)a1 & 0x4000) == 0 || (v22 = (unsigned __int64 *)(a1 + v95 + 80), v17 > *v22) )
        {
          v22 = (unsigned __int64 *)(v95 + a1 + 80);
          *v22 = v17;
        }
        if ( v8 < 3 )
        {
          v23 = v22 + 2;
          v24 = 3 - v8;
          do
          {
            v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *v23 = v21;
            v23 += 2;
            --v24;
          }
          while ( v24 );
          v11 = v94;
        }
        v25 = v8;
        if ( v8 )
        {
          v26 = v22 - 2;
          do
          {
            v27 = (__int64)(v17 << 25) >> 16;
            if ( (*(_DWORD *)a1 & 0x4000) == 0 || (v17 = *v26, v27 > *v26) )
            {
              v17 = v27;
              *v26 = v27;
            }
            v26 -= 2;
            --v25;
          }
          while ( v25 );
        }
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v17;
      }
LABEL_18:
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || v7 >= 4 )
        goto LABEL_96;
LABEL_20:
      if ( a2 > v91 )
        break;
      v8 = v5;
    }
  }
LABEL_75:
  if ( (_DWORD)v5 == 3 )
  {
    v60 = *(_BYTE *)(a1 + 4);
    v61 = v60;
    if ( (v60 & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 0x40) == 0 || (v61 = *(_BYTE *)(a1 + 4), v7 != 4) )
      {
        v62 = *(_QWORD *)(a1 + 160);
        v63 = v60 | 2;
        *(_BYTE *)(a1 + 4) = v60 | 2;
        if ( v62 )
        {
          v64 = sub_14042A5E0(a1, v62);
          v63 = *(_BYTE *)(a1 + 4);
        }
        else
        {
          v64 = 0;
        }
        v65 = *(_QWORD *)(a1 + 48);
        v61 = v63 & 0xFD;
        *(_BYTE *)(a1 + 4) = v61;
        if ( v65 )
        {
          sub_14020D8D0(v93, v65);
          v61 = *(_BYTE *)(a1 + 4);
          *(_QWORD *)(a1 + 48) = 0LL;
        }
        if ( v64 == 5 )
          v7 = 5;
      }
    }
    if ( (v61 & 1) != 0 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
      {
        sub_1402CF4F0(v93);
      }
      else
      {
        v89 = (volatile LONG *)sub_140282AD0(v93);
        ExAcquireSpinLockExclusive(v89);
        *((_DWORD *)v89 + 1) = 0;
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51BA4);
      }
      *(_BYTE *)(a1 + 4) &= ~1u;
    }
    return (unsigned int)v7;
  }
LABEL_76:
  v47 = *(_BYTE *)(a1 + 4);
  if ( (v47 & 1) != 0 )
    return (unsigned int)v7;
  v48 = *(_QWORD *)(a1 + 160);
  v49 = v47 | 2;
  *(_BYTE *)(a1 + 4) = v49;
  if ( v48 )
  {
    v4 = sub_14042A5E0(a1, v48);
    v49 = *(_BYTE *)(a1 + 4);
    goto LABEL_79;
  }
  if ( *(_BYTE *)(a1 + 7) == 17 )
  {
    *(_BYTE *)(a1 + 4) = v49 & 0xFD;
    return (unsigned int)v7;
  }
LABEL_79:
  v50 = v49 & 0xFD;
  *(_BYTE *)(a1 + 4) = v50;
  if ( (v50 & 1) == 0 && v4 < 4 || v4 != 5 )
    return (unsigned int)v7;
  return 5LL;
}
