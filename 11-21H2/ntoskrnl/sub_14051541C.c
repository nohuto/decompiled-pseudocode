/*
 * XREFs of sub_14051541C @ 0x14051541C
 * Callers:
 *     sub_140513870 @ 0x140513870 (sub_140513870.c)
 *     sub_140514A20 @ 0x140514A20 (sub_140514A20.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 */

__int64 __fastcall sub_14051541C(__int64 a1)
{
  __int64 v1; // r15
  ULONG_PTR v3; // rdi
  __int64 v4; // rdx
  int v5; // r14d
  struct _KTHREAD *v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rbx
  int v14; // r9d

  v1 = *(_QWORD *)(a1 + 504);
  if ( !*(_DWORD *)(v1 + 48) )
  {
LABEL_45:
    sub_140514E28((__int64 *)v1);
    *(_QWORD *)(a1 + 504) = 0LL;
    return 0;
  }
  v3 = a1 + 312;
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  if ( *(_BYTE *)(a1 + 338) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    CurrentThread = KeGetCurrentThread();
    if ( v3 - qword_140C50630 >= 0x8000000000LL )
      v12 = -1;
    else
      v12 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v13 = (__int64)CurrentThread + 1696;
    v9 = 0LL;
    while ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v13 + 18)
         || (*(_DWORD *)v13 & 1) != 0
         || *(_DWORD *)(v13 + 8) != v12 )
    {
      v9 = (unsigned int)(v9 + 1);
      v13 += 96LL;
      if ( (unsigned int)v9 >= 6 )
        goto LABEL_35;
    }
    *(_BYTE *)(v13 + 18) = 0;
    if ( !v13 )
    {
LABEL_35:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, v12, 0LL);
      _enable();
      goto LABEL_43;
    }
    if ( *(__int64 *)v13 < 0 )
    {
      *(_BYTE *)v13 |= 2u;
      _enable();
      sub_14034EE30(v13);
      _disable();
    }
    v14 = *(_DWORD *)(v13 + 88);
    *(_DWORD *)(v13 + 88) = 0;
    *(_BYTE *)(v13 + 17) = 0;
    *(_QWORD *)v13 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v13 + 16);
    _enable();
    if ( v14 )
      sub_14022B568((ULONG_PTR)CurrentThread, v3, v14);
    goto LABEL_43;
  }
  v5 = sub_14042A5E0(*(_QWORD *)(a1 + 536), v4);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v6 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    v7 = -1;
  else
    v7 = sub_140287F30(*((_QWORD *)v6 + 23));
  _disable();
  v8 = (__int64)v6 + 1696;
  v9 = 0LL;
  while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v8 + 18)
       || (*(_DWORD *)v8 & 1) != 0
       || *(_DWORD *)(v8 + 8) != v7 )
  {
    v9 = (unsigned int)(v9 + 1);
    v8 += 96LL;
    if ( (unsigned int)v9 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(v8 + 18) = 0;
  if ( !v8 )
  {
LABEL_14:
    if ( (*((_DWORD *)v6 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, v3, v7, 0LL);
    _enable();
    goto LABEL_22;
  }
  if ( *(__int64 *)v8 < 0 )
  {
    *(_BYTE *)v8 |= 2u;
    _enable();
    sub_14034EE30(v8);
    _disable();
  }
  v10 = *(_DWORD *)(v8 + 88);
  *(_DWORD *)(v8 + 88) = 0;
  *(_BYTE *)(v8 + 17) = 0;
  *(_QWORD *)v8 = 0LL;
  v9 = *((unsigned __int8 *)v6 + 792);
  LODWORD(v9) = v9 | (1 << *(_BYTE *)(v8 + 16));
  *((_BYTE *)v6 + 792) = v9;
  _enable();
  if ( v10 )
    sub_14022B568((ULONG_PTR)v6, v3, v10);
LABEL_22:
  if ( v5 >= 0 )
  {
LABEL_43:
    if ( *(_DWORD *)(v1 + 48) == 3 )
      sub_14042A5E0(*(_QWORD *)(a1 + 552), v9);
    goto LABEL_45;
  }
  return (unsigned int)v5;
}
