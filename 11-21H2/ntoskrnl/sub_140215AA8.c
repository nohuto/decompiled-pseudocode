/*
 * XREFs of sub_140215AA8 @ 0x140215AA8
 * Callers:
 *     sub_140200D20 @ 0x140200D20 (sub_140200D20.c)
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1403C6E24 @ 0x1403C6E24 (sub_1403C6E24.c)
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 * Callees:
 *     sub_140216544 @ 0x140216544 (sub_140216544.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_1402166E0 @ 0x1402166E0 (sub_1402166E0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403A5C24 @ 0x1403A5C24 (sub_1403A5C24.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14058727C @ 0x14058727C (sub_14058727C.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 */

__int64 __fastcall sub_140215AA8(int a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v3; // rdi
  int v4; // r12d
  ULONG_PTR v6; // r15
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v8; // r13
  unsigned __int8 v9; // al
  __int64 *v10; // rcx
  ULONG_PTR v11; // rdi
  unsigned __int8 v12; // bl
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rsi
  ULONG_PTR v15; // rcx
  __int64 j; // rsi
  _QWORD *i; // rax
  __int64 v18; // rax
  ULONG_PTR v19; // rdx
  _WORD *v20; // r14
  ULONG_PTR v21; // r12
  unsigned __int64 v22; // r11
  __int64 result; // rax
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // r13
  __int64 v32; // rbx
  ULONG_PTR v33; // rdx
  unsigned __int64 v34; // r12
  unsigned int v35; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v38; // r9
  int v39; // eax
  bool v40; // zf
  ULONG_PTR v41; // rax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  __int64 v44; // r8
  int v45; // eax
  signed __int32 v46[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v48; // [rsp+38h] [rbp-70h]
  ULONG_PTR v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  PEX_SPIN_LOCK v51; // [rsp+50h] [rbp-58h]
  PEX_SPIN_LOCK SpinLock; // [rsp+58h] [rbp-50h]
  unsigned __int8 v53; // [rsp+B0h] [rbp+8h]
  __int16 v54; // [rsp+B8h] [rbp+10h]
  __int64 v55; // [rsp+B8h] [rbp+10h]
  int v57; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v48 = a3;
  v50 = a1;
  v4 = 0;
  v57 = 0;
  v6 = ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1) & a2;
  BugCheckParameter4 = v6;
  v8 = a3;
  v9 = sub_1402165BC(1LL);
  v11 = qword_140C4F040[v3 + 2072];
  v12 = v9;
  v53 = v9;
  while ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 24);
    if ( v6 < v13 )
    {
      v11 = *(_QWORD *)v11;
    }
    else
    {
      if ( v6 < v13 + 512 )
        break;
      v11 = *(_QWORD *)(v11 + 8);
    }
  }
  if ( a3 )
  {
    do
    {
      if ( !v11 )
        KeBugCheckEx(0x1Au, 0x61948uLL, v6, a3, BugCheckParameter4);
      v14 = *(_QWORD *)(v11 + 8);
      v15 = v11;
      if ( v14 )
      {
        for ( i = *(_QWORD **)v14; i; i = (_QWORD *)*i )
          v14 = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(v11 + 16); ; j = *(_QWORD *)(v14 + 16) )
        {
          v14 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v14 || *(_QWORD *)v14 == v15 )
            break;
          v15 = v14;
        }
      }
      v18 = *(_QWORD *)(v11 + 24);
      v19 = (BugCheckParameter4 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1)) - v18;
      v20 = (_WORD *)(v11 + 2 * (v19 + 40));
      if ( v8 + BugCheckParameter4 > v18 + 512 )
        v21 = v11 + 1104;
      else
        v21 = v11 + 2 * (v19 + v8 + 40);
      v49 = v21;
      SpinLock = (PEX_SPIN_LOCK)(v11 + 64);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 64));
      if ( (unsigned __int64)v20 < v21 )
      {
        v22 = 1LL;
        do
        {
          if ( (*v20 & 0x3FFF) == 0 )
            KeBugCheckEx(0x1Au, 0x6194AuLL, v6, a3, BugCheckParameter4);
          v54 = (*v20 ^ (*v20 - v22)) & 0x3FFF ^ *v20;
          *v20 = v54;
          if ( (v54 & 0x3FFF) == 0 )
          {
            v24 = *(_DWORD *)(v11 + 68);
            if ( v24 )
            {
              v25 = 0;
              if ( v24 > 0x200 )
                goto LABEL_65;
            }
            else
            {
              v25 = v22;
            }
            if ( v25 )
LABEL_65:
              KeBugCheckEx(0x1Au, 0x6194BuLL, v11, *(unsigned int *)(v11 + 68), BugCheckParameter4);
            v26 = v24 - 1;
            *(_DWORD *)(v11 + 68) = v26;
            if ( !v26 )
            {
              if ( *(_BYTE *)(v11 + 72) )
              {
                _InterlockedOr(v46, 0);
                *(_DWORD *)(v11 + 76) = dword_140D31240;
              }
              v27 = v57;
              v28 = v22 + _InterlockedExchangeAdd64(&qword_140C4F040[v50 + 2074], v22);
              v29 = *(_QWORD *)(v11 + 24);
              if ( v28 >= qword_140C53140 )
                v27 = v22;
              v47 = 0LL;
              v57 = v27;
              if ( (unsigned int)sub_1402166E0(v29) )
              {
                v31 = qword_140C52968;
                v32 = (v30 >> 18) & 0x3FFFFF;
                v47 = *(_QWORD *)(qword_140C52968 + 8 * v32);
                if ( (v47 & 0x1C00000) == 0x1400000 )
                {
                  v55 = sub_14058727C(&v47);
                  v51 = (PEX_SPIN_LOCK)(*(_QWORD *)(v55 + 16)
                                      + 24512LL * *(unsigned int *)(sub_1402C1550(v33) + 8)
                                      + 22848);
                  v34 = ExAcquireSpinLockExclusive(v51);
                  v35 = (*(_QWORD *)(v31 + 8 * v32) & 0x3FFFFF) - 1;
                  v47 = *(_QWORD *)(v31 + 8 * v32) ^ (*(_QWORD *)(v31 + 8 * v32) ^ v35) & 0x3FFFFFLL;
                  *(_QWORD *)(v31 + 8 * v32) = v47;
                  if ( !v35 )
                    sub_1405875A0(v55, (unsigned int)v32, 37LL);
                  ExReleaseSpinLockExclusiveFromDpcLevel(v51);
                  v22 = 1LL;
                  if ( dword_140D06B08 )
                  {
                    if ( (dword_140D06B08 & 1) != 0 )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      if ( CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        v38 = *((_QWORD *)CurrentPrcb + 4375);
                        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
                        v40 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
                        *(_DWORD *)(v38 + 20) &= v39;
                        if ( v40 )
                        {
                          sub_140418E4C(CurrentPrcb);
                          v22 = 1LL;
                        }
                      }
                    }
                  }
                  __writecr8(v34);
                  v21 = v49;
                }
                v8 = v48;
              }
            }
          }
          v8 -= v22;
          ++v20;
          BugCheckParameter4 += v22;
          v48 = v8;
        }
        while ( (unsigned __int64)v20 < v21 );
        v12 = v53;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( v8 && ((unsigned int)sub_1403A5C24(0LL) || KeShouldYieldProcessor()) )
      {
        LOBYTE(v10) = v12;
        sub_140216544(v10, 1LL);
        sub_1402165BC(1LL);
        v10 = qword_140C4F040;
        v11 = qword_140C4F040[v50 + 2072];
        while ( v11 )
        {
          v41 = *(_QWORD *)(v11 + 24);
          if ( BugCheckParameter4 >= v41 )
          {
            if ( BugCheckParameter4 < v41 + 512 )
              break;
            v11 = *(_QWORD *)(v11 + 8);
          }
          else
          {
            v11 = *(_QWORD *)v11;
          }
        }
      }
      else
      {
        v11 = v14;
      }
    }
    while ( v8 );
    v4 = v57;
  }
  LOBYTE(v10) = v12;
  result = sub_140216544(v10, 1LL);
  if ( v4 )
  {
    ExAcquireSpinLockExclusive(&dword_140C53160);
    if ( !stru_140C53178.Parameter )
    {
      stru_140C53178.List.Flink = 0LL;
      stru_140C53178.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1405910C0;
      stru_140C53178.Parameter = &stru_140C53178;
      ExQueueWorkItem(&stru_140C53178, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53160);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && v12 <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = *((_QWORD *)v43 + 4375);
          v45 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v40 = (v45 & *(_DWORD *)(v44 + 20)) == 0;
          *(_DWORD *)(v44 + 20) &= v45;
          if ( v40 )
            sub_140418E4C(v43);
        }
      }
    }
    result = v12;
    __writecr8(v12);
  }
  return result;
}
