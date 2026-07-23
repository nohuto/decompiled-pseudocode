/*
 * XREFs of sub_1407783C4 @ 0x1407783C4
 * Callers:
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_1406D27C8 @ 0x1406D27C8 (sub_1406D27C8.c)
 *     sub_1406D2EE0 @ 0x1406D2EE0 (sub_1406D2EE0.c)
 *     sub_140774E80 @ 0x140774E80 (sub_140774E80.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B4E4 @ 0x14077B4E4 (sub_14077B4E4.c)
 *     sub_14077B534 @ 0x14077B534 (sub_14077B534.c)
 *     sub_14077B594 @ 0x14077B594 (sub_14077B594.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1407783C4(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  _BYTE *v6; // r12
  unsigned int v8; // r15d
  int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v17; // r14
  void *v18; // r15
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  void *Pool2; // rax
  bool v23; // zf
  void *v24; // rdi
  unsigned int v25; // r8d
  __int64 *v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 *v29; // rsi
  struct _KTHREAD *v30; // rax
  __int64 v31; // rsi
  ULONG_PTR v32; // r14
  int v33; // eax
  int v34; // eax
  _BYTE v35[12]; // [rsp+68h] [rbp-39h] BYREF
  unsigned int Size_4; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned int v37; // [rsp+78h] [rbp-29h] BYREF
  void *Buf1; // [rsp+80h] [rbp-21h]
  ULONG_PTR v39; // [rsp+88h] [rbp-19h] BYREF
  void *Buf2; // [rsp+90h] [rbp-11h] BYREF
  __int64 v41[10]; // [rsp+98h] [rbp-9h] BYREF
  int v42; // [rsp+F8h] [rbp+57h]
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+67h] BYREF
  char v45; // [rsp+110h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v42 = a1;
  v6 = a6;
  v41[0] = 0LL;
  v37 = 0;
  v8 = a1;
  *(_DWORD *)&v35[8] = 0;
  v9 = 0;
  *a6 = 0;
  Size_4 = 0;
  v45 = 0;
  Buf1 = 0LL;
  Buf2 = 0LL;
  *(_QWORD *)v35 = 0LL;
  v39 = 0LL;
  if ( a4 )
    return;
  sub_14077B4E4(a1, v41, &v37);
  if ( !v37 )
    return;
  v10 = a5;
  v11 = v41[0];
  v12 = sub_14077B534(v41[0], v37, a5);
  v13 = v12;
  if ( v12 >= v14 )
    return;
  if ( !a3 )
  {
    v9 = sub_14077B0A4(v8, a2, &BugCheckParameter2);
    if ( v9 < 0 )
      return;
    v45 = 1;
  }
  v15 = 3 * v13;
  if ( *(_DWORD *)(v11 + 24 * v13 + 16) == 1 )
  {
    v9 = sub_14077D91C(0x5A706E50u, 0LL, 0LL, v10, (__int64)v35, (__int64)&Buf2, (__int64)&Size_4, 0x10000);
    if ( v9 == -1073741275 )
    {
      v9 = 0;
      *(_DWORD *)v35 = 0;
      Size_4 = 0;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v17 = (_DWORD *)BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v18 = Buf2;
  v19 = v17[2 * v15 + 28];
  if ( v19 )
  {
    if ( v19 == 1 || v9 < 0 || !*(_DWORD *)(v11 + 8 * v15 + 16) )
      goto LABEL_35;
    v20 = sub_14077B594(&v17[2 * v15 + 28], &v35[4], 0LL, 0LL, &v35[8]);
    v9 = v20;
    if ( v20 == -1073741275 )
    {
      *(_DWORD *)&v35[4] = 0;
      v9 = 0;
      v23 = *(_DWORD *)v35 == 0;
    }
    else
    {
      if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741789 )
        goto LABEL_35;
      v21 = *(_DWORD *)&v35[8];
      if ( *(_DWORD *)&v35[8] )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, *(unsigned int *)&v35[8], 1517317712LL);
        Buf1 = Pool2;
        if ( !Pool2 )
        {
          v9 = -1073741670;
          goto LABEL_35;
        }
      }
      else
      {
        Pool2 = Buf1;
      }
      v9 = sub_14077B594(&v17[2 * v15 + 28], &v35[4], Pool2, v21, &v35[8]);
      if ( v9 < 0 || *(_QWORD *)&v35[4] != __PAIR64__(Size_4, *(unsigned int *)v35) )
        goto LABEL_35;
      if ( !*(_DWORD *)&v35[8] )
      {
LABEL_22:
        *v6 = 1;
        goto LABEL_23;
      }
      v23 = memcmp(Buf1, v18, *(unsigned int *)&v35[8]) == 0;
    }
    if ( v23 )
      goto LABEL_22;
LABEL_35:
    sub_140774E80((__int64)&v17[2 * v15 + 28]);
    if ( v9 >= 0 && *(_DWORD *)(v11 + 8 * v15 + 16) == 1 && !*(_DWORD *)(v11 + 8 * v15 + 12) )
      v9 = sub_1406D27C8(
             *(int *)v35,
             (__int128 *)v18,
             Size_4,
             *(_DWORD *)(v11 + 8 * v15 + 8),
             0,
             (__int64)&v17[2 * v15 + 28]);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v11 + 8 * v15 + 16) )
    goto LABEL_35;
LABEL_23:
  ExReleasePushLockEx((ULONG_PTR)v17, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_DWORD *)(v11 + 8 * v15 + 16) && !*v6 )
  {
    v25 = 0;
    v26 = qword_140002420;
    while ( 1 )
    {
      v27 = v26[1];
      if ( *(_DWORD *)(v27 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v28 = *(_QWORD *)v27 - *(_QWORD *)a5;
        if ( *(_QWORD *)v27 == *(_QWORD *)a5 )
          v28 = *(_QWORD *)(v27 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v28 && v42 == *(_DWORD *)v26 )
          break;
      }
      ++v25;
      v26 += 7;
      if ( v25 >= 3 )
        goto LABEL_25;
    }
    v29 = &qword_140002420[7 * v25];
    if ( v29 )
    {
      if ( (int)sub_1406D2EE0(v42, a2, (int)v17, v27, v29[2], *((_DWORD *)v29 + 6), (PVOID *)&v39) >= 0 )
      {
        v30 = KeGetCurrentThread();
        v31 = v29[6];
        v32 = v39;
        --*((_WORD *)v30 + 242);
        v24 = (void *)v39;
        ExAcquirePushLockExclusiveEx(v39, 0LL);
        v18 = Buf2;
        if ( v9 < 0 || (v33 = *(_DWORD *)(v32 + v31), v33 == 0x80000000) )
        {
          *(_DWORD *)(v32 + v31) = 0x80000000;
          goto LABEL_60;
        }
        if ( *(_DWORD *)&v35[4] == 17 )
        {
          if ( *(_BYTE *)Buf1 == 0xFF )
          {
            if ( *(_DWORD *)v35 == 17 && *(_BYTE *)Buf2 )
              goto LABEL_60;
            v34 = v33 - 1;
LABEL_59:
            *(_DWORD *)(v32 + v31) = v34;
            goto LABEL_60;
          }
          if ( *(_BYTE *)Buf1 )
          {
LABEL_60:
            ExReleasePushLockEx((ULONG_PTR)v24, 0LL);
            KeLeaveCriticalRegion();
            v17 = (_DWORD *)BugCheckParameter2;
            goto LABEL_26;
          }
        }
        if ( *(_DWORD *)v35 != 17 || *(_BYTE *)Buf2 != 0xFF )
          goto LABEL_60;
        v34 = v33 + 1;
        goto LABEL_59;
      }
    }
  }
LABEL_25:
  v24 = (void *)v39;
LABEL_26:
  if ( Buf1 )
    ExFreePoolWithTag(Buf1, 0x5A706E50u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x5A706E50u);
  if ( v24 )
    sub_14077B394(v24);
  if ( v45 )
    sub_14077B394(v17);
}
