/*
 * XREFs of sub_14030FEC0 @ 0x14030FEC0
 * Callers:
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405B204C @ 0x1405B204C (sub_1405B204C.c)
 *     sub_1407BC750 @ 0x1407BC750 (sub_1407BC750.c)
 *     sub_1407BC8F0 @ 0x1407BC8F0 (sub_1407BC8F0.c)
 *     sub_140972F98 @ 0x140972F98 (sub_140972F98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14030FEC0(unsigned int *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v5; // r10d
  unsigned int v8; // edx
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // ecx
  ULONG_PTR v13; // rbp
  struct _KTHREAD *v14; // r15
  __int64 v15; // r8
  char *v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  bool v19; // zf
  unsigned __int64 v20; // r13
  _QWORD *v21; // r12
  __int64 v22; // rbx
  int *v23; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  signed __int32 v27; // eax
  struct _KTHREAD *v28; // rbp
  struct _KTHREAD *v29; // r15
  __int64 v30; // r8
  char *v31; // rbx
  __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 v37; // [rsp+30h] [rbp-58h]
  int v38; // [rsp+90h] [rbp+8h]
  BOOL v39; // [rsp+98h] [rbp+10h]
  __int64 v40; // [rsp+A0h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v5 = P[12];
  v40 = (__int64)CurrentThread;
  v8 = 0;
  v9 = *((_QWORD *)CurrentThread + 23);
  if ( (v5 & 4) != 0 )
  {
    v10 = 1;
    v38 = 1;
    if ( (v5 & 0x200000) == 0 )
    {
      v34 = P[13];
      LODWORD(v34) = v34 & 0x7FFFFFFF;
      if ( (v34 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL )
        v8 = 1;
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
    v38 = 0;
  }
  if ( a3 <= *(_QWORD *)(v9 + 1496) && (a4 & 1) == 0 )
  {
    *(_QWORD *)(v9 + 1176) -= a3 - a2 + 1;
    v5 = P[12];
  }
  v11 = *(_QWORD *)(v9 + 1680);
  v37 = v11;
  if ( (v5 & 0x200000) == 0 && (v5 & 0x70) == 0x20 && (v5 & 0x400000) != 0 )
    --*(_QWORD *)(v11 + 368);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 280));
    v12 = P[12];
    if ( qword_1400161D0[(v12 >> 19) & 3] == 16 )
    {
      if ( (v12 & 0x200000) != 0 )
        --*(_QWORD *)(v11 + 408);
      else
        --*(_QWORD *)(v11 + 416);
    }
    sub_1407BC8F0(P, v9, v8);
    sub_1407BC750(P, v9);
  }
  *((_BYTE *)CurrentThread + 1384) &= ~1u;
  v13 = v9 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9 + 1224);
  v14 = KeGetCurrentThread();
  if ( v13 - qword_140C50630 < 0x8000000000LL )
    v15 = (unsigned int)sub_140287F30(*((_QWORD *)v14 + 23));
  else
    v15 = 0xFFFFFFFFLL;
  _disable();
  v16 = (char *)v14 + 1696;
  v17 = 0x7FFFFFFFFFFFFFFCLL;
  v18 = 0LL;
  do
  {
    if ( (*(_QWORD *)v16 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
      && v16[18]
      && (*(_DWORD *)v16 & 1) == 0
      && *((_DWORD *)v16 + 2) == (_DWORD)v15 )
    {
      v16[18] = 0;
      if ( *(__int64 *)v16 < 0 )
      {
        *v16 |= 2u;
        _enable();
        sub_14034EE30(v16, v18, v15);
        _disable();
      }
      v15 = *((unsigned int *)v16 + 22);
      *((_DWORD *)v16 + 22) = 0;
      v16[17] = 0;
      *(_QWORD *)v16 = 0LL;
      v17 = (unsigned __int8)v16[16];
      *((_BYTE *)v14 + 792) |= 1 << v17;
      _enable();
      if ( (_DWORD)v15 )
        sub_14022B568((ULONG_PTR)v14, v13, v15);
      goto LABEL_23;
    }
    v18 = (unsigned int)(v18 + 1);
    v16 += 96;
  }
  while ( (unsigned int)v18 < 6 );
  if ( (*((_DWORD *)v14 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v13, (unsigned int)v15, 0LL);
  _enable();
LABEL_23:
  v19 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v19 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  v20 = 0LL;
  if ( v38 )
  {
    v21 = 0LL;
    v22 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( (*(_BYTE *)(v22 + 1848) & 7) == 2 )
      v23 = (int *)&unk_140C53D00;
    else
      v23 = (int *)(v22 + 1856);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v15 = *(unsigned int *)(v17 + 20);
      *(_DWORD *)(v17 + 20) = v15 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(v23, CurrentIrql);
    else
      sub_14030F870(v23, CurrentIrql, v15, v17);
    v23[1] = 0;
    v25 = *((_QWORD *)P + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v25 )
    {
      do
      {
        v35 = *(_QWORD *)v25;
        if ( (*(_DWORD *)(v25 + 64) & 1) != 0 )
        {
          *(_QWORD *)v25 = v20;
          v20 = v25;
          if ( v21 )
            *v21 = v35;
          else
            *((_QWORD *)P + 7) = v35 | P[14] & 0xF;
        }
        else
        {
          v21 = (_QWORD *)v25;
        }
        v25 = v35;
      }
      while ( v35 );
    }
    sub_14030FA80(v22 + 1664, CurrentIrql);
    *((_QWORD *)P + 2) = -1LL;
    if ( v20 )
      --*(_WORD *)(v40 + 484);
    v26 = P[12];
    if ( (v26 & 0x200000) == 0 && (v26 & 0x70) == 0x20 && (v26 & 0x1800000) != 0 )
      sub_140972F98(P);
  }
  if ( (a4 & 2) != 0 )
  {
    sub_1405B204C(P);
  }
  else
  {
    v27 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
    if ( v27 == -1 )
      __fastfail(0xEu);
    v39 = !v27 && (P[12] & 4) != 0;
    v28 = KeGetCurrentThread();
    *((_BYTE *)v28 + 1384) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 10);
    v29 = KeGetCurrentThread();
    if ( (unsigned __int64)P - qword_140C50630 + 40 < 0x8000000000LL )
      v30 = (unsigned int)sub_140287F30(*((_QWORD *)v29 + 23));
    else
      v30 = 0xFFFFFFFFLL;
    _disable();
    v31 = (char *)v29 + 1696;
    v32 = 0LL;
    do
    {
      if ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
        && v31[18]
        && (*(_DWORD *)v31 & 1) == 0
        && *((_DWORD *)v31 + 2) == (_DWORD)v30 )
      {
        v31[18] = 0;
        if ( *(__int64 *)v31 < 0 )
        {
          *v31 |= 2u;
          _enable();
          sub_14034EE30(v31, v32, v30);
          _disable();
        }
        v33 = *((_DWORD *)v31 + 22);
        *((_DWORD *)v31 + 22) = 0;
        v31[17] = 0;
        *(_QWORD *)v31 = 0LL;
        *((_BYTE *)v29 + 792) |= 1 << v31[16];
        _enable();
        if ( v33 )
          sub_14022B568((ULONG_PTR)v29, (__int64)(P + 10), v33);
        goto LABEL_52;
      }
      v32 = (unsigned int)(v32 + 1);
      v31 += 96;
    }
    while ( (unsigned int)v32 < 6 );
    if ( (*((_DWORD *)v29 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v29, (ULONG_PTR)(P + 10), (unsigned int)v30, 0LL);
    _enable();
LABEL_52:
    v19 = (*((_WORD *)v28 + 243))++ == 0xFFFF;
    if ( v19 && *((struct _KTHREAD **)v28 + 19) != (struct _KTHREAD *)((char *)v28 + 152) )
      KiCheckForKernelApcDelivery();
    if ( v39 )
      ExFreePoolWithTag(P, 0);
  }
  if ( v20 )
  {
    do
    {
      v36 = *(_QWORD *)v20;
      sub_14024B0B4((_DWORD *)(v20 + 8), 1);
      v20 = v36;
    }
    while ( v36 );
    sub_1402AC800(v40);
  }
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 280), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v37 + 304), 0, 0);
  }
}
