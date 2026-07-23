/*
 * XREFs of sub_14037039C @ 0x14037039C
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140370898 @ 0x140370898 (sub_140370898.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_14037039C(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // r8d
  __int64 v6; // rcx
  unsigned int v7; // r12d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  KIRQL v13; // al
  unsigned __int8 *v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int8 *v16; // r10
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r8d
  _BYTE *v22; // rcx
  unsigned __int8 v23; // al
  struct _KTHREAD *v24; // rsi
  __int64 v25; // rbx
  unsigned int v26; // ecx
  int v27; // r8d
  struct _KTHREAD *v28; // rcx
  bool v29; // zf
  __int64 v30; // r8
  struct _KTHREAD *v31; // r14
  __int64 v32; // rbx
  unsigned int v33; // ecx
  int v34; // r8d
  struct _KTHREAD *v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v37; // r9
  __int64 v38; // r8
  int v39; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v41; // r9
  int v42; // edx
  signed __int32 v44[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-98h]
  _BYTE v46[64]; // [rsp+40h] [rbp-88h] BYREF

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  v7 = -1;
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + -1 - v5 + (unsigned int)v6);
  }
  v11 = *(_QWORD *)(a2 + 88);
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)v6;
  v45 = (unsigned int)v6;
  v10 = *(unsigned __int8 *)(v6 + v11);
  LODWORD(v11) = *((unsigned __int8 *)CurrentThread + 1653);
  if ( (_DWORD)v11 != (_DWORD)v6 )
  {
    *((_BYTE *)CurrentThread + 1653) = v6;
    return v11;
  }
  memset(v46, 0, sizeof(v46));
  v12 = a2 + 80;
  v13 = sub_140365AF4((volatile LONG *)(a2 + 80), *(unsigned __int8 *)(a1 + 57));
  v14 = *(unsigned __int8 **)(a2 + 88);
  v15 = v13;
  v16 = &v14[v9];
  if ( (_BYTE)v10 != v14[v9] )
    goto LABEL_16;
  v17 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v17 )
  {
    v18 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v19 = *v14++;
      ++v46[v19];
      --v18;
    }
    while ( v18 );
  }
  if ( v46[v10] == 1 )
    goto LABEL_16;
  v20 = (unsigned int)(v10 + 1);
  v21 = v20;
  if ( (unsigned int)v20 < v17 )
  {
    v22 = &v46[(unsigned int)v20];
    do
    {
      if ( !*v22 )
        break;
      if ( *v22 < v46[v20] )
        v20 = v21;
      ++v21;
      ++v22;
    }
    while ( v21 < v17 );
  }
  if ( v46[v20] )
  {
    *v16 = v20;
LABEL_16:
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
      LOBYTE(v11) = dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          LOBYTE(v11) = KeGetCurrentIrql();
          if ( (unsigned __int8)v11 <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)v11 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = -1LL << ((unsigned __int8)v15 + 1);
            v41 = *((_QWORD *)CurrentPrcb + 4375);
            v42 = ~(unsigned __int16)v11;
            v29 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v29 )
              LOBYTE(v11) = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 80);
      v24 = KeGetCurrentThread();
      if ( v12 - qword_140C50630 < 0x8000000000LL )
        v7 = sub_140287F30(*((_QWORD *)v24 + 23));
      _disable();
      v25 = (__int64)v24 + 1696;
      v26 = 0;
      while ( (*(_QWORD *)v25 & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v25 + 18)
           || (*(_DWORD *)v25 & 1) != 0
           || *(_DWORD *)(v25 + 8) != v7 )
      {
        ++v26;
        v25 += 96LL;
        if ( v26 >= 6 )
          goto LABEL_37;
      }
      *(_BYTE *)(v25 + 18) = 0;
      if ( v25 )
      {
        if ( *(__int64 *)v25 < 0 )
        {
          *(_BYTE *)v25 |= 2u;
          _enable();
          sub_14034EE30(v25);
          _disable();
        }
        v27 = *(_DWORD *)(v25 + 88);
        *(_DWORD *)(v25 + 88) = 0;
        *(_BYTE *)(v25 + 17) = 0;
        *(_QWORD *)v25 = 0LL;
        LOBYTE(v11) = *(_BYTE *)(v25 + 16);
        *((_BYTE *)v24 + 792) |= 1 << v11;
        _enable();
        if ( v27 )
          LOBYTE(v11) = sub_14022B568((ULONG_PTR)v24, v12, v27);
        goto LABEL_33;
      }
LABEL_37:
      LODWORD(v11) = *((_DWORD *)v24 + 30);
      if ( (v11 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, v12, v7, 0LL);
      _enable();
LABEL_33:
      v28 = KeGetCurrentThread();
      v29 = (*((_WORD *)v28 + 243))++ == 0xFFFF;
      if ( v29 )
      {
        v11 = (__int64)v28 + 152;
        if ( *(_QWORD *)v11 != v11 )
          LOBYTE(v11) = KiCheckForKernelApcDelivery();
      }
    }
    return v11;
  }
  v23 = *(_BYTE *)(a2 + 77);
  if ( v23 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v23 + 1;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = *((_QWORD *)v37 + 4375);
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v29 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
          *(_DWORD *)(v38 + 20) &= v39;
          if ( v29 )
            sub_140418E4C(v37);
        }
      }
    }
    __writecr8(v15);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 80);
    v31 = KeGetCurrentThread();
    if ( v12 - qword_140C50630 < 0x8000000000LL )
      v7 = sub_140287F30(*((_QWORD *)v31 + 23));
    _disable();
    v32 = (__int64)v31 + 1696;
    v33 = 0;
    while ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v32 + 18)
         || (*(_DWORD *)v32 & 1) != 0
         || *(_DWORD *)(v32 + 8) != v7 )
    {
      ++v33;
      v32 += 96LL;
      if ( v33 >= 6 )
        goto LABEL_69;
    }
    *(_BYTE *)(v32 + 18) = 0;
    if ( v32 )
    {
      if ( *(__int64 *)v32 < 0 )
      {
        *(_BYTE *)v32 |= 2u;
        _enable();
        sub_14034EE30(v32);
        _disable();
      }
      v34 = *(_DWORD *)(v32 + 88);
      *(_DWORD *)(v32 + 88) = 0;
      *(_BYTE *)(v32 + 17) = 0;
      *(_QWORD *)v32 = 0LL;
      *((_BYTE *)v31 + 792) |= 1 << *(_BYTE *)(v32 + 16);
      _enable();
      if ( v34 )
        sub_14022B568((ULONG_PTR)v31, a2 + 80, v34);
      goto LABEL_64;
    }
LABEL_69:
    if ( (*((_DWORD *)v31 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, a2 + 80, v7, 0LL);
    _enable();
LABEL_64:
    v35 = KeGetCurrentThread();
    v29 = (*((_WORD *)v35 + 243))++ == 0xFFFF;
    if ( v29 && *((struct _KTHREAD **)v35 + 19) != (struct _KTHREAD *)((char *)v35 + 152) )
      KiCheckForKernelApcDelivery();
    v9 = v45;
  }
  v45 = 0LL;
  v30 = *(_QWORD *)(a2 + 96);
  LOWORD(v45) = 2;
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 8 * v20), 2LL, 0LL);
  if ( !v11 )
  {
    v11 = sub_140370898(a1, a2, (unsigned int)v20);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v20) = v11;
    if ( v11 )
    {
      _InterlockedOr(v44, 0);
      *(_BYTE *)(a2 + 2) = v20 + 1;
      v11 = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v9 + v11) = v20;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return v11;
}
