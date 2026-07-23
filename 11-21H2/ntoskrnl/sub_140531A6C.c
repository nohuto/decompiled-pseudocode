/*
 * XREFs of sub_140531A6C @ 0x140531A6C
 * Callers:
 *     sub_1405311A8 @ 0x1405311A8 (sub_1405311A8.c)
 *     sub_1405319C0 @ 0x1405319C0 (sub_1405319C0.c)
 *     sub_140531A20 @ 0x140531A20 (sub_140531A20.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405180C8 @ 0x1405180C8 (sub_1405180C8.c)
 *     sub_140532A28 @ 0x140532A28 (sub_140532A28.c)
 */

__int64 __fastcall sub_140531A6C(
        KSPIN_LOCK *a1,
        int a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        int a6,
        _QWORD *a7,
        int a8,
        __int64 a9)
{
  int v9; // r13d
  __int64 result; // rax
  int v12; // edi
  int v13; // r14d
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // bl
  __int64 v18; // r9
  int v19; // edi
  _QWORD *v20; // r13
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 CurrentIrql; // rcx
  __int64 v29; // r9
  __int64 v30; // rdi
  int v31; // r14d
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r15
  unsigned int v34; // edi
  int v35; // esi
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int16 v38; // bx
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rcx
  int v43; // r13d
  unsigned __int64 v44; // r14
  _BYTE *v45; // rax
  unsigned __int8 v46; // bl
  unsigned __int8 v47; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v49; // r9
  int v50; // eax
  int v51; // edi
  unsigned __int8 v52; // bl
  __int64 v53; // r9
  struct _EX_RUNDOWN_REF *v54; // rcx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  __int64 v57; // r8
  int v58; // eax
  _BYTE *v59; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-71h] BYREF
  __int64 v61; // [rsp+40h] [rbp-69h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+48h] [rbp-61h] BYREF
  __int128 v63; // [rsp+50h] [rbp-59h] BYREF
  int v64; // [rsp+60h] [rbp-49h]
  unsigned int v65; // [rsp+64h] [rbp-45h]
  __int64 v66; // [rsp+68h] [rbp-41h] BYREF
  _QWORD *v67; // [rsp+70h] [rbp-39h] BYREF
  __int64 v68; // [rsp+78h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-29h] BYREF
  __int64 v70; // [rsp+98h] [rbp-11h]
  _QWORD v71[8]; // [rsp+A0h] [rbp-9h] BYREF
  int v72; // [rsp+F0h] [rbp+47h] BYREF
  int v73; // [rsp+F8h] [rbp+4Fh]

  v73 = a2;
  v9 = a2;
  v62 = 0LL;
  v63 = 0LL;
  v59 = 0LL;
  v72 = 0;
  v67 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v66 = 0LL;
  result = *(_QWORD *)(*a1 + 8224);
  if ( (result & 0x10) == 0 )
    return result;
  v12 = a8;
  v13 = a6;
  v61 = 0LL;
  if ( a8 )
  {
    if ( a5 )
    {
      v26 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL;
      v27 = 3LL;
    }
    else
    {
      v26 = a2 & 0xFFFFF | 0x3000000000000000LL;
      v27 = 6LL;
    }
    v61 = v27;
    v60 = v26;
    CurrentIrql = KeGetCurrentIrql();
    v68 = CurrentIrql;
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v29 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      LOWORD(v27) = v61;
      *(_DWORD *)(v29 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = a1 + 19;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)a1 + 19);
    while ( 1 )
    {
      v30 = (unsigned int)(v12 - 1);
      v31 = 12;
      a8 = v30;
      v64 = 12;
      v32 = *(_QWORD *)(a9 + 8 * v30);
      if ( ((v32 >> 10) & 3) != 0 )
      {
        v31 = ((v32 >> 10) & 3) + 8 * ((v32 >> 10) & 3) + 12;
        v64 = v31;
      }
      v33 = v32 & 0xFFFFFFFFFFFFF000uLL;
      v34 = (*(_DWORD *)(a9 + 8 * v30) & 0x3FF) + 1;
      v65 = v34;
      do
      {
        v35 = 0;
        if ( v34 > 1 )
        {
          do
          {
            if ( (((1 << (v31 + 1 + v35)) - 1) & (unsigned int)v33) != 0 )
              break;
            ++v35;
          }
          while ( 1 << v35 < v34 );
        }
        if ( 1 << v35 > v34 )
        {
          v36 = (1 << v35) - v34;
          if ( v36 >= 0x1F )
            goto LABEL_50;
        }
        else
        {
          v36 = 0;
        }
        if ( v31 == 21 && v36 )
LABEL_50:
          --v35;
        v37 = v33;
        if ( v35 || v31 != 12 )
        {
          v38 = v27 | 1;
          v37 = (unsigned int)~(1 << (v35 + v31 - 1)) & (v33 | (unsigned int)((1 << (v35 + v31 - 1)) - 1));
        }
        else
        {
          v38 = v27 & 0xFFFE;
        }
        v61 = v37 ^ ((unsigned __int16)v37 ^ v38) & 0xFFF;
        sub_140532A28(a1, &v60, 1LL);
        LOWORD(v27) = v61;
        v70 = v61;
        if ( a6 || (_QWORD *)*a7 != a7 && !a5 )
        {
          v39 = a7;
          v40 = v9 & 0xF0000;
          v41 = (unsigned __int8)v9;
          v42 = (unsigned __int16)v9 & 0xFF00;
          v43 = a6;
          v44 = (v42 | ((v40 | (v41 << 8)) << 32) | 0x40000000000000LL) << 8;
          *(_QWORD *)&v63 = v44;
          v67 = 0LL;
          *((_QWORD *)&v63 + 1) = v61 ^ v61 & 0xFFA | 4;
          while ( 1 )
          {
            if ( !v43 && a6 || !sub_1405180C8(v39, &v67, &v66, &v72, &v62, &v59) )
            {
              LOWORD(v27) = v70;
              v34 = v65;
              v31 = v64;
              v9 = v73;
              break;
            }
            v44 = (unsigned __int16)v66 | v44 & 0xFFFFFFFF00FF0000uLL | ((unsigned __int64)(unsigned __int8)v72 << 24);
            v45 = v59;
            *(_QWORD *)&v63 = v44;
            if ( !*v59 )
            {
              if ( !sub_140347810(v62) )
                goto LABEL_66;
              v45 = v59;
            }
            *v45 = 1;
            sub_140532A28(a1, &v63, 1LL);
            v44 = v63;
LABEL_66:
            --v43;
          }
        }
        if ( v34 <= 1 << v35 )
          break;
        v34 -= 1 << v35;
        v65 = v34;
        v33 += 1LL << ((unsigned __int8)v35 + (unsigned __int8)v31);
      }
      while ( v34 );
      v12 = a8;
      if ( !a8 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v46 = v68;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v47 = KeGetCurrentIrql();
            if ( v47 <= 0xFu && (unsigned __int8)v68 <= 0xFu && v47 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v49 = *((_QWORD *)CurrentPrcb + 4375);
              v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v68 + 1));
              v25 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
              *(_DWORD *)(v49 + 20) &= v50;
              if ( v25 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v46);
        v13 = a6;
        goto LABEL_79;
      }
    }
  }
  v14 = a5;
  if ( a4 )
  {
    v60 = 0x8000000000000000uLL;
  }
  else
  {
    if ( a5 )
    {
      v60 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL;
      v15 = 0x7FFFFFFFFFFFF003LL;
    }
    else
    {
      v60 = a2 & 0xFFFFF | 0x3000000000000000LL;
      v15 = 0x7FFFFFFFFFFFF007LL;
    }
    v61 = v15;
  }
  sub_140532A28(a1, &v60, 0LL);
  if ( !v14 )
  {
    v16 = WORD4(v63) & 0xFFE;
    *(_QWORD *)&v63 = 0x4000000000000000LL;
    *((_QWORD *)&v63 + 1) = v16 | 0x7FFFFFFFFFFFF001LL;
    if ( v9 != -1 )
    {
      *(_QWORD *)&v63 = ((unsigned __int16)v9 & 0xFF00 | ((v9 & 0xF0000 | ((unsigned __int64)(unsigned __int8)v9 << 8)) << 32) | 0x40000000000000LL) << 8;
      *((_QWORD *)&v63 + 1) = v16 | 0x7FFFFFFFFFFFF005LL;
    }
    v17 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v17 <= 0xFu )
    {
      v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v18 + 20) |= (-1 << (v17 + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = a1 + 19;
    v19 = v13;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)a1 + 19);
    v20 = a7;
    while ( (v19 || !v13) && sub_1405180C8(v20, &v67, &v66, &v72, &v62, &v59) )
    {
      if ( sub_140347810(v62) )
      {
        *v59 = 1;
        *(_QWORD *)&v63 = (unsigned __int16)v66 | v63 & 0xFFFFFFFF00FF0000uLL | ((unsigned __int64)(unsigned __int8)v72 << 24);
        sub_140532A28(a1, &v63, 1LL);
      }
      --v19;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && v17 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v22 + 4375);
          v24 = ~(unsigned __int16)(-1LL << (v17 + 1));
          v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v25 )
            sub_140418E4C((__int64)v22);
        }
      }
    }
    __writecr8(v17);
    goto LABEL_80;
  }
LABEL_79:
  v20 = a7;
LABEL_80:
  v71[1] = 0LL;
  v71[0] = 0x1000000000000000LL;
  sub_140532A28(a1, v71, 0LL);
  v67 = 0LL;
  v51 = v13;
  v52 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v52 <= 0xFu )
  {
    v53 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v53 + 20) |= (-1 << (v52 + 1)) & 0xFFFC;
  }
  while ( (v51 || !v13) && sub_1405180C8(v20, &v67, &v66, &v72, &v62, &v59) )
  {
    if ( *v59 )
    {
      v54 = v62;
      *v59 = 0;
      sub_1402AD030(v54);
    }
    --v51;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v55 = KeGetCurrentIrql();
      if ( v55 <= 0xFu && v52 <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = *((_QWORD *)v56 + 4375);
        v58 = ~(unsigned __int16)(-1LL << (v52 + 1));
        v25 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
        *(_DWORD *)(v57 + 20) &= v58;
        if ( v25 )
          sub_140418E4C((__int64)v56);
      }
    }
  }
  result = v52;
  __writecr8(v52);
  return result;
}
