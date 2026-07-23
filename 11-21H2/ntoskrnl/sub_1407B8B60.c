/*
 * XREFs of sub_1407B8B60 @ 0x1407B8B60
 * Callers:
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     KeGetCurrentNodeNumber @ 0x140221E50 (KeGetCurrentNodeNumber.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405B204C @ 0x1405B204C (sub_1405B204C.c)
 *     sub_1405B2088 @ 0x1405B2088 (sub_1405B2088.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 *     sub_1406A2588 @ 0x1406A2588 (sub_1406A2588.c)
 *     sub_1406BF94C @ 0x1406BF94C (sub_1406BF94C.c)
 *     sub_1406E97B4 @ 0x1406E97B4 (sub_1406E97B4.c)
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 *     sub_1406F8804 @ 0x1406F8804 (sub_1406F8804.c)
 *     sub_1406FCFF0 @ 0x1406FCFF0 (sub_1406FCFF0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14079EC14 @ 0x14079EC14 (sub_14079EC14.c)
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_14096B308 @ 0x14096B308 (sub_14096B308.c)
 *     sub_14096B508 @ 0x14096B508 (sub_14096B508.c)
 *     sub_14097CD04 @ 0x14097CD04 (sub_14097CD04.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 *     sub_14097EF10 @ 0x14097EF10 (sub_14097EF10.c)
 *     sub_14097F038 @ 0x14097F038 (sub_14097F038.c)
 *     sub_140982DE4 @ 0x140982DE4 (sub_140982DE4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407B8B60(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // r13d
  int v8; // esi
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // r14
  int v14; // ecx
  int v15; // r9d
  int v16; // r8d
  unsigned __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  struct _KTHREAD *CurrentThread; // r12
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  bool v24; // zf
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  _QWORD *v27; // r13
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // r15d
  unsigned __int64 v31; // r12
  __int64 v32; // rcx
  unsigned __int64 v33; // r12
  PVOID v34; // r15
  __int64 v35; // rbx
  int v36; // eax
  __int64 result; // rax
  int v38; // eax
  int v39; // r8d
  int v40; // ebx
  unsigned __int64 v41; // r10
  int v42; // r9d
  __int64 v43; // rcx
  unsigned int v44; // eax
  int v45; // ecx
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // rax
  __int64 *v49; // rsi
  __int64 v50; // rax
  ULONG_PTR v51; // rsi
  int v52; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *v53; // [rsp+58h] [rbp-70h]
  unsigned __int64 v54; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h]
  _QWORD *v56; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v57; // [rsp+78h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-48h]
  __int64 *v59; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v60; // [rsp+E0h] [rbp+18h]
  unsigned __int64 *v61; // [rsp+E8h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v5 = 0;
  v52 = 0;
  P = 0LL;
  if ( a2 == (__int64 *)1 )
    return 3221225485LL;
  v8 = 8;
  v9 = *(_QWORD *)(a1[11] + 1680LL);
  if ( a1[1] - *a1 + 1LL != a1[3] )
    v8 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
    return 3221225541LL;
  if ( (a1[8] & 0x20000000) != 0 && (dword_140D06880 & 0x80000) == 0
    || (a3 & 2) == 0
    || (result = sub_14079EC14(a1[12]), v52 = result, (int)result >= 0) )
  {
    v10 = ((a1[3] & 0xFFFLL) != 0) + (a1[3] >> 12);
    v54 = v10;
    LOWORD(v11) = KeGetCurrentNodeNumber();
    v12 = sub_14030B860(64LL, 0x40uLL, 0x53646156u, v11 | 0x80000000);
    v13 = (__int64)v12;
    if ( !v12 )
      return 3221225626LL;
    v14 = *((_DWORD *)a1 + 13);
    *v12 = -2LL;
    v12[1] = -2LL;
    v12[2] = -2LL;
    BugCheckParameter2 = (ULONG_PTR)(v12 + 5);
    v12[5] = 0LL;
    *((_DWORD *)v12 + 12) ^= (*((_DWORD *)v12 + 12) ^ (v14 << 12)) & 0x7F000;
    v15 = *((_DWORD *)v12 + 12);
    if ( v14 )
    {
      *(_BYTE *)(*(_QWORD *)(a1[11] + 1680LL) + 340LL) = 1;
      v15 = *((_DWORD *)v12 + 12);
    }
    v16 = *((_DWORD *)a1 + 10);
    if ( (v16 & 0x1000) != 0 )
    {
      *((_DWORD *)v12 + 13) |= 0x80000000;
      v17 = v10;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = *((_DWORD *)a1 + 16);
    *((_DWORD *)v12 + 12) = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)a3 << 7)) & 0xF80 | 0x200000;
    if ( (v18 & 0x40000000) != 0 )
      *((_DWORD *)v12 + 12) = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)a3 << 7)) & 0xF80 | 0x8200000;
    if ( (v18 & 1) != 0 )
    {
      v17 = 0x7FFFFFFFELL;
    }
    else if ( (v18 & 0x8000000) != 0 )
    {
      v17 = 0x7FFFFFFFDLL;
    }
    v19 = (*((_DWORD *)v12 + 13) ^ v17) & 0x7FFFFFFF;
    *(_BYTE *)(v13 + 34) = v17 >> 31;
    *(_DWORD *)(v13 + 52) ^= v19;
    CurrentThread = KeGetCurrentThread();
    v21 = v16 & 0x20400000;
    v53 = CurrentThread;
    if ( (v16 & 0x20400000) == 0x20000000 )
    {
      v22 = v8 | 0x10;
      v5 = (*((_DWORD *)a1 + 28) >> 4) & 1 | 2;
    }
    else
    {
      if ( v21 != 541065216 )
      {
        if ( v21 != 0x400000 )
        {
          v22 = v8;
          if ( (v16 & 0x800000) == 0 )
            goto LABEL_21;
          if ( !(unsigned int)sub_1406E97B4(v13) )
          {
            v30 = -1073741670;
            goto LABEL_71;
          }
          v44 = *(_DWORD *)(v13 + 48) & 0xFFFFFF8F | 0x40;
          goto LABEL_77;
        }
        v45 = a3 & 7;
        if ( (a3 & 0xFFFFFFF8) != 0x10 && (v45 == 4 || v45 == 1) )
        {
          v46 = a3;
          if ( (a1[14] & 1) == 0 )
          {
LABEL_95:
            v52 = sub_14097CD04(v13, v46, a1, a5);
            v22 = v8;
            if ( v52 < 0 )
            {
              v30 = -1073741670;
              goto LABEL_71;
            }
            v44 = *(_DWORD *)(v13 + 48) & 0xFBFFFF8F | 0x30;
LABEL_77:
            *(_DWORD *)(v13 + 48) = v44;
            goto LABEL_21;
          }
          if ( a1[13] )
          {
            v47 = *((_DWORD *)a1 + 12);
            v46 = a3 | 2;
            if ( (v47 & 0x1C000) == 0 )
              v46 = a3;
            if ( (v47 & 0x12000) != 0 )
              v46 = v46 & 0xFFFFFFFA | 4;
            goto LABEL_95;
          }
        }
        v30 = -1073741755;
        LOBYTE(v22) = v8;
        goto LABEL_71;
      }
      v22 = v8 | 0x10;
      v5 = 1;
      if ( (a1[14] & 2) == 0 )
        v22 = v8;
    }
LABEL_21:
    if ( v22 >= 0x10 )
    {
      v48 = a1[14];
      if ( (v48 & 4) != 0 )
      {
        if ( (v48 & 0x1A) == 0
          || ((v49 = v59) == 0LL ? (v50 = sub_14032A72C(a1[11])) : (v50 = *v59), (*(_DWORD *)(v50 + 4) & 0x40) == 0) )
        {
          v30 = -1073741811;
          goto LABEL_71;
        }
        if ( !SeSinglePrivilegeCheck(stru_140D3CA10, *((_BYTE *)a1 + 57)) )
        {
          v30 = -1073741727;
          goto LABEL_71;
        }
        *(_DWORD *)(v13 + 48) |= 0x1000000u;
      }
      else
      {
        v49 = v59;
      }
      v52 = sub_140982DE4(a1[11], v13, v49, 0LL);
      v30 = v52;
      if ( v52 < 0 )
        goto LABEL_71;
      if ( v49 )
        *a5 = *(_WORD *)*v49;
      if ( (a1[14] & 0x1A) != 0 )
        *(_DWORD *)(v13 + 48) |= 0x800000u;
    }
    v23 = (v5 << 19) | *(_DWORD *)(v13 + 48) & 0xFFE7FFFF;
    v24 = (a1[5] & 0x200000) == 0;
    *(_DWORD *)(v13 + 48) = v23;
    if ( !v24 )
    {
      v52 = sub_1406BF94C(a1[11], v13);
      v30 = v52;
      if ( v52 < 0 )
        goto LABEL_71;
      *(_DWORD *)(v13 + 48) |= 0x400000u;
      v23 = *(_DWORD *)(v13 + 48);
    }
    if ( (a1[14] & 1) != 0 )
    {
      if ( (a1[5] & 0x20400000) != 0x400000 && (v23 & 0xA00000) != 0xA00000 )
      {
        v30 = -1073741637;
        goto LABEL_71;
      }
      if ( !*((_DWORD *)a1 + 12) )
      {
        v30 = -1073741755;
        goto LABEL_71;
      }
    }
    else if ( *((_DWORD *)a1 + 12) )
    {
      v30 = -1073741755;
      goto LABEL_71;
    }
    v25 = 0LL;
    v24 = (a1[8] & 0x4000000) == 0;
    v54 = 0LL;
    if ( !v24 )
    {
      v52 = sub_14097EE60(v13);
      v30 = v52;
      if ( v52 < 0 )
        goto LABEL_78;
      LOBYTE(v22) = v22 | 4;
    }
    v26 = a1[11];
    v27 = 0LL;
    v56 = 0LL;
    LOBYTE(v22) = v22 | 2;
    sub_14030B820((__int64)CurrentThread, v26);
    v28 = a1[11];
    if ( (*(_DWORD *)(v28 + 1124) & 0x20) != 0 )
    {
      v30 = -1073741558;
      *v61 = 0LL;
      goto LABEL_71;
    }
    v29 = *((_DWORD *)a1 + 16);
    if ( (v22 & 8) == 0 )
    {
      v30 = sub_1407B83C0(*((_DWORD *)a1 + 10), *a1, a1[1], a1[3], a1[2], 0LL, v60, v29, (__int64 *)&v56, &v54);
      if ( v30 >= 0 )
      {
        v25 = v54;
        v27 = v56;
        v31 = a1[3] + v54 - 1;
LABEL_30:
        v57 = v25 >> 12;
        sub_14030B420(v13, v25 >> 12);
        v33 = v31 >> 12;
        *(_DWORD *)(v13 + 28) = v33;
        v24 = (a1[14] & 1) == 0;
        *(_BYTE *)(v13 + 33) = BYTE4(v33);
        if ( v24 )
        {
          v52 = sub_1407B88C0(v32, a1[11]);
          v30 = v52;
          if ( v52 >= 0 )
          {
            v34 = P;
            if ( P )
            {
              sub_14097F038(P, a1[11], v9 + 48);
              ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
              v35 = (__int64)v53;
            }
            else
            {
              v35 = (__int64)v53;
              sub_14030B7F0((__int64)v53, v13);
            }
            sub_14030E390(v13, a1[11], 0);
            if ( v27 )
              sub_1406FCFF0(v57, v33, v27);
            if ( !*((_DWORD *)a1 + 30) )
            {
              v36 = *(_DWORD *)(v13 + 48);
              if ( ((v36 & 0x200000) == 0 || (v36 & 0x800000) == 0 && (v36 & 0x180000u) < 0x100000) && !a1[9] )
              {
                if ( !v34 )
                {
                  sub_140281C44(v35, v13);
                  sub_140281A58(v35, a1[11]);
LABEL_43:
                  result = 0LL;
                  *v61 = v25;
                  return result;
                }
                v51 = BugCheckParameter2;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v51);
                sub_1402AFC00(v51);
                sub_140281A58(v35, a1[11]);
                v25 = v54;
                goto LABEL_144;
              }
            }
            sub_140281A58(v35, a1[11]);
            sub_14030EB64(v13);
            v38 = *(_DWORD *)(v13 + 48);
            if ( (v38 & 0x200000) != 0
              && ((v38 & 0x800000) != 0 || (v38 & 0x180000u) >= 0x100000)
              && *(int *)(v13 + 52) < 0
              && (v40 = sub_1405C2A4C(v13, *((_DWORD *)a1 + 13), *((_BYTE *)a1 + 56), v59), v40 < 0)
              || (v39 = *((_DWORD *)a1 + 30)) != 0 && (v40 = sub_1406F74A8(v13, 0LL, v39), v40 < 0) )
            {
              sub_1407BC0B0((PVOID)v13);
              return (unsigned int)v40;
            }
            if ( !a1[9] )
            {
LABEL_53:
              if ( !v34 )
              {
                sub_14032E700((char *)v13);
                goto LABEL_43;
              }
              sub_1405B204C((PVOID)v13);
LABEL_144:
              sub_14097EF10(v34);
              goto LABEL_43;
            }
            v24 = (a1[8] & 0x40000000) == 0;
            v42 = *((_DWORD *)a1 + 17);
            v59 = 0LL;
            if ( v24 )
            {
              if ( v42 != -2147483647 && (unsigned int)(v42 - 1) > 1 && v42 != 4 )
              {
                v30 = -1073741755;
                goto LABEL_142;
              }
              v30 = sub_1406A2588(v13, v25, a1[3], v42, 0, (__int64 *)&v59);
              if ( v30 >= 0 )
              {
                v43 = (__int64)v59;
                v34 = P;
LABEL_64:
                *(_QWORD *)a1[9] = qword_140C50680 ^ a1[11] ^ v43;
                goto LABEL_53;
              }
            }
            else
            {
              v43 = sub_1407B9190(v13, *(_DWORD *)(v13 + 24) << 12, (*(_DWORD *)(v13 + 28) << 12) | 0xFFFu, v42, 1);
              if ( v43 )
                goto LABEL_64;
              v30 = -1073741670;
            }
LABEL_142:
            sub_1407BC0B0((PVOID)v13);
            return (unsigned int)v30;
          }
        }
        else
        {
          sub_14096B508(v32, *((unsigned int *)a1 + 12));
          v30 = -1073741637;
        }
        CurrentThread = v53;
        goto LABEL_78;
      }
      sub_14096B308(a1[3], a1[2], *a1, a1[1]);
      *v61 = v54;
LABEL_71:
      if ( (v22 & 2) != 0 )
        sub_140281A58((__int64)v53, a1[11]);
      sub_1407B97B0(v13, 0LL);
      ExFreePoolWithTag((PVOID)v13, 0);
      return (unsigned int)v30;
    }
    if ( (v29 & 0x4000000) == 0 )
    {
      v31 = a1[1];
      if ( !sub_1406F8804(v28, *a1, a1[3], *a1, v31) )
      {
        v30 = -1073741800;
        *v61 = 0LL;
        goto LABEL_71;
      }
LABEL_57:
      v25 = v41;
      v54 = v41;
      goto LABEL_30;
    }
    P = (PVOID)sub_1405B2088(*a1, a1[1], *((_BYTE *)a1 + 57), &v52);
    if ( P )
    {
      v41 = *a1;
      v31 = a1[1];
      goto LABEL_57;
    }
    v30 = v52;
LABEL_78:
    *v61 = v25;
    if ( P )
      sub_140281C44((__int64)CurrentThread, (__int64)P);
    goto LABEL_71;
  }
  return result;
}
