/*
 * XREFs of sub_14037C880 @ 0x14037C880
 * Callers:
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 *     sub_14037C6BC @ 0x14037C6BC (sub_14037C6BC.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14037C144 @ 0x14037C144 (sub_14037C144.c)
 *     sub_14037C45C @ 0x14037C45C (sub_14037C45C.c)
 *     sub_14037C48C @ 0x14037C48C (sub_14037C48C.c)
 *     sub_14037CCE8 @ 0x14037CCE8 (sub_14037CCE8.c)
 *     sub_14037CE7C @ 0x14037CE7C (sub_14037CE7C.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14037C880(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // r13
  __int16 v9; // si
  unsigned int v10; // edi
  ULONG_PTR v11; // rsi
  int v12; // r12d
  int v13; // r14d
  ULONG_PTR v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v17; // r15d
  __int64 v18; // rcx
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r9
  struct _KTHREAD *v24; // rdi
  unsigned int v25; // r8d
  __int64 v26; // rbx
  unsigned int v27; // ecx
  int v28; // r9d
  struct _KTHREAD *v29; // rcx
  bool v30; // zf
  struct _KTHREAD *v31; // rax
  unsigned __int64 v32; // rax
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // r13
  unsigned int v36; // ecx
  __int64 v37; // r14
  unsigned int v38; // edx
  int v39; // edx
  struct _KTHREAD *v40; // rax
  NTSTATUS v41; // eax
  struct _KTHREAD *v42; // rcx
  NTSTATUS v43; // r14d
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int128 Object; // [rsp+58h] [rbp-A8h] BYREF
  char *v49; // [rsp+68h] [rbp-98h]
  __int128 v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v51; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  unsigned int **v55[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+BCh] [rbp-44h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  _BYTE v59[136]; // [rsp+C8h] [rbp-38h] BYREF

  v54 = a5;
  v8 = a1;
  v9 = a4;
  v51 = a2;
  v47 = a1;
  v53 = a6;
  v46 = a4;
  memset(v59, 0, 0x80uLL);
  v10 = *a2;
  v45 = 0x1000000000000LL;
  v49 = 0LL;
  WORD2(v45) = v9;
  v55[0] = (unsigned int **)v59;
  v11 = v8 + 440;
  v12 = 0;
  v55[1] = 0LL;
  v13 = 0;
  Object = 0LL;
  v55[2] = 0LL;
  v14 = v8 + 440;
  v58 = 0LL;
  v56 = 0;
  v57 = 8;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx(v14, 0LL);
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !(unsigned int)sub_14037CE7C(v14) )
      return 3221225557LL;
  }
  else
  {
    v33 = KeGetCurrentThread();
    --*((_WORD *)v33 + 243);
    ExAcquirePushLockExclusiveEx(v14, 0LL);
  }
  v17 = -1073740682;
  while ( 1 )
  {
    sub_14037CCE8(v8 + 448, v10, v55);
    v50 = 0LL;
    sub_14037C45C(v18, (__int64)&v50, (__int64)v55);
    if ( !(_QWORD)v50 )
      goto LABEL_10;
    v21 = *((_QWORD *)&v50 + 1) + 8LL;
    v22 = (unsigned __int16)*(_DWORD *)v50 + 2LL;
    *((_QWORD *)&v50 + 1) = v21;
    if ( v21 >= (__int64)v50 + 8 * v22 )
    {
      v32 = *(_QWORD *)(v50 + 8);
      if ( v32 )
      {
        *(_QWORD *)&v50 = *(_QWORD *)(v50 + 8);
        *((_QWORD *)&v50 + 1) = v32 + 16;
      }
      v21 = (v32 + 16) & ((unsigned __int128)-(__int128)v32 >> 64);
    }
    if ( !v21 || v19 < *(_DWORD *)v21 && v20 < *(_DWORD *)v21 )
    {
LABEL_10:
      if ( (a7 & 2) != 0 )
      {
        v17 = 0;
        goto LABEL_38;
      }
      while ( 1 )
      {
        LODWORD(v45) = v10;
        v17 = sub_14037CCE8(v8 + 448, v10, v55);
        if ( v17 != -1073741275 )
          break;
        v17 = sub_14037C48C((__int64 *)(v8 + 448), v55, &v45);
        if ( v17 < 0 )
          goto LABEL_92;
        if ( ++v12 == a3 )
        {
          sub_14037CFB8(v53, v8, v46, v54);
          v17 = 0;
          goto LABEL_15;
        }
        ++v10;
      }
      if ( v17 >= 0 )
        v17 = -1073741484;
LABEL_92:
      if ( v12 )
        sub_14037C144(v8, v51, v12, v23, 2);
      goto LABEL_15;
    }
    if ( (*(_BYTE *)(v21 + 7) & 1) != 0 )
      break;
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_37;
    LOWORD(Object) = 0;
    v49 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    *(_QWORD *)(v8 + 1656) = &Object;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    *(_DWORD *)(v8 + 1648) = v10;
    if ( (a7 & 2) != 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v11);
      sub_1402AFC00(v11);
      v34 = KeGetCurrentThread();
      v30 = (*((_WORD *)v34 + 243))++ == 0xFFFF;
      if ( v30 && *((struct _KTHREAD **)v34 + 19) != (struct _KTHREAD *)((char *)v34 + 152) )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      v35 = KeGetCurrentThread();
      v36 = v11 - qword_140C50630 >= 0x8000000000LL ? -1 : sub_140287F30(*((_QWORD *)v35 + 23));
      _disable();
      v37 = (__int64)v35 + 1696;
      v38 = 0;
      while ( (*(_QWORD *)v37 & 0x7FFFFFFFFFFFFFFCLL) != (v11 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v37 + 18)
           || (*(_DWORD *)v37 & 1) != 0
           || *(_DWORD *)(v37 + 8) != v36 )
      {
        ++v38;
        v37 += 96LL;
        if ( v38 >= 6 )
          goto LABEL_76;
      }
      *(_BYTE *)(v37 + 18) = 0;
      if ( v37 )
      {
        if ( *(__int64 *)v37 < 0 )
        {
          *(_BYTE *)v37 |= 2u;
          _enable();
          sub_14034EE30(v37);
          _disable();
        }
        v39 = *(_DWORD *)(v37 + 88);
        *(_DWORD *)(v37 + 88) = 0;
        *(_BYTE *)(v37 + 17) = 0;
        *(_QWORD *)v37 = 0LL;
        *((_BYTE *)v35 + 792) |= 1 << *(_BYTE *)(v37 + 16);
        _enable();
        if ( v39 )
          sub_14022B568((ULONG_PTR)v35, v11, v39);
        goto LABEL_78;
      }
LABEL_76:
      if ( (*((_DWORD *)v35 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v35, v11, v36, 0LL);
      _enable();
LABEL_78:
      v40 = KeGetCurrentThread();
      v30 = (*((_WORD *)v40 + 243))++ == 0xFFFF;
      if ( v30 && *((struct _KTHREAD **)v40 + 19) != (struct _KTHREAD *)((char *)v40 + 152) )
        KiCheckForKernelApcDelivery();
      v8 = v47;
    }
    Timeout.QuadPart = -2500000LL;
    v41 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v42 = KeGetCurrentThread();
    v43 = v41;
    --*((_WORD *)v42 + 243);
    if ( (a7 & 2) != 0 )
      ExAcquirePushLockSharedEx(v11, 0LL);
    else
      ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v8 + 1656) = 0LL;
    if ( v43 )
      goto LABEL_37;
    v13 = 1;
  }
  v17 = -1073740747;
LABEL_37:
  if ( (a7 & 2) != 0 )
  {
LABEL_38:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v11);
    sub_1402AFC00(v11);
    v31 = KeGetCurrentThread();
    v30 = (*((_WORD *)v31 + 243))++ == 0xFFFF;
    if ( v30 )
    {
      v30 = *((_QWORD *)v31 + 19) == (_QWORD)v31 + 152;
LABEL_33:
      if ( !v30 )
        KiCheckForKernelApcDelivery();
      return (unsigned int)v17;
    }
    return (unsigned int)v17;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  v24 = KeGetCurrentThread();
  if ( v11 - qword_140C50630 < 0x8000000000LL )
    v25 = sub_140287F30(*((_QWORD *)v24 + 23));
  else
    v25 = -1;
  _disable();
  v26 = (__int64)v24 + 1696;
  v27 = 0;
  while ( (*(_QWORD *)v26 & 0x7FFFFFFFFFFFFFFCLL) != (v11 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v26 + 18)
       || (*(_DWORD *)v26 & 1) != 0
       || *(_DWORD *)(v26 + 8) != v25 )
  {
    ++v27;
    v26 += 96LL;
    if ( v27 >= 6 )
      goto LABEL_44;
  }
  *(_BYTE *)(v26 + 18) = 0;
  if ( v26 )
  {
    if ( *(__int64 *)v26 < 0 )
    {
      *(_BYTE *)v26 |= 2u;
      _enable();
      sub_14034EE30(v26);
      _disable();
    }
    v28 = *(_DWORD *)(v26 + 88);
    *(_DWORD *)(v26 + 88) = 0;
    *(_BYTE *)(v26 + 17) = 0;
    *(_QWORD *)v26 = 0LL;
    *((_BYTE *)v24 + 792) |= 1 << *(_BYTE *)(v26 + 16);
    _enable();
    if ( v28 )
      sub_14022B568((ULONG_PTR)v24, v11, v28);
    goto LABEL_29;
  }
LABEL_44:
  if ( (*((_DWORD *)v24 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v24, v11, v25, 0LL);
  _enable();
LABEL_29:
  v29 = KeGetCurrentThread();
  v30 = (*((_WORD *)v29 + 243))++ == 0xFFFF;
  if ( v30 )
  {
    v30 = *((_QWORD *)v29 + 19) == (_QWORD)v29 + 152;
    goto LABEL_33;
  }
  return (unsigned int)v17;
}
