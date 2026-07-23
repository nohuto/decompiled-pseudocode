/*
 * XREFs of sub_14023CDE0 @ 0x14023CDE0
 * Callers:
 *     sub_14023CD70 @ 0x14023CD70 (sub_14023CD70.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14023CCE0 @ 0x14023CCE0 (sub_14023CCE0.c)
 *     sub_14023D3C8 @ 0x14023D3C8 (sub_14023D3C8.c)
 *     sub_14023D570 @ 0x14023D570 (sub_14023D570.c)
 *     sub_14023D5F4 @ 0x14023D5F4 (sub_14023D5F4.c)
 *     sub_14023DADC @ 0x14023DADC (sub_14023DADC.c)
 *     sub_14023DC8C @ 0x14023DC8C (sub_14023DC8C.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140366D64 @ 0x140366D64 (sub_140366D64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14023CDE0(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  char v8; // dl
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  _RTL_BALANCED_NODE *v12; // rax
  unsigned int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // r12
  struct _KTHREAD *v17; // rsi
  char *v18; // rbx
  ULONG_PTR v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  bool v26; // zf
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v28; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  int v33; // r8d
  struct _KTHREAD *v34; // rcx
  char *v35; // rsi
  __int64 v36; // rdx
  ULONG_PTR v37; // r8
  int v38; // r8d
  struct _KTHREAD *v39; // rcx
  __int64 v40; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-38h] BYREF
  __int64 v42; // [rsp+40h] [rbp-30h] BYREF
  __int128 v43; // [rsp+48h] [rbp-28h] BYREF
  __int64 v44; // [rsp+58h] [rbp-18h]
  unsigned __int64 v45; // [rsp+60h] [rbp-10h]

  v3 = *a2;
  *(_QWORD *)&v43 = 0x10000000100000LL;
  *((_QWORD *)&v43 + 1) = 0x20000000200000LL;
  v4 = a3;
  v42 = 0LL;
  LODWORD(v44) = 0x40000000;
  if ( !v3 )
    __int2c();
  if ( v3 <= (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1 )
  {
    v9 = v3 >> 20;
    v10 = a3 >> 20;
    v11 = (unsigned __int8)sub_140365AF4(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    v12 = (_RTL_BALANCED_NODE *)sub_14023D5F4(BugCheckParameter2, (unsigned __int16)v9, (unsigned __int16)v10, &v42);
    v13 = -1;
    v14 = (__int64)v12;
    if ( v12 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v12);
      v15 = v42;
      if ( v42 != v14 )
      {
        *(_OWORD *)v14 = 0LL;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_BYTE *)v14 = 1;
        *(_BYTE *)(v14 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        sub_14023DC8C(BugCheckParameter2, v14, (v15 - v14) >> 5);
        sub_14023DADC(BugCheckParameter2, v14);
        v14 = v15;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v31 = *((_QWORD *)CurrentPrcb + 4375);
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v26 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
              *(_DWORD *)(v31 + 20) &= v32;
              if ( v26 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(BugCheckParameter2);
        CurrentThread = KeGetCurrentThread();
        if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
          v28 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
        else
          v28 = -1;
        _disable();
        v35 = (char *)CurrentThread + 1696;
        v36 = 0LL;
        v37 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
        while ( (*(_QWORD *)v35 & 0x7FFFFFFFFFFFFFFCLL) != v37
             || !v35[18]
             || (*(_DWORD *)v35 & 1) != 0
             || *((_DWORD *)v35 + 2) != v28 )
        {
          v36 = (unsigned int)(v36 + 1);
          v35 += 96;
          if ( (unsigned int)v36 >= 6 )
            goto LABEL_71;
        }
        v35[18] = 0;
        if ( !v35 )
        {
LABEL_71:
          if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v28, 0LL);
          _enable();
          goto LABEL_77;
        }
        if ( *(__int64 *)v35 < 0 )
        {
          *v35 |= 2u;
          _enable();
          sub_14034EE30(v35, v36, v37);
          _disable();
        }
        v38 = *((_DWORD *)v35 + 22);
        *((_DWORD *)v35 + 22) = 0;
        v35[17] = 0;
        *(_QWORD *)v35 = 0LL;
        *((_BYTE *)CurrentThread + 792) |= 1 << v35[16];
        _enable();
        if ( v38 )
          sub_14022B568((ULONG_PTR)CurrentThread, BugCheckParameter2, v38);
LABEL_77:
        v39 = KeGetCurrentThread();
        v26 = (*((_WORD *)v39 + 243))++ == 0xFFFF;
        if ( v26 && *((struct _KTHREAD **)v39 + 19) != (struct _KTHREAD *)((char *)v39 + 152) )
          KiCheckForKernelApcDelivery();
      }
      v14 = sub_14023CCE0(BugCheckParameter2);
      if ( !v14 )
        return 0LL;
      LOBYTE(v11) = sub_140365AF4(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    }
    v16 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
        + ((unsigned __int64)(v14 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_BYTE *)v14 = 1;
    *(_BYTE *)(v14 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v14 + 24) > (unsigned __int16)v9 )
    {
      v21 = sub_14023DC8C(BugCheckParameter2, v14, (unsigned __int16)v9);
      sub_14023DADC(BugCheckParameter2, v21);
    }
    v40 = v16;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = *((_QWORD *)v23 + 4375);
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v25;
            if ( v26 )
              sub_140418E4C(v23);
          }
        }
      }
      __writecr8((unsigned __int8)v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v17 = KeGetCurrentThread();
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v13 = sub_140287F30(*((_QWORD *)v17 + 23));
      _disable();
      v18 = (char *)v17 + 1696;
      v19 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      v20 = 0;
      while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != v19
           || !v18[18]
           || (*(_DWORD *)v18 & 1) != 0
           || *((_DWORD *)v18 + 2) != v13 )
      {
        ++v20;
        v18 += 96;
        if ( v20 >= 6 )
          goto LABEL_52;
      }
      v18[18] = 0;
      if ( !v18 )
      {
LABEL_52:
        if ( (*((_DWORD *)v17 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v17, BugCheckParameter2, v13, 0LL);
        _enable();
        goto LABEL_58;
      }
      if ( *(__int64 *)v18 < 0 )
      {
        *v18 |= 2u;
        _enable();
        sub_14034EE30(v18, v19, 0x7FFFFFFFFFFFFFFCLL);
        _disable();
      }
      v33 = *((_DWORD *)v18 + 22);
      *((_DWORD *)v18 + 22) = 0;
      v18[17] = 0;
      *(_QWORD *)v18 = 0LL;
      *((_BYTE *)v17 + 792) |= 1 << v18[16];
      _enable();
      if ( v33 )
        sub_14022B568((ULONG_PTR)v17, BugCheckParameter2, v33);
LABEL_58:
      v34 = KeGetCurrentThread();
      v26 = (*((_WORD *)v34 + 243))++ == 0xFFFF;
      if ( v26 && *((struct _KTHREAD **)v34 + 19) != (struct _KTHREAD *)((char *)v34 + 152) )
        KiCheckForKernelApcDelivery();
    }
    return v40;
  }
  if ( a3 <= *((unsigned int *)&v43 + (((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 7)) )
    v4 = *((unsigned int *)&v43 + (((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 7));
  v41 = v3 - ((v4 - 1) & (v4 + v3 - 1)) + v4 - 1;
  result = sub_14023D570(BugCheckParameter2, &v41);
  v40 = result;
  if ( result )
  {
    v8 = *(_BYTE *)(BugCheckParameter2 + 44);
    v43 = 0LL;
    BYTE1(v43) = v8;
    v45 = v41 >> 20;
    v44 = 0LL;
    LOBYTE(v43) = 5;
    if ( sub_14023D3C8(BugCheckParameter2, result, &v43) )
    {
      *a2 = v41;
      return v40;
    }
    sub_140366D64(&v40, &v41, 0x8000LL);
    return 0LL;
  }
  return result;
}
