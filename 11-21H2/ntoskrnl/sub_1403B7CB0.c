/*
 * XREFs of sub_1403B7CB0 @ 0x1403B7CB0
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1403B7CB0(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r15
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v4; // r12d
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // ecx
  _QWORD *v9; // rax
  bool v10; // zf
  int v11; // r9d
  struct _KTHREAD *v12; // r14
  unsigned int v13; // ecx
  __int64 v14; // rsi
  unsigned int v15; // edx
  int v16; // r8d
  struct _KTHREAD *v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // ecx
  int v20; // r8d
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  _BYTE v24[40]; // [rsp+48h] [rbp-50h] BYREF

  v22[0] = a1;
  v23 = 0LL;
  memset(v24, 0, 32);
  v22[1] = v24;
  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( !a1 )
    v1 = &StartContext;
  v4 = -1;
  v5 = (volatile signed __int64 *)(v1 + 24);
  while ( 1 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 24), 0LL);
    if ( !a1 && *((_BYTE *)v1 + 204) )
    {
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1 + 24);
      v17 = KeGetCurrentThread();
      if ( (unsigned __int64)v5 - qword_140C50630 < 0x8000000000LL )
        v4 = sub_140287F30(*((_QWORD *)v17 + 23));
      _disable();
      v18 = (__int64)v17 + 1696;
      v19 = 0;
      while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v18 + 18)
           || (*(_DWORD *)v18 & 1) != 0
           || *(_DWORD *)(v18 + 8) != v4 )
      {
        ++v19;
        v18 += 96LL;
        if ( v19 >= 6 )
          goto LABEL_66;
      }
      *(_BYTE *)(v18 + 18) = 0;
      if ( v18 )
      {
        if ( *(__int64 *)v18 < 0 )
        {
          *(_BYTE *)v18 |= 2u;
          _enable();
          sub_14034EE30(v18);
          _disable();
        }
        v20 = *(_DWORD *)(v18 + 88);
        *(_DWORD *)(v18 + 88) = 0;
        *(_BYTE *)(v18 + 17) = 0;
        *(_QWORD *)v18 = 0LL;
        *((_BYTE *)v17 + 792) |= 1 << *(_BYTE *)(v18 + 16);
        _enable();
        if ( v20 )
          sub_14022B568((ULONG_PTR)v17, (__int64)(v1 + 24), v20);
        goto LABEL_69;
      }
LABEL_66:
      if ( (*((_DWORD *)v17 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)(v1 + 24), v4, 0LL);
      _enable();
LABEL_69:
      LOBYTE(v9) = 1;
      v10 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v10 )
        goto LABEL_20;
      return (char)v9;
    }
    KeGenericCallDpc((__int64)sub_1403C89A0, (__int64)v22);
    if ( (_DWORD)v23 != 259 )
      break;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 24);
    v12 = KeGetCurrentThread();
    if ( (unsigned __int64)v5 - qword_140C50630 >= 0x8000000000LL )
      v13 = -1;
    else
      v13 = sub_140287F30(*((_QWORD *)v12 + 23));
    _disable();
    v14 = (__int64)v12 + 1696;
    v15 = 0;
    while ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v14 + 18)
         || (*(_DWORD *)v14 & 1) != 0
         || *(_DWORD *)(v14 + 8) != v13 )
    {
      ++v15;
      v14 += 96LL;
      if ( v15 >= 6 )
        goto LABEL_44;
    }
    *(_BYTE *)(v14 + 18) = 0;
    if ( v14 )
    {
      if ( *(__int64 *)v14 < 0 )
      {
        *(_BYTE *)v14 |= 2u;
        _enable();
        sub_14034EE30(v14);
        _disable();
      }
      v16 = *(_DWORD *)(v14 + 88);
      *(_DWORD *)(v14 + 88) = 0;
      *(_BYTE *)(v14 + 17) = 0;
      *(_QWORD *)v14 = 0LL;
      *((_BYTE *)v12 + 792) |= 1 << *(_BYTE *)(v14 + 16);
      _enable();
      if ( v16 )
        sub_14022B568((ULONG_PTR)v12, (__int64)(v1 + 24), v16);
      goto LABEL_46;
    }
LABEL_44:
    if ( (*((_DWORD *)v12 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v12, (ULONG_PTR)(v1 + 24), v13, 0LL);
    _enable();
LABEL_46:
    LOBYTE(v9) = 1;
    v10 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v10 )
    {
      v9 = (_QWORD *)((char *)CurrentThread + 152);
      if ( (_QWORD *)*v9 != v9 )
        LOBYTE(v9) = KiCheckForKernelApcDelivery();
    }
    if ( !v22[0] )
      return (char)v9;
    sub_140217454((__int64)&v24[8], 0x12u);
  }
  *((_BYTE *)v1 + 204) = 0;
  v1[10] = 0LL;
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 24);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)v5 - qword_140C50630 < 0x8000000000LL )
    v4 = sub_140287F30(*((_QWORD *)v6 + 23));
  _disable();
  v7 = (__int64)v6 + 1696;
  v8 = 0;
  while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v7 + 18)
       || (*(_DWORD *)v7 & 1) != 0
       || *(_DWORD *)(v7 + 8) != v4 )
  {
    ++v8;
    v7 += 96LL;
    if ( v8 >= 6 )
      goto LABEL_17;
  }
  *(_BYTE *)(v7 + 18) = 0;
  if ( !v7 )
  {
LABEL_17:
    if ( (*((_DWORD *)v6 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)(v1 + 24), v4, 0LL);
    _enable();
    goto LABEL_19;
  }
  if ( *(__int64 *)v7 < 0 )
  {
    *(_BYTE *)v7 |= 2u;
    _enable();
    sub_14034EE30(v7);
    _disable();
  }
  v11 = *(_DWORD *)(v7 + 88);
  *(_DWORD *)(v7 + 88) = 0;
  *(_BYTE *)(v7 + 17) = 0;
  *(_QWORD *)v7 = 0LL;
  *((_BYTE *)v6 + 792) |= 1 << *(_BYTE *)(v7 + 16);
  _enable();
  if ( v11 )
    sub_14022B568((ULONG_PTR)v6, (__int64)(v1 + 24), v11);
LABEL_19:
  LOBYTE(v9) = 1;
  v10 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v10 )
  {
LABEL_20:
    v9 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v9 != v9 )
      LOBYTE(v9) = KiCheckForKernelApcDelivery();
  }
  return (char)v9;
}
