/*
 * XREFs of sub_140333040 @ 0x140333040
 * Callers:
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_140332A80 @ 0x140332A80 (sub_140332A80.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 *     sub_1403C49DC @ 0x1403C49DC (sub_1403C49DC.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_140282764 @ 0x140282764 (sub_140282764.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F339C @ 0x1402F339C (sub_1402F339C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

void __fastcall sub_140333040(__int64 a1, unsigned __int64 a2)
{
  char v2; // bl
  _QWORD *v3; // r14
  char v4; // bl
  unsigned __int64 v5; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // r15
  bool v16; // zf
  int *v17; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int i; // ecx
  _QWORD *v24; // rsi
  volatile LONG *v25; // rax
  __int64 v26; // r14
  unsigned __int64 v27; // r12
  __int64 v28; // r14
  unsigned __int64 v29; // rcx
  __int64 v30; // rbp
  unsigned __int64 v31; // r15
  volatile signed __int64 *v32; // rbx
  signed __int64 v33; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rdi
  unsigned int v36; // edx
  unsigned __int64 v37; // rdi
  volatile LONG *v38; // rbp
  unsigned __int64 v39; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // rdx
  unsigned __int64 v51; // rax
  struct _KPRCB *v52; // rcx
  __int64 v53; // rdx
  int v54; // eax
  unsigned __int64 v55; // [rsp+20h] [rbp-58h]
  unsigned int v56; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v58; // [rsp+80h] [rbp+8h] BYREF
  int v59; // [rsp+88h] [rbp+10h]
  int v60; // [rsp+8Ch] [rbp+14h]
  unsigned __int64 v61; // [rsp+90h] [rbp+18h]
  __int64 v62; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v3 = &unk_140C53D28;
  v60 = 3;
  v4 = v2 & 7;
  v59 = 0;
  v5 = a2;
  if ( v4 != 2 )
    v3 = (_QWORD *)(a1 + 232);
  v7 = a2 & 1;
  v56 = v7;
  if ( (a2 & 1) != 0 )
    v5 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8 * ((v5 >> 3) & 0x1FF));
      if ( (v10 & 0x20) != 0 )
        v8 |= 0x20uLL;
      if ( (v10 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
  }
  v62 = v8;
  v12 = (_QWORD *)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v62) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x220000000000LL);
  v15 = &unk_140C53D40;
  v16 = v4 == 2;
  v17 = (int *)&unk_140C53D40;
  if ( !v16 )
    v17 = (int *)(a1 + 256);
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    LOBYTE(v11) = -1;
    sub_140461A66(v17, v11);
  }
  else
  {
    v58 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v19 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v20 = *(_DWORD *)(v19 + 24);
        *(_DWORD *)(v19 + 24) = v20 + 1;
        if ( v20 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v17, 0x1Fu) )
    {
      v21 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v22;
          if ( !v22 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      v58 = sub_140220C30(v17, 0xFFu);
    }
    for ( i = *v17; (*v17 & 0xBFFFFFFF) != 0x80000000; i = *v17 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v17, 0x40000000u);
      sub_1402F32E0(&v58, v11, v13, v14);
    }
  }
  v24 = (_QWORD *)*v3;
  if ( !*v3 || (unsigned __int64)(v24[4] + 8LL) > v24[5] )
  {
    v24 = sub_140282764(a1);
    if ( !v24 )
      goto LABEL_38;
  }
  if ( (__int64)v12[5] < 0 )
  {
    v26 = v12[2];
    if ( (v26 & 0x400) != 0 )
    {
      if ( qword_140C50780 && (v26 & 0x10) == 0 )
        v26 &= ~qword_140C50780;
      v27 = v24[6];
      v28 = v26 >> 16;
      v29 = (v12[1] | 0x8000000000000000uLL) << 16;
      v55 = v12[1] | 0x8000000000000000uLL;
      if ( v24[7] > 1uLL )
      {
        v30 = v28;
LABEL_72:
        v49 = v24[5];
        v50 = (__int64 *)(v49 + 8);
        if ( v49 + 8 > v27 )
        {
LABEL_75:
          v50 = (__int64 *)v24[5];
          v24[5] = v49 - 8;
          *v50 = v30;
        }
        else
        {
          while ( *v50 != v30 )
          {
            if ( (unsigned __int64)++v50 > v27 )
              goto LABEL_75;
          }
        }
        v51 = v29 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v56 << 9) | ((__int64)(v24[6] - (_QWORD)v50) >> 3) & 0x1FF;
        goto LABEL_79;
      }
      v16 = (*(_BYTE *)(v28 + 34) & 2) == 0;
      v31 = *(_QWORD *)v28;
      v61 = *(_QWORD *)v28;
      if ( !v16 && (*(_DWORD *)(v31 + 56) & 0x8000000) != 0 )
      {
LABEL_38:
        v25 = (volatile LONG *)sub_140282AD0(a1);
        ExReleaseSpinLockExclusiveFromDpcLevel(v25 + 16);
        return;
      }
      v32 = (volatile signed __int64 *)(v31 + 64);
      _m_prefetchw((const void *)(v31 + 64));
      v33 = *(_QWORD *)(v31 + 64);
      if ( (v33 & 0xF) != 0 )
      {
        do
        {
          v34 = _InterlockedCompareExchange64(v32, v33 - 1, v33);
          if ( v33 == v34 )
            break;
          v33 = v34;
        }
        while ( (v34 & 0xF) != 0 );
      }
      v35 = v33;
      v36 = v33 & 0xF;
      v37 = v35 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v36 <= 1 )
      {
        if ( !v36 )
        {
LABEL_57:
          v38 = (volatile LONG *)(v31 + 72);
          v39 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v31 + 72));
          v37 = *v32 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v37 )
            ObfReferenceObjectWithTag((PVOID)(*v32 & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
          ExReleaseSpinLockSharedFromDpcLevel(v38);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v39 <= 0xFu && CurrentIrql >= 2u )
              {
                v41 = KeGetCurrentPrcb();
                v42 = *((_QWORD *)v41 + 4375);
                v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
                v16 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
                *(_DWORD *)(v42 + 20) &= v43;
                if ( v16 )
                  sub_140418E4C(v41);
              }
            }
          }
          __writecr8(v39);
          v31 = v61;
LABEL_67:
          v30 = *(_QWORD *)(v37 + 24);
          _m_prefetchw((const void *)v32);
          v44 = *v32;
          if ( (v37 ^ *v32) >= 0xF )
          {
LABEL_70:
            ObDereferenceObjectDeferDeleteWithTag((PVOID)v37, 0x63536D4Du);
          }
          else
          {
            while ( 1 )
            {
              v45 = v44;
              v44 = _InterlockedCompareExchange64(v32, v44 + 1, v44);
              if ( v45 == v44 )
                break;
              if ( (v37 ^ v44) >= 0xF )
                goto LABEL_70;
            }
            sub_140347B50(v37 - 48, 1LL);
          }
          v46 = sub_1403342D0(v28, v55, 0xFFFFFFFFLL);
          v47 = *(_DWORD *)(v31 + 56);
          v15 = &unk_140C53D40;
          v48 = v46 << *((_BYTE *)&v59 + 4 * ((v47 >> 5) & 1));
          v61 = v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)(32 * v47)) & 0x400;
          v27 -= 8LL;
          v29 = v61;
          goto LABEL_72;
        }
        sub_1402F339C((signed __int64 *)(v31 + 64), v37);
      }
      if ( dword_140D05010 )
        sub_1405C5EC8(v37 - 48);
      if ( v37 )
        goto LABEL_67;
      goto LABEL_57;
    }
  }
  v51 = (v5 << 16) | ((unsigned __int64)v7 << 9);
LABEL_79:
  *(_QWORD *)v24[4] = v51;
  v24[4] += 8LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v15 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14063D8B0(v15, retaddr);
  else
    *v15 = 0;
  v52 = KeGetCurrentPrcb();
  v53 = *((_QWORD *)v52 + 4375);
  if ( v53 && *((_BYTE *)v52 + 32) <= 1u )
  {
    v54 = *(_DWORD *)(v53 + 24) - 1;
    *(_DWORD *)(v53 + 24) = v54;
    if ( !v54 )
      sub_140418E4C(v52);
  }
}
