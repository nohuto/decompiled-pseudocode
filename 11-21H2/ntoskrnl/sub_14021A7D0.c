/*
 * XREFs of sub_14021A7D0 @ 0x14021A7D0
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x14021A780 (ExSetResourceOwnerPointer.c)
 *     ExSetResourceOwnerPointerEx @ 0x14021A7B0 (ExSetResourceOwnerPointerEx.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_1402AF060 @ 0x1402AF060 (sub_1402AF060.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_1406329AC @ 0x1406329AC (sub_1406329AC.c)
 */

__int64 __fastcall sub_14021A7D0(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a3,
        struct _KPRCB *a4)
{
  char v4; // si
  bool v7; // r12
  ULONG_PTR CurrentThread; // rbp
  volatile __int64 *v9; // rbx
  unsigned int v10; // edi
  unsigned __int8 CurrentIrql; // r10
  __int64 v12; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rbx
  __int64 v18; // r10
  __int64 v19; // rdi
  unsigned int v20; // ecx
  char *v21; // r10
  __int64 v22; // rax
  int v23; // esi
  ULONG_PTR v24; // rsi
  signed __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rax
  struct _KPRCB *v28; // rcx
  __int64 v29; // rdx
  __int64 result; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  bool v41; // zf
  __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v43; // [rsp+38h] [rbp-40h]
  __int64 v44; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a3;
  v44 = 0LL;
  v7 = (DWORD1(xmmword_140D06900) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v9 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v43 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v42 = 0LL;
  v10 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12 = (unsigned __int8)v42 - 1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = (struct _KPRCB *)*((_QWORD *)KeGetCurrentPrcb() + 4375);
    a3 = ((_DWORD)v12 << (CurrentIrql + 1)) & 4u | *((_DWORD *)a4 + 5);
    *((_DWORD *)a4 + 5) = a3;
  }
  LOBYTE(v44) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v14 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v37 = *(_DWORD *)(v14 + 24);
      *(_DWORD *)(v14 + 24) = v37 + 1;
      if ( v37 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&v42, v9);
  }
  else
  {
    v15 = _InterlockedExchange64(v9, (__int64)&v42);
    if ( v15 )
      sub_140311C70(&v42);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v16 = *(_QWORD *)(BugCheckParameter1 + 48);
    v17 = (char *)(BugCheckParameter1 + 48);
    if ( v16 == BugCheckParameter4 )
    {
      v19 = BugCheckParameter1 + 48;
    }
    else
    {
      v18 = *(_QWORD *)(BugCheckParameter1 + 16);
      v15 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
      a4 = (struct _KPRCB *)(BugCheckParameter1 + 48);
      if ( v16 )
        a4 = 0LL;
      a3 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v18 && (v19 = *(_QWORD *)(BugCheckParameter1 + 16) + 16LL, v15 < a3) )
      {
        while ( *(_QWORD *)v19 != BugCheckParameter4 )
        {
          if ( *(_QWORD *)v19 )
          {
            if ( ++v15 == a3 )
              goto LABEL_16;
          }
          else if ( !a4 )
          {
            a4 = (struct _KPRCB *)v19;
          }
          v19 += 16LL;
          if ( v19 == v18 + 16LL * *(unsigned int *)(v18 + 8) )
            goto LABEL_16;
        }
        *((_BYTE *)KeGetCurrentThread() + 1120) = (v19 - v18) >> 4;
      }
      else
      {
LABEL_16:
        v19 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v20 = 0;
    else
      v20 = *(unsigned __int8 *)(CurrentThread + 1120);
    if ( *(_QWORD *)v17 != CurrentThread )
    {
      v15 = *(_QWORD *)v17 != 0LL;
      if ( *(_QWORD *)v17 )
        v17 = 0LL;
      v21 = v17;
      if ( !v20
        || (v22 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v20 >= *(_DWORD *)(v22 + 8)
        || (v17 = (char *)(v22 + 16LL * v20), *(_QWORD *)v17 != CurrentThread) )
      {
        a4 = *(struct _KPRCB **)(BugCheckParameter1 + 16);
        a3 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !a4 || (v17 = (char *)a4 + 16, v15 >= a3) )
LABEL_96:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, (ULONG_PTR)a4, 4uLL);
        while ( *(_QWORD *)v17 != CurrentThread )
        {
          if ( *(_QWORD *)v17 )
          {
            if ( ++v15 == a3 )
              goto LABEL_96;
          }
          else if ( !v21 )
          {
            v21 = v17;
          }
          v17 += 16;
          if ( v17 == (char *)a4 + 16 * *((unsigned int *)a4 + 2) )
            goto LABEL_96;
        }
        *((_BYTE *)KeGetCurrentThread() + 1120) = (v17 - (char *)a4) >> 4;
      }
    }
    v23 = v4 & 1;
    if ( !v19 )
    {
      if ( v23 )
      {
        v24 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        if ( dword_140D05010 )
          sub_1405C5EC8(v24 - 48);
        v25 = _InterlockedIncrement64((volatile signed __int64 *)(v24 - 48));
        if ( v25 <= 1 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL, 0x10uLL, v25);
        *((_DWORD *)v17 + 2) |= 2u;
      }
      else
      {
        v34 = *((_DWORD *)v17 + 2);
        if ( (v34 & 1) != 0 )
        {
          LOBYTE(v15) = 1;
          sub_1402ACD80(*(_QWORD *)v17, v15, 0LL, 0LL);
          *((_DWORD *)v17 + 2) &= ~1u;
          v34 = *((_DWORD *)v17 + 2);
        }
        if ( (v34 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v17 + 1444LL));
          *((_DWORD *)v17 + 2) &= ~4u;
        }
      }
      *(_QWORD *)v17 = BugCheckParameter4;
      v26 = 35544;
      goto LABEL_34;
    }
    if ( v23 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      v33 = *((_DWORD *)v17 + 2);
      if ( (v33 & 1) != 0 )
      {
        v38 = *(_DWORD *)(v19 + 8);
        if ( (v38 & 1) != 0 )
        {
          LOBYTE(v15) = 1;
          sub_1402ACD80(*(_QWORD *)v17, v15, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v19 + 8) = v38 | 1;
        }
        *((_DWORD *)v17 + 2) &= ~1u;
        v33 = *((_DWORD *)v17 + 2);
      }
      if ( (v33 & 4) != 0 )
      {
        v39 = *(_DWORD *)(v19 + 8);
        if ( (v39 & 4) != 0 )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v17 + 1444LL));
        else
          *(_DWORD *)(v19 + 8) = v39 | 4;
        *((_DWORD *)v17 + 2) &= ~4u;
      }
      if ( (*(_DWORD *)(v19 + 8) & 2) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)v17, 0x746C6644u);
        *(_DWORD *)(v19 + 8) |= 2u;
      }
    }
    else
    {
      v32 = *((unsigned int *)v17 + 2);
      if ( (v32 & 1) != 0 )
      {
        LOBYTE(v32) = 1;
        sub_1402ACD80(*(_QWORD *)v17, v32, 0LL, 0LL);
        *((_DWORD *)v17 + 2) &= ~1u;
        LODWORD(v32) = *((_DWORD *)v17 + 2);
      }
      if ( (v32 & 4) == 0 )
        goto LABEL_50;
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v17 + 1444LL));
      *((_DWORD *)v17 + 2) &= ~4u;
    }
    LODWORD(v32) = *((_DWORD *)v17 + 2);
LABEL_50:
    v26 = 35548;
    *(_DWORD *)(v19 + 8) = (v32 + (*(_DWORD *)(v19 + 8) & 0xFFFFFFF8)) ^ ((unsigned __int8)v32 ^ (unsigned __int8)*(_DWORD *)(v19 + 8)) & 7;
    *((_DWORD *)v17 + 2) &= 7u;
    *(_QWORD *)v17 = 0LL;
    --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_34:
    __incgsdword(v26);
    if ( v7 )
      v10 = 65856;
    else
      v10 = 65792;
    goto LABEL_36;
  }
  if ( (unsigned __int8)sub_1402AF060(BugCheckParameter1) && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
  if ( (v4 & 1) != 0 )
  {
    if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
      KeBugCheckEx(0x132u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 16), CurrentThread, BugCheckParameter4);
    ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
  }
  else
  {
    v36 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v36 & 1) != 0 )
    {
      LOBYTE(v35) = 1;
      sub_1402ACD80(*(_QWORD *)(BugCheckParameter1 + 48), v35, 0LL, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v36 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v36 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 48) + 1444LL));
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
  __incgsdword(0x8AD4u);
  if ( v7 )
    v10 = 65824;
LABEL_36:
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(&v42, retaddr);
    goto LABEL_39;
  }
  _m_prefetchw(&v42);
  v27 = v42;
  if ( v42 )
    goto LABEL_70;
  if ( (__int64 *)_InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42) != &v42 )
  {
    v27 = sub_140282C20(&v42);
LABEL_70:
    v42 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
  }
LABEL_39:
  v28 = KeGetCurrentPrcb();
  v29 = *((_QWORD *)v28 + 4375);
  if ( v29 )
  {
    if ( *((_BYTE *)v28 + 32) <= 1u )
    {
      v40 = *(_DWORD *)(v29 + 24) - 1;
      *(_DWORD *)(v29 + 24) = v40;
      if ( !v40 )
        sub_140418E4C(v28);
    }
  }
  result = (unsigned int)dword_140D06B08;
  v31 = (unsigned __int8)v44;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v44 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        a4 = KeGetCurrentPrcb();
        a3 = *((_QWORD *)a4 + 4375);
        result = ~(unsigned __int16)(v12 << ((unsigned __int8)v44 + 1));
        v41 = ((unsigned int)result & *(_DWORD *)(a3 + 20)) == 0;
        *(_DWORD *)(a3 + 20) &= result;
        if ( v41 )
          result = sub_140418E4C(a4);
      }
    }
  }
  __writecr8(v31);
  if ( v7 )
    return sub_1406329AC(v10, BugCheckParameter1, a3, a4);
  return result;
}
