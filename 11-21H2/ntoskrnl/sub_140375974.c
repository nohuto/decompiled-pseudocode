/*
 * XREFs of sub_140375974 @ 0x140375974
 * Callers:
 *     sub_14037592C @ 0x14037592C (sub_14037592C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14025FE60 @ 0x14025FE60 (sub_14025FE60.c)
 *     sub_1402608AC @ 0x1402608AC (sub_1402608AC.c)
 *     sub_14026099C @ 0x14026099C (sub_14026099C.c)
 *     sub_1402609F4 @ 0x1402609F4 (sub_1402609F4.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EC288 @ 0x1406EC288 (sub_1406EC288.c)
 *     sub_1406EC338 @ 0x1406EC338 (sub_1406EC338.c)
 *     sub_140753A88 @ 0x140753A88 (sub_140753A88.c)
 *     sub_1407F71B0 @ 0x1407F71B0 (sub_1407F71B0.c)
 *     sub_14097FF04 @ 0x14097FF04 (sub_14097FF04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140375974(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v15; // r12d
  int v16; // esi
  unsigned __int64 *v17; // rax
  _QWORD *v18; // r13
  PEPROCESS v19; // rsi
  char *v20; // r12
  ULONG_PTR v21; // r15
  unsigned __int64 *v22; // rsi
  __int64 **v23; // rax
  int v24; // ecx
  struct _KTHREAD *v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // rdi
  unsigned int v28; // edx
  bool v29; // zf
  __int64 v30; // rdi
  __int64 v31; // rdi
  ULONG_PTR v32; // r15
  struct _KTHREAD *v33; // rdi
  __int64 v34; // rbx
  unsigned int v35; // ecx
  int v37; // r8d
  int v38; // r8d
  ULONG_PTR v39; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h]
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  _QWORD *v44; // [rsp+58h] [rbp-A8h]
  _OWORD v45[10]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+100h] [rbp+0h]
  __int128 v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+20h]

  v40 = 0LL;
  LODWORD(v39) = 0;
  v48 = 0LL;
  v46 = 0LL;
  Processa = Process;
  v47 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *((unsigned __int16 *)Process + 919);
  v44 = a4;
  v43 = a3;
  v9 = *(_QWORD *)(qword_140C51F48 + 8 * v8);
  v41 = v9;
  v10 = sub_14025FE60(v9, (unsigned int *)&v39);
  if ( v10 == 16 )
    return 3221225799LL;
  LODWORD(v46) = 2;
  sub_1406EC338(Process);
  sub_140753A88(a2, a3, &v40);
  memset(v45, 0, 0x98uLL);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(v9 + 1152, 0LL);
  v12 = v40;
  v13 = v39;
  while ( 1 )
  {
    v14 = sub_1407F71B0(v9, (char *)&v45[2] + 8, v11, v10);
    v15 = -1;
    v16 = v14;
    if ( v14 >= 0 )
      break;
    if ( v13 >= 0x10 )
      goto LABEL_32;
    v10 = v13;
    v16 = sub_14097FF04(v41, v12, v13);
    if ( v16 < 0 )
    {
      v15 = -1;
      goto LABEL_32;
    }
    v9 = v41;
  }
  v17 = sub_1402609F4(v12);
  v18 = v17;
  if ( v17 )
  {
    v19 = Processa;
    *(_QWORD *)&v45[0] = v17;
    *((_QWORD *)&v45[1] + 1) = v41;
    v20 = (char *)Processa + 1664;
    *(_QWORD *)&v45[1] = (char *)Processa + 1664;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)v19 + 1224, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 2u;
    --*((_WORD *)CurrentThread + 243);
    v21 = (ULONG_PTR)v19 + 1232;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v19 + 1232, 0LL);
    v22 = &a2[2 * v43];
    while ( a2 < v22 )
    {
      v23 = sub_1403126F0(*a2);
      if ( v23 )
      {
        v24 = *((_DWORD *)v23 + 12);
        if ( (v24 & 0x70) == 0
          && (v24 & 0x200000) != 0
          && (v24 & 0x800000) == 0
          && (v24 & 0x180000u) < 0x100000
          && (*((unsigned int *)v23 + 7) | ((unsigned __int64)*((unsigned __int8 *)v23 + 33) << 32)) >= (*a2 + a2[1] - 1) >> 12 )
        {
          sub_1402608AC((__int64)v20, (__int64)v23, *a2, *a2 + a2[1] - 1, (__int64)v45);
        }
      }
      a2 += 2;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v21);
    v25 = KeGetCurrentThread();
    if ( v21 - qword_140C50630 >= 0x8000000000LL )
    {
      v15 = -1;
      v26 = -1;
    }
    else
    {
      v26 = sub_140287F30(*((_QWORD *)v25 + 23));
      v15 = -1;
    }
    _disable();
    v27 = (__int64)v25 + 1696;
    v28 = 0;
    while ( (*(_QWORD *)v27 & 0x7FFFFFFFFFFFFFFCLL) != (v21 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v27 + 18)
         || (*(_DWORD *)v27 & 1) != 0
         || *(_DWORD *)(v27 + 8) != v26 )
    {
      ++v28;
      v27 += 96LL;
      if ( v28 >= 6 )
        goto LABEL_25;
    }
    *(_BYTE *)(v27 + 18) = 0;
    if ( !v27 )
    {
LABEL_25:
      if ( (*((_DWORD *)v25 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v25, v21, v26, 0LL);
      _enable();
      goto LABEL_27;
    }
    if ( *(__int64 *)v27 < 0 )
    {
      *(_BYTE *)v27 |= 2u;
      _enable();
      sub_14034EE30(v27);
      _disable();
    }
    v37 = *(_DWORD *)(v27 + 88);
    *(_DWORD *)(v27 + 88) = 0;
    *(_BYTE *)(v27 + 17) = 0;
    *(_QWORD *)v27 = 0LL;
    *((_BYTE *)v25 + 792) |= 1 << *(_BYTE *)(v27 + 16);
    _enable();
    if ( v37 )
      sub_14022B568((ULONG_PTR)v25, v21, v37);
LABEL_27:
    v29 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v29 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    sub_14030EA00((__int64)CurrentThread, (__int64)Processa);
    if ( v18[2] < v40 )
    {
      v30 = sub_14026099C((__int64)v18);
      if ( v30 )
      {
        ExFreePoolWithTag(v18, 0);
        v18 = (_QWORD *)v30;
      }
    }
    v16 = 0;
    v40 = v18[3];
    *v44 = v18;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_32:
  v31 = v41;
  sub_1406EC288(v41, (char *)&v45[2] + 8);
  v32 = v31 + 1152;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 1152), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v31 + 1152);
  v33 = KeGetCurrentThread();
  if ( v32 - qword_140C50630 < 0x8000000000LL )
    v15 = sub_140287F30(*((_QWORD *)v33 + 23));
  _disable();
  v34 = (__int64)v33 + 1696;
  v35 = 0;
  while ( (*(_QWORD *)v34 & 0x7FFFFFFFFFFFFFFCLL) != (v32 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v34 + 18)
       || (*(_DWORD *)v34 & 1) != 0
       || *(_DWORD *)(v34 + 8) != v15 )
  {
    ++v35;
    v34 += 96LL;
    if ( v35 >= 6 )
      goto LABEL_42;
  }
  *(_BYTE *)(v34 + 18) = 0;
  if ( !v34 )
  {
LABEL_42:
    if ( (*((_DWORD *)v33 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, v32, v15, 0LL);
    _enable();
    goto LABEL_44;
  }
  if ( *(__int64 *)v34 < 0 )
  {
    *(_BYTE *)v34 |= 2u;
    _enable();
    sub_14034EE30(v34);
    _disable();
  }
  v38 = *(_DWORD *)(v34 + 88);
  *(_DWORD *)(v34 + 88) = 0;
  *(_BYTE *)(v34 + 17) = 0;
  *(_QWORD *)v34 = 0LL;
  *((_BYTE *)v33 + 792) |= 1 << *(_BYTE *)(v34 + 16);
  _enable();
  if ( v38 )
    sub_14022B568((ULONG_PTR)v33, v32, v38);
LABEL_44:
  v29 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v29 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  *(_QWORD *)&v46 = v40;
  *((_QWORD *)&v46 + 1) = *((_QWORD *)&v45[7] + 1);
  v47 = v45[8];
  LODWORD(v48) = v16;
  sub_1406EC338(Processa);
  return (unsigned int)v16;
}
