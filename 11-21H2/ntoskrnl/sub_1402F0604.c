/*
 * XREFs of sub_1402F0604 @ 0x1402F0604
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

char __fastcall sub_1402F0604(ULONG_PTR BugCheckParameter1)
{
  char result; // al
  _QWORD *v3; // r12
  unsigned int v4; // ebp
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  struct _KPRCB *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdx
  volatile signed __int32 **v12; // rcx
  unsigned __int16 *v13; // r12
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int16 *v16; // rdi
  void **v17; // rcx
  char v18; // al
  bool v19; // zf
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  struct _KPRCB *v23; // rdi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rsi
  _QWORD *v29; // r15
  unsigned __int8 v30; // cl
  __int64 v31; // r9
  struct _KPRCB *v32; // r13
  __int64 v33; // rbp
  __int64 v34; // r8
  int v35; // r8d
  unsigned __int16 **v36; // rdx
  __int64 v37; // rax
  ULONG_PTR *v38; // rbx
  __int64 v39; // rdi
  unsigned __int8 v40; // cl
  __int64 v41; // r9
  ULONG_PTR *v42; // rbx
  __int64 v43; // rdi
  unsigned int v44; // [rsp+30h] [rbp-168h]
  int v45; // [rsp+34h] [rbp-164h]
  __int64 v46; // [rsp+38h] [rbp-160h]
  int v47; // [rsp+40h] [rbp-158h] BYREF
  int v48; // [rsp+44h] [rbp-154h] BYREF
  __int64 v49; // [rsp+48h] [rbp-150h]
  __int64 v50; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v51[32]; // [rsp+60h] [rbp-138h] BYREF

  result = (unsigned __int8)memset(v51, 0, sizeof(v51));
  v50 = 0LL;
  v3 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v3 == v3 )
    return result;
  v4 = 0;
  v44 = 0;
  v45 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  v46 = (__int64)CurrentPrcb;
  while ( 1 )
  {
    v7 = KeGetCurrentPrcb();
    v47 = 0;
    while ( 1 )
    {
      v8 = *((_QWORD *)v7 + 4375);
      if ( v8 )
      {
        if ( *((_BYTE *)v7 + 32) <= 1u )
        {
          v20 = *(_DWORD *)(v8 + 24);
          *(_DWORD *)(v8 + 24) = v20 + 1;
          if ( v20 == -1 )
            sub_140418E4C(v7);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v21 = *((_QWORD *)v7 + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)v7 + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v22;
          if ( !v22 )
            sub_140418E4C(v7);
        }
      }
      do
        sub_1402F32E0(&v47);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v9 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v10 = (volatile signed __int32 *)(v9 - 3);
    if ( *((_BYTE *)v9 + 25) )
      KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v9 - 3), 0LL, 0LL);
    if ( !_interlockedbittestandset(v10, 7u) )
      goto LABEL_11;
    sub_140224100(BugCheckParameter1);
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140D34BC0[16 * (((unsigned __int64)v10 >> 4) & 0x3F)]);
    if ( v9 != (_QWORD *)*v3 )
      goto LABEL_45;
    sub_1402F3290(v9 - 3);
    if ( *((_QWORD *)v10 + 5) != BugCheckParameter1 )
    {
      _InterlockedAnd(v10, 0xFFFFFF7F);
LABEL_45:
      v9 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140D34BC0[16 * (((unsigned __int64)v10 >> 4) & 0x3F)]);
    if ( v9 )
    {
      v23 = KeGetCurrentPrcb();
      v48 = 0;
      while ( 1 )
      {
        v24 = *((_QWORD *)v23 + 4375);
        if ( v24 )
        {
          if ( *((_BYTE *)v23 + 32) <= 1u )
          {
            v25 = *(_DWORD *)(v24 + 24);
            *(_DWORD *)(v24 + 24) = v25 + 1;
            if ( v25 == -1 )
              sub_140418E4C(v23);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          break;
        v26 = *((_QWORD *)v23 + 4375);
        if ( v26 )
        {
          if ( *((_BYTE *)v23 + 32) <= 1u )
          {
            v27 = *(_DWORD *)(v26 + 24) - 1;
            *(_DWORD *)(v26 + 24) = v27;
            if ( !v27 )
              sub_140418E4C(v23);
          }
        }
        do
          sub_1402F32E0(&v48);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
LABEL_11:
      v11 = *((_QWORD *)v10 + 3);
      v12 = (volatile signed __int32 **)*((_QWORD *)v10 + 4);
      if ( *(volatile signed __int32 **)(v11 + 8) != v10 + 6 || *v12 != v10 + 6 )
LABEL_24:
        __fastfail(3u);
      *v12 = (volatile signed __int32 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      sub_140224100(BugCheckParameter1);
      *((_BYTE *)v10 + 48) |= 1u;
      v13 = (unsigned __int16 *)*((_QWORD *)v10 + 1);
      *((_QWORD *)v10 + 5) = 0LL;
      *((_DWORD *)v10 + 1) = 1;
      if ( v13 != (unsigned __int16 *)(v10 + 2) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)v13;
          v16 = v13;
          v13 = (unsigned __int16 *)v15;
          v17 = (void **)*((_QWORD *)v16 + 1);
          if ( *(unsigned __int16 **)(v15 + 8) != v16 || *v17 != v16 )
            goto LABEL_24;
          *v17 = (void *)v15;
          *(_QWORD *)(v15 + 8) = v17;
          v18 = *((_BYTE *)v16 + 16);
          switch ( v18 )
          {
            case 1:
              if ( (unsigned __int8)sub_1402F6BC0(CurrentPrcb, v16, v16[9], &v50) )
              {
                v19 = (*((_DWORD *)v10 + 1))-- == 1;
                if ( v19 )
                  goto LABEL_28;
              }
              break;
            case 2:
              *((_BYTE *)v16 + 17) = 5;
              v28 = *((_QWORD *)v16 + 3);
              *(_QWORD *)v16 = 0LL;
              v29 = (_QWORD *)(v28 + 8);
              v30 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v30 <= 0xFu )
              {
                v31 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                *(_DWORD *)(v31 + 20) |= (-1 << (v30 + 1)) & 4;
              }
              v32 = KeGetCurrentPrcb();
              v33 = *((_QWORD *)v32 + 1);
              if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
              {
                LOBYTE(v34) = sub_14056B1E4(*((_QWORD *)v32 + 1));
                sub_14062DA60(v33, v16, v34);
              }
              sub_1402F3290(v28);
              if ( (_QWORD *)*v29 == v29
                || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
                || *(_QWORD *)(v33 + 232) == v28 && *(_BYTE *)(v33 + 643) == 15
                || !(unsigned __int8)sub_1402F6A70(v32, v28, v16) )
              {
                v35 = *(_DWORD *)(v28 + 4);
                *(_DWORD *)(v28 + 4) = v35 + 1;
                v36 = *(unsigned __int16 ***)(v28 + 32);
                if ( *v36 != (unsigned __int16 *)(v28 + 24) )
                  goto LABEL_24;
                *(_QWORD *)v16 = v28 + 24;
                *((_QWORD *)v16 + 1) = v36;
                *v36 = v16;
                *(_QWORD *)(v28 + 32) = v16;
                if ( !v35 && (_QWORD *)*v29 != v29 )
                  sub_14035B550(v32, v28);
              }
              else
              {
                *(_QWORD *)v16 = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
              v19 = (*((_DWORD *)v10 + 1))-- == 1;
              if ( v19 )
              {
LABEL_28:
                v4 = v44;
                LOBYTE(CurrentIrql) = v49;
                goto LABEL_14;
              }
              CurrentPrcb = (struct _KPRCB *)v46;
              break;
            case 4:
              *((_BYTE *)v16 + 17) = 5;
              *((_DWORD *)v10 + 1) = 0;
              KeInsertQueueDpc(*((PRKDPC *)v16 + 3), (PVOID)v10, v16);
              break;
            default:
              sub_1402F6BC0(CurrentPrcb, v16, 256LL, 0LL);
              break;
          }
          if ( v13 == (unsigned __int16 *)(v10 + 2) )
            goto LABEL_28;
        }
      }
LABEL_14:
      if ( (v10[12] & 2) != 0 )
      {
        v37 = v4++;
        v44 = v4;
        v51[v37] = v10;
      }
      _InterlockedAnd(v10, 0xFFFFFF7F);
      v3 = (_QWORD *)(BugCheckParameter1 + 776);
      CurrentPrcb = (struct _KPRCB *)v46;
      if ( ++v45 == 32 )
      {
        sub_1402B0820(v46, 0, 1, 1, CurrentIrql);
        if ( v4 )
        {
          v38 = v51;
          v39 = v4;
          do
          {
            sub_1402AFC00(*v38++);
            --v39;
          }
          while ( v39 );
        }
        v4 = 0;
        v45 = 0;
        v44 = 0;
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v40 <= 0xFu )
        {
          v41 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v41 + 20) |= (-1 << (v40 + 1)) & 4;
        }
        v3 = (_QWORD *)(BugCheckParameter1 + 776);
        goto LABEL_4;
      }
    }
  }
  sub_140224100(BugCheckParameter1);
  result = sub_1402B0820((__int64)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v4 )
  {
    v42 = v51;
    v43 = v4;
    do
    {
      result = sub_1402AFC00(*v42++);
      --v43;
    }
    while ( v43 );
  }
  return result;
}
