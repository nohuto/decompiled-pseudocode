/*
 * XREFs of sub_1405845D4 @ 0x1405845D4
 * Callers:
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_14023CB20 @ 0x14023CB20 (sub_14023CB20.c)
 *     sub_14023CB68 @ 0x14023CB68 (sub_14023CB68.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140580CE0 @ 0x140580CE0 (sub_140580CE0.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 */

__int64 __fastcall sub_1405845D4(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // rsi
  struct _KTHREAD *v10; // rbp
  unsigned int v11; // ecx
  __int64 v12; // rbx
  unsigned int v13; // edx
  int v14; // r8d
  bool v15; // zf
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  struct _KTHREAD *v24; // rbp
  unsigned int v25; // ecx
  __int64 v26; // rbx
  unsigned int v27; // edx
  int v28; // r9d
  unsigned __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1[1];
  v29 = 0LL;
  if ( !(unsigned int)sub_140580CE0(v2) )
    return 3221225477LL;
  sub_14023CB68((__int64)a1);
  v4 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = ((a1[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1[11];
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(v7 + 1232, 0LL);
  v8 = sub_1407BE280(a1[11], 1LL);
  if ( v8 >= 0 )
  {
    sub_14023CB20((__int64)a1);
    v16 = sub_14027D6E0(a1[13], v6, &v29);
    v17 = v29;
    a1[5] = v16;
    if ( v17 == v6 )
    {
      v30 = sub_140317A10(v17);
      if ( (v30 & 1) != 0 )
      {
        v18 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v19 = *(_QWORD *)(v18 + 40);
        if ( v19 < 0 )
        {
          v20 = *(_QWORD *)(v18 + 8);
          if ( v20 < 0 || (v19 & 0x10000000000LL) != 0 || !v20 )
          {
            v21 = sub_140234F14(a1[11], v20 | 0x8000000000000000uLL);
            if ( v21 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v22 + 1680) + 344LL) > v21[12] )
              {
                v8 = sub_140316400(a1[1], v6, 0xFFFFFFFFFFFFFFFFuLL, 0);
                if ( v8 >= 0 )
                  v4 = 0;
              }
            }
          }
        }
      }
    }
    sub_14023CB68((__int64)a1);
    if ( v4 )
      sub_1406FEC50(a1[11], 1LL);
    v23 = a1[11] + 1232LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v23);
    v24 = KeGetCurrentThread();
    if ( (unsigned __int64)(v23 - qword_140C50630) >= 0x8000000000LL )
      v25 = -1;
    else
      v25 = sub_140287F30(*((_QWORD *)v24 + 23));
    _disable();
    v26 = (__int64)v24 + 1696;
    v27 = 0;
    while ( (*(_QWORD *)v26 & 0x7FFFFFFFFFFFFFFCLL) != (v23 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v26 + 18)
         || (*(_DWORD *)v26 & 1) != 0
         || *(_DWORD *)(v26 + 8) != v25 )
    {
      ++v27;
      v26 += 96LL;
      if ( v27 >= 6 )
        goto LABEL_49;
    }
    *(_BYTE *)(v26 + 18) = 0;
    if ( !v26 )
    {
LABEL_49:
      if ( (*((_DWORD *)v24 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, v25, 0LL);
      _enable();
      goto LABEL_57;
    }
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
      sub_14022B568((ULONG_PTR)v24, v23, v28);
LABEL_57:
    v15 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    if ( v8 < 0 )
      sub_1405BCAF8(a1[13], (unsigned int)v8);
    sub_14023CB20((__int64)a1);
    return 0LL;
  }
  else
  {
    v9 = a1[11] + 1232LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v10 = KeGetCurrentThread();
    if ( (unsigned __int64)(v9 - qword_140C50630) >= 0x8000000000LL )
      v11 = -1;
    else
      v11 = sub_140287F30(*((_QWORD *)v10 + 23));
    _disable();
    v12 = (__int64)v10 + 1696;
    v13 = 0;
    while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != (v9 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v12 + 18)
         || (*(_DWORD *)v12 & 1) != 0
         || *(_DWORD *)(v12 + 8) != v11 )
    {
      ++v13;
      v12 += 96LL;
      if ( v13 >= 6 )
        goto LABEL_15;
    }
    *(_BYTE *)(v12 + 18) = 0;
    if ( !v12 )
    {
LABEL_15:
      if ( (*((_DWORD *)v10 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, v9, v11, 0LL);
      _enable();
      goto LABEL_23;
    }
    if ( *(__int64 *)v12 < 0 )
    {
      *(_BYTE *)v12 |= 2u;
      _enable();
      sub_14034EE30(v12);
      _disable();
    }
    v14 = *(_DWORD *)(v12 + 88);
    *(_DWORD *)(v12 + 88) = 0;
    *(_BYTE *)(v12 + 17) = 0;
    *(_QWORD *)v12 = 0LL;
    *((_BYTE *)v10 + 792) |= 1 << *(_BYTE *)(v12 + 16);
    _enable();
    if ( v14 )
      sub_14022B568((ULONG_PTR)v10, v9, v14);
LABEL_23:
    v15 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    sub_14023CB20((__int64)a1);
    return (unsigned int)v8;
  }
}
