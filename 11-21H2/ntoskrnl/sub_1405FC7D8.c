/*
 * XREFs of sub_1405FC7D8 @ 0x1405FC7D8
 * Callers:
 *     sub_1405FC72C @ 0x1405FC72C (sub_1405FC72C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14037A368 @ 0x14037A368 (sub_14037A368.c)
 *     sub_14037C45C @ 0x14037C45C (sub_14037C45C.c)
 *     sub_14037CCE8 @ 0x14037CCE8 (sub_14037CCE8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_1405FC7D8(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // edi
  int v6; // r15d
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct _KTHREAD *v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rbx
  unsigned int v18; // edx
  int v19; // r9d
  struct _KTHREAD *v20; // rax
  __int128 v23; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v24[3]; // [rsp+40h] [rbp-99h] BYREF
  int v25; // [rsp+58h] [rbp-81h]
  int v26; // [rsp+5Ch] [rbp-7Dh]
  __int64 v27; // [rsp+60h] [rbp-79h]
  _BYTE v28[136]; // [rsp+68h] [rbp-71h] BYREF

  v3 = *a2;
  memset(v28, 0, 0x80uLL);
  v26 = 8;
  v24[1] = 0LL;
  v24[2] = 0LL;
  v27 = 0LL;
  v24[0] = v28;
  v6 = 1;
  v25 = 0;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  v9 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v10 = v23;
  while ( 1 )
  {
    if ( v6 )
    {
      sub_14037CCE8((__int64 *)(a1 + 448), v3, (__int64)v24);
      sub_14037C45C(v11, (__int64)&v23, (__int64)v24);
      v10 = v23;
      v6 = 0;
    }
    if ( v10 )
    {
      v12 = *((_QWORD *)&v23 + 1) + 8LL;
      v13 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      *((_QWORD *)&v23 + 1) = v12;
      if ( v12 >= v10 + 8 * v13 )
      {
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)&v23 = v14;
          *((_QWORD *)&v23 + 1) = v14 + 16;
        }
        v12 = (v14 + 16) & ((unsigned __int128)-(__int128)v14 >> 64);
      }
    }
    else
    {
      v12 = 0LL;
    }
    if ( *(_BYTE *)(v12 + 6) == 3 )
    {
      *(_BYTE *)(v12 + 6) = 0;
      sub_14037A368(a1, (__int64)v24, (__int64 *)&v23);
      v10 = v23;
      v6 = 1;
    }
    if ( ++v7 == a3 )
      break;
    ++v3;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)v9 - qword_140C50630 >= 0x8000000000LL )
    v16 = -1;
  else
    v16 = sub_140287F30(*((_QWORD *)v15 + 23));
  _disable();
  v17 = (__int64)v15 + 1696;
  v18 = 0;
  while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v17 + 18)
       || (*(_DWORD *)v17 & 1) != 0
       || *(_DWORD *)(v17 + 8) != v16 )
  {
    ++v18;
    v17 += 96LL;
    if ( v18 >= 6 )
      goto LABEL_25;
  }
  *(_BYTE *)(v17 + 18) = 0;
  if ( !v17 )
  {
LABEL_25:
    if ( (*((_DWORD *)v15 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, a1 + 440, v16, 0LL);
    _enable();
    goto LABEL_33;
  }
  if ( *(__int64 *)v17 < 0 )
  {
    *(_BYTE *)v17 |= 2u;
    _enable();
    sub_14034EE30(v17);
    _disable();
  }
  v19 = *(_DWORD *)(v17 + 88);
  *(_DWORD *)(v17 + 88) = 0;
  *(_BYTE *)(v17 + 17) = 0;
  *(_QWORD *)v17 = 0LL;
  *((_BYTE *)v15 + 792) |= 1 << *(_BYTE *)(v17 + 16);
  _enable();
  if ( v19 )
    sub_14022B568((ULONG_PTR)v15, a1 + 440, v19);
LABEL_33:
  v20 = KeGetCurrentThread();
  if ( (*((_WORD *)v20 + 243))++ == 0xFFFF )
  {
    v20 = (struct _KTHREAD *)((char *)v20 + 152);
    if ( *(struct _KTHREAD **)v20 != v20 )
      LOBYTE(v20) = KiCheckForKernelApcDelivery();
  }
  return (char)v20;
}
