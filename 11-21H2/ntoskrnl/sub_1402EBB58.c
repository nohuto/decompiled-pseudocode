/*
 * XREFs of sub_1402EBB58 @ 0x1402EBB58
 * Callers:
 *     sub_1402EBB00 @ 0x1402EBB00 (sub_1402EBB00.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140291EE4 @ 0x140291EE4 (sub_140291EE4.c)
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     sub_1402EC4D0 @ 0x1402EC4D0 (sub_1402EC4D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062E0D0 @ 0x14062E0D0 (sub_14062E0D0.c)
 */

__int64 __fastcall sub_1402EBB58(__int64 a1, int a2, char a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  int v7; // r12d
  __int64 v8; // rdx
  int v11; // esi
  int v12; // r15d
  char v13; // r14
  __int64 CurrentIrql; // rcx
  char v15; // di
  _QWORD *v16; // rax
  __int64 v17; // rbx
  struct _KPRCB *v18; // rdi
  __int64 v19; // rcx
  int v20; // esi
  int v21; // eax
  char v22; // cl
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r14d
  char v26; // di
  char v27; // al
  volatile signed __int32 *v28; // rcx
  unsigned int v29; // r13d
  struct _KPRCB *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // r12d
  __int64 v35; // rbx
  struct _KPRCB *v36; // rdi
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // ecx
  int v44; // edi
  char v45; // al
  __int64 v46; // rcx
  __int64 v47; // rdx
  volatile signed __int32 *v48; // rcx
  int v49; // eax
  int v50; // eax
  unsigned int v51; // [rsp+30h] [rbp-41h]
  unsigned int v52; // [rsp+30h] [rbp-41h]
  int v53; // [rsp+34h] [rbp-3Dh]
  int v54; // [rsp+38h] [rbp-39h]
  _QWORD *v55; // [rsp+40h] [rbp-31h]
  int v56; // [rsp+48h] [rbp-29h]
  int v57; // [rsp+4Ch] [rbp-25h]
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-21h]
  __int64 v59; // [rsp+58h] [rbp-19h] BYREF
  int v60; // [rsp+60h] [rbp-11h] BYREF
  int v61; // [rsp+64h] [rbp-Dh] BYREF
  __int64 v62; // [rsp+68h] [rbp-9h]
  _QWORD *v63; // [rsp+70h] [rbp-1h]
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp+7h]
  __int64 v65; // [rsp+80h] [rbp+Fh]
  int v66; // [rsp+D0h] [rbp+5Fh] BYREF
  char v67; // [rsp+D8h] [rbp+67h]
  char v68; // [rsp+E0h] [rbp+6Fh]

  v68 = a3;
  result = (unsigned int)*(char *)(a1 + 640);
  v7 = a5;
  v8 = 0LL;
  v66 = 0;
  if ( (_DWORD)result == a2 && (a4 == a5 || a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(v8) = a3;
      sub_1402EC4D0(a1, v8);
    }
    return (unsigned int)a2;
  }
  else if ( (_UNKNOWN *)a1 != &unk_140D32B00 )
  {
    v51 = 0;
    v11 = 1;
    v53 = 0;
    if ( a2 )
      v11 = a2;
    v67 = 0;
    v59 = 0LL;
    v57 = WORD2(xmmword_140D06900) & 0x2000;
    v12 = 0;
    v13 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v65 = CurrentIrql;
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v32 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v32 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v62 = *((_QWORD *)CurrentPrcb + 1);
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    v15 = v68;
    if ( v68 )
      *(_BYTE *)(a1 + 641) = v68;
    v54 = *(char *)(a1 + 640);
    v56 = v11 - v54;
    *(_BYTE *)(a1 + 640) = v11;
    sub_1402F374C(1LL);
    v16 = *(_QWORD **)(a1 + 48);
    v63 = (_QWORD *)(a1 + 48);
    v55 = v16;
    if ( v16 != (_QWORD *)(a1 + 48) )
    {
      if ( v11 < 16 )
      {
        while ( 1 )
        {
          v17 = (__int64)(v16 - 95);
          if ( v15 )
            *(_BYTE *)(v17 + 651) = v15;
          v18 = KeGetCurrentPrcb();
          v61 = 0;
          while ( 1 )
          {
            v19 = *((_QWORD *)v18 + 4375);
            if ( v19 )
            {
              if ( *((_BYTE *)v18 + 32) <= 1u )
              {
                v49 = *(_DWORD *)(v19 + 24);
                *(_DWORD *)(v19 + 24) = v49 + 1;
                if ( v49 == -1 )
                  sub_140418E4C(v18);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 64), 0LL) )
              break;
            v33 = *((_QWORD *)v18 + 4375);
            if ( v33 )
            {
              if ( *((_BYTE *)v18 + 32) <= 1u )
              {
                v50 = *(_DWORD *)(v33 + 24) - 1;
                *(_DWORD *)(v33 + 24) = v50;
                if ( !v50 )
                  sub_140418E4C(v18);
              }
            }
            do
              sub_1402F32E0(&v61);
            while ( *(_QWORD *)(v17 + 64) );
          }
          v20 = *(char *)(v17 + 563);
          if ( v20 <= v54 || v20 < 16 )
            break;
          sub_140224100(v17);
LABEL_42:
          v15 = v68;
          v16 = (_QWORD *)*v55;
          v55 = v16;
          if ( v16 == v63 )
            goto LABEL_43;
        }
        v21 = v20 + v56;
        if ( v20 + v56 >= 16 )
        {
          v66 = 15;
        }
        else
        {
          if ( v21 <= 0 )
            v21 = 1;
          v66 = v21;
        }
        v22 = *(_BYTE *)(v17 + 645);
        if ( v22 )
        {
          if ( v54 < 16 )
          {
            sub_140224100(v17);
            v26 = 0;
LABEL_41:
            if ( v57 )
            {
              if ( v67 )
              {
                v67 = 0;
                sub_14062E0D0(v17, 1328, v53, v51, 0LL);
              }
              if ( v26 && v20 != v66 )
                sub_14062E0D0(v17, 1329, v20, v66, (__int64)&v66);
            }
            goto LABEL_42;
          }
          if ( v22 > 0 )
            v66 = 15;
          else
            v66 = 1;
        }
        if ( v17 != v62 || *((_BYTE *)CurrentPrcb + 32) )
        {
          v23 = *(_QWORD *)(v17 + 72);
        }
        else
        {
          _disable();
          v23 = sub_140345AA0(CurrentPrcb, v17, 0LL);
          _enable();
        }
        v24 = v23 + dword_140D050CC * (unsigned int)*(unsigned __int8 *)(v17 + 651);
        if ( (*(_DWORD *)(v17 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v17 + 120), 5u);
        *(_QWORD *)(v17 + 32) = v24;
        if ( v7 && (v26 = 0, v66 == v20) )
        {
          v25 = v51;
        }
        else
        {
          v25 = sub_1402EC3E4(v17, &v66, a4);
          v51 = v25;
          v26 = 1;
        }
        v27 = 0;
        if ( v7 )
          v27 = sub_14035CAD8(v17, &v59);
        if ( !v26 )
          goto LABEL_40;
        if ( !v27 )
        {
          v53 = *(char *)(v17 + 195);
          if ( (unsigned __int8)sub_140344A30(v17, &v59, v25) )
          {
            v51 = *(char *)(v17 + 195);
            v67 = 1;
          }
        }
        v28 = *(volatile signed __int32 **)(v17 + 232);
        if ( v28 && (*(_BYTE *)v28 & 0x7F) == 0x15 )
          sub_140291EE4(v28, v17);
        else
LABEL_40:
          sub_140224100(v17);
        goto LABEL_41;
      }
      v29 = v54;
      v34 = 0;
      while ( 1 )
      {
        v35 = (__int64)(v16 - 95);
        if ( v15 )
          *(_BYTE *)(v35 + 651) = v15;
        v36 = KeGetCurrentPrcb();
        v60 = 0;
        v37 = *((_QWORD *)v36 + 4375);
        if ( v37 )
        {
          if ( *((_BYTE *)v36 + 32) <= 1u )
          {
            v38 = *(_DWORD *)(v37 + 24);
            *(_DWORD *)(v37 + 24) = v38 + 1;
            if ( v38 == -1 )
LABEL_69:
              sub_140418E4C(v36);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 64), 0LL) )
        {
          v39 = *((_QWORD *)v36 + 4375);
          if ( v39 )
          {
            if ( *((_BYTE *)v36 + 32) <= 1u )
            {
              v40 = *(_DWORD *)(v39 + 24) - 1;
              *(_DWORD *)(v39 + 24) = v40;
              if ( !v40 )
                sub_140418E4C(v36);
            }
          }
          do
            sub_1402F32E0(&v60);
          while ( *(_QWORD *)(v35 + 64) );
          v41 = *((_QWORD *)v36 + 4375);
          if ( v41 )
          {
            if ( *((_BYTE *)v36 + 32) <= 1u )
            {
              v42 = *(_DWORD *)(v41 + 24);
              *(_DWORD *)(v41 + 24) = v42 + 1;
              if ( v42 == -1 )
                goto LABEL_69;
            }
          }
        }
        v43 = *(char *)(v35 + 563);
        v44 = v43 + v56;
        if ( v43 + v56 >= 16 )
        {
          if ( v44 > 31 )
            v44 = 31;
          v66 = v44;
        }
        else
        {
          v44 = 16;
          v66 = 16;
        }
        v45 = *(_BYTE *)(v35 + 645);
        v30 = CurrentPrcb;
        if ( !v45 )
          goto LABEL_91;
        if ( v54 < 16 )
          break;
        sub_140224100(v35);
LABEL_104:
        if ( v57 )
        {
          if ( v67 )
          {
            v67 = 0;
            sub_14062E0D0(v35, 1328, v53, v34, 0LL);
          }
          if ( v13 )
          {
            v13 = 0;
            if ( v12 != v44 )
              sub_14062E0D0(v35, 1329, v12, v44, (__int64)&v66);
          }
        }
        v15 = v68;
        v16 = (_QWORD *)*v55;
        v55 = v16;
        if ( v16 == v63 )
          goto LABEL_44;
      }
      if ( v45 <= 0 )
        v66 = 16;
      else
        v66 = 31;
LABEL_91:
      v12 = v43;
      if ( v35 != v62 || *((_BYTE *)CurrentPrcb + 32) )
      {
        v46 = *(_QWORD *)(v35 + 72);
      }
      else
      {
        _disable();
        v46 = sub_140345AA0(CurrentPrcb, v35, 0LL);
        _enable();
      }
      v47 = v46 + dword_140D050CC * (unsigned int)*(unsigned __int8 *)(v35 + 651);
      if ( (*(_DWORD *)(v35 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v35 + 120), 5u);
      *(_QWORD *)(v35 + 32) = v47;
      v52 = sub_1402EC3E4(v35, &v66, 0LL);
      v53 = *(char *)(v35 + 195);
      v13 = 1;
      if ( (unsigned __int8)sub_140344A30(v35, &v59, v52) )
      {
        v52 = *(char *)(v35 + 195);
        v67 = 1;
      }
      v48 = *(volatile signed __int32 **)(v35 + 232);
      if ( v48 && (*(_BYTE *)v48 & 0x7F) == 0x15 )
        sub_140291EE4(v48, v35);
      else
        sub_140224100(v35);
      v34 = v52;
      v44 = v66;
      goto LABEL_104;
    }
LABEL_43:
    v29 = v54;
    v30 = CurrentPrcb;
LABEL_44:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    LOBYTE(v31) = v65;
    sub_140344800(v30, &v59, v31);
    return v29;
  }
  return result;
}
