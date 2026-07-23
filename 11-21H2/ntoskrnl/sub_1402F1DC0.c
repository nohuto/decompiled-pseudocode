/*
 * XREFs of sub_1402F1DC0 @ 0x1402F1DC0
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_140217CA0 @ 0x140217CA0 (sub_140217CA0.c)
 *     sub_14022B5D8 @ 0x14022B5D8 (sub_14022B5D8.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     sub_1402947A0 @ 0x1402947A0 (sub_1402947A0.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402987C0 @ 0x1402987C0 (sub_1402987C0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeIsExecutingDpc @ 0x140233690 (KeIsExecutingDpc.c)
 *     KeTestAlertThread @ 0x140299000 (KeTestAlertThread.c)
 *     sub_14029A86C @ 0x14029A86C (sub_14029A86C.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1402F1DC0(char a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r9
  ULONG_PTR v7; // rax
  _QWORD **v8; // r14
  unsigned __int8 CurrentIrql; // cl
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  struct _KPRCB *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  struct _KPRCB *v27; // rcx
  __int64 v28; // rdx
  struct _KPRCB *v29; // rcx
  __int64 v30; // rdx
  struct _KPRCB *v31; // rcx
  __int64 v32; // rdx
  struct _KPRCB *v33; // rcx
  __int64 v34; // rdx
  _QWORD **v35; // r14
  _QWORD *v36; // rsi
  unsigned int v37; // r15d
  unsigned __int8 v38; // cl
  __int64 v39; // r8
  struct _KPRCB *v40; // rdi
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  char v45; // di
  _QWORD *v46; // rcx
  __int64 (__fastcall *v47)(int, int, int, int, __int64); // rdx
  bool v48; // zf
  struct _KPRCB *v49; // rcx
  __int64 v50; // rdx
  char v51; // al
  int v52; // r9d
  int v53; // r8d
  _QWORD *v54; // rdx
  _QWORD *v55; // rax
  char v56; // cl
  char v57; // cl
  _QWORD *v58; // rax
  ULONG_PTR v59; // rdi
  ULONG_PTR v60; // rsi
  unsigned int IsExecutingDpc; // eax
  signed __int32 v63[8]; // [rsp+0h] [rbp-59h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-39h]
  int v65; // [rsp+40h] [rbp-19h] BYREF
  __int64 v66; // [rsp+48h] [rbp-11h] BYREF
  __int64 v67; // [rsp+50h] [rbp-9h] BYREF
  __int64 v68; // [rsp+58h] [rbp-1h]
  __int64 v69; // [rsp+60h] [rbp+7h]
  __int64 v70; // [rsp+68h] [rbp+Fh]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+17h]
  int v74; // [rsp+D8h] [rbp+7Fh] BYREF

  v69 = 0LL;
  v66 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  if ( a3 )
    sub_1402F2540(a3);
  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)CurrentThread + 18);
  v7 = *((_QWORD *)CurrentThread + 23);
  v70 = v6;
  BugCheckParameter1 = v7;
  *((_QWORD *)CurrentThread + 18) = a3;
  *((_BYTE *)CurrentThread + 193) = 0;
  if ( !*((_WORD *)CurrentThread + 243) )
  {
    _InterlockedOr(v63, 0);
    v8 = (_QWORD **)((char *)CurrentThread + 152);
    while ( *v8 != v8 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v74 = 0;
      while ( 1 )
      {
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v12 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v13 = *(_DWORD *)(v12 + 24);
            *(_DWORD *)(v12 + 24) = v13 + 1;
            if ( v13 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
          break;
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v14 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v15 = *(_DWORD *)(v14 + 24) - 1;
            *(_DWORD *)(v14 + 24) = v15;
            if ( !v15 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v74);
        while ( *((_QWORD *)CurrentThread + 8) );
      }
      v16 = *v8;
      if ( *v8 == v8 )
      {
        sub_140224100((__int64)CurrentThread);
        LOBYTE(v7) = dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            LOBYTE(v7) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v7 <= 0xDu )
            {
              v33 = KeGetCurrentPrcb();
              v34 = *((_QWORD *)v33 + 4375);
              v48 = (*(_DWORD *)(v34 + 20) & 0xFFFF0003) == 0;
              LODWORD(v7) = *(_DWORD *)(v34 + 20) & 0xFFFF0003;
              *(_DWORD *)(v34 + 20) = v7;
              if ( v48 )
                LOBYTE(v7) = sub_140418E4C(v33);
            }
          }
        }
        __writecr8(1uLL);
        break;
      }
      *((_BYTE *)CurrentThread + 193) = 0;
      v17 = v16 - 2;
      _m_prefetchw(v16 - 2);
      v66 = v16[4];
      v69 = v16[5];
      v68 = v16[6];
      v67 = v16[7];
      if ( v66 )
      {
        if ( *((_BYTE *)CurrentThread + 192) || *((_WORD *)CurrentThread + 242) )
        {
          sub_140224100((__int64)CurrentThread);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v31 = KeGetCurrentPrcb();
              v32 = *((_QWORD *)v31 + 4375);
              v48 = (*(_DWORD *)(v32 + 20) & 0xFFFF0003) == 0;
              *(_DWORD *)(v32 + 20) &= 0xFFFF0003;
              if ( v48 )
                sub_140418E4C(v31);
            }
          }
          LOBYTE(v7) = 1;
          __writecr8(1uLL);
          goto LABEL_112;
        }
        v25 = *v16;
        v26 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v26 != v16 )
          goto LABEL_109;
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        *((_BYTE *)v17 + 82) = 0;
        sub_140224100((__int64)CurrentThread);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v27 = KeGetCurrentPrcb();
            v28 = *((_QWORD *)v27 + 4375);
            v48 = (*(_DWORD *)(v28 + 20) & 0xFFFF0003) == 0;
            *(_DWORD *)(v28 + 20) &= 0xFFFF0003;
            if ( v48 )
              sub_140418E4C(v27);
          }
        }
        __writecr8(1uLL);
        *((_BYTE *)CurrentThread + 192) = 1;
        BugCheckParameter4 = (ULONG_PTR)&v67;
        LOBYTE(v7) = sub_14042A5E0(v17, &v66);
        if ( v66 )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v29 = KeGetCurrentPrcb();
              v30 = *((_QWORD *)v29 + 4375);
              v48 = (*(_DWORD *)(v30 + 20) & 0xFFFF0001) == 0;
              *(_DWORD *)(v30 + 20) &= 0xFFFF0001;
              if ( v48 )
                sub_140418E4C(v29);
            }
          }
          __writecr8(0LL);
          sub_14042A5E0(v69, v68);
          LOBYTE(v7) = KeGetCurrentIrql();
          __writecr8(1uLL);
          *((_BYTE *)CurrentThread + 192) = 0;
        }
        else
        {
          *((_BYTE *)CurrentThread + 192) = 0;
        }
      }
      else
      {
        v18 = *v16;
        v19 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v19 != v16 )
          goto LABEL_109;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *((_BYTE *)v17 + 82) = 0;
        *((_QWORD *)CurrentThread + 8) = 0LL;
        v20 = KeGetCurrentPrcb();
        v21 = *((_QWORD *)v20 + 4375);
        if ( v21 )
        {
          if ( *((_BYTE *)v20 + 32) <= 1u )
          {
            v22 = *(_DWORD *)(v21 + 24) - 1;
            *(_DWORD *)(v21 + 24) = v22;
            if ( !v22 )
              sub_140418E4C(v20);
          }
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v23 = KeGetCurrentPrcb();
            v24 = *((_QWORD *)v23 + 4375);
            v48 = (*(_DWORD *)(v24 + 20) & 0xFFFF0003) == 0;
            *(_DWORD *)(v24 + 20) &= 0xFFFF0003;
            if ( v48 )
              sub_140418E4C(v23);
          }
        }
        __writecr8(1uLL);
        *((_BYTE *)CurrentThread + 192) |= 2u;
        BugCheckParameter4 = (ULONG_PTR)&v67;
        LOBYTE(v7) = sub_14042A5E0(v17, &v66);
        *((_BYTE *)CurrentThread + 192) &= ~2u;
      }
    }
    if ( a1 == 1 )
    {
      v35 = (_QWORD **)((char *)CurrentThread + 168);
      if ( *v35 != v35 )
      {
        v66 = 0LL;
        v36 = 0LL;
        v69 = 0LL;
        v37 = 0;
        v68 = 0LL;
        v67 = 0LL;
        v38 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v38 <= 0xFu )
        {
          v39 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v39 + 20) |= (-1 << (v38 + 1)) & 4;
        }
        v40 = KeGetCurrentPrcb();
        v65 = 0;
        while ( 1 )
        {
          v41 = *((_QWORD *)v40 + 4375);
          if ( v41 )
          {
            if ( *((_BYTE *)v40 + 32) <= 1u )
            {
              v42 = *(_DWORD *)(v41 + 24);
              *(_DWORD *)(v41 + 24) = v42 + 1;
              if ( v42 == -1 )
                sub_140418E4C(v40);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
            break;
          v43 = *((_QWORD *)v40 + 4375);
          if ( v43 )
          {
            if ( *((_BYTE *)v40 + 32) <= 1u )
            {
              v44 = *(_DWORD *)(v43 + 24) - 1;
              *(_DWORD *)(v43 + 24) = v44;
              if ( !v44 )
                sub_140418E4C(v40);
            }
          }
          do
            sub_1402F32E0(&v65);
          while ( *((_QWORD *)CurrentThread + 8) );
        }
        v45 = *((_BYTE *)CurrentThread + 194);
        *((_BYTE *)CurrentThread + 194) = v45 & 0xFD;
        v46 = *v35;
        if ( *v35 != v35 )
        {
          while ( 1 )
          {
            v36 = v46 - 2;
            _m_prefetchw(v46 - 2);
            v47 = (__int64 (__fastcall *)(int, int, int, int, __int64))v46[2];
            v48 = v47 == sub_140962BA0;
            if ( v47 == sub_140962BA0 )
              break;
            if ( (v45 & 2) != 0 )
            {
              v48 = v47 == sub_140962BA0;
              break;
            }
            v46 = (_QWORD *)*v46;
            v36 = 0LL;
            if ( v46 == v35 )
              goto LABEL_87;
          }
          v51 = *((_BYTE *)v36 + 1);
          v52 = 2;
          if ( !v48 )
            v52 = 0;
          v53 = v52 | 4;
          v66 = v36[6];
          if ( (v51 & 1) == 0 )
            v53 = v52;
          v69 = v36[7];
          v68 = v36[8];
          v67 = v36[9];
          v54 = (_QWORD *)*v46;
          v55 = (_QWORD *)v46[1];
          if ( *(_QWORD **)(*v46 + 8LL) != v46 || (_QWORD *)*v55 != v46 )
LABEL_109:
            __fastfail(3u);
          *v55 = v54;
          v54[1] = v55;
          *((_BYTE *)v36 + 82) = 0;
          v37 = v53;
          v56 = *((_BYTE *)CurrentThread + 194);
          if ( (v56 & 1) != 0 )
          {
            v57 = v56 & 0xFE;
            *((_BYTE *)CurrentThread + 194) = v57;
            v58 = *v35;
            if ( *v35 != v35 )
            {
              while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v58[2] != sub_140962BA0 )
              {
                v58 = (_QWORD *)*v58;
                if ( v58 == v35 )
                  goto LABEL_87;
              }
              *((_BYTE *)CurrentThread + 194) = v57 | 1;
            }
          }
        }
LABEL_87:
        sub_140224100((__int64)CurrentThread);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v49 = KeGetCurrentPrcb();
            v50 = *((_QWORD *)v49 + 4375);
            v48 = (*(_DWORD *)(v50 + 20) & 0xFFFF0003) == 0;
            *(_DWORD *)(v50 + 20) &= 0xFFFF0003;
            if ( v48 )
              sub_140418E4C(v49);
          }
        }
        LOBYTE(v7) = 1;
        __writecr8(1uLL);
        if ( v36 )
        {
          BugCheckParameter4 = (ULONG_PTR)&v67;
          sub_14042A5E0(v36, &v66);
          if ( (v45 & 2) != 0 )
          {
            if ( !v66 )
            {
              LOBYTE(v7) = KeTestAlertThread(1);
              goto LABEL_112;
            }
            v37 |= 1u;
          }
          LOBYTE(v7) = sub_14029A86C(a2, a3, v66, v69, v68, v67, v37);
        }
      }
    }
LABEL_112:
    v6 = v70;
  }
  v59 = *((_QWORD *)CurrentThread + 23);
  v60 = BugCheckParameter1;
  if ( v59 != BugCheckParameter1 )
  {
    IsExecutingDpc = KeIsExecutingDpc();
    KeBugCheckEx(5u, v60, v59, *((unsigned __int8 *)CurrentThread + 586), IsExecutingDpc);
  }
  *((_QWORD *)CurrentThread + 18) = v6;
  return v7;
}
