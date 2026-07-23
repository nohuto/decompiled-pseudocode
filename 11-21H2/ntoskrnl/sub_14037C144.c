/*
 * XREFs of sub_14037C144 @ 0x14037C144
 * Callers:
 *     sub_14037C0B4 @ 0x14037C0B4 (sub_14037C0B4.c)
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
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

void __fastcall sub_14037C144(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  int v7; // r14d
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // rsi
  struct _KTHREAD *v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // rbx
  unsigned int v17; // edx
  int v18; // r9d
  struct _KTHREAD *v19; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int128 v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+40h] [rbp-C0h]
  _QWORD v25[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  _BYTE v29[136]; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  v24 = a3;
  memset(v29, 0, 0x80uLL);
  v25[1] = 0LL;
  v25[2] = 0LL;
  v28 = 0LL;
  v26 = 0;
  v7 = 0;
  v25[0] = v29;
  v27 = 8;
  v8 = 1;
  v23 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v10 = v23;
  while ( 1 )
  {
    if ( v8 )
    {
      sub_14037CCE8(a1 + 448, v5, v25);
      sub_14037C45C(v11, &v23, v25);
      v10 = v23;
      v8 = 0;
    }
    if ( v10 )
    {
      v12 = *((_QWORD *)&v23 + 1) + 8LL;
      v21 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      *((_QWORD *)&v23 + 1) = v12;
      if ( v12 >= v10 + 8 * v21 )
      {
        v22 = *(_QWORD *)(v10 + 8);
        if ( v22 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)&v23 = v22;
          *((_QWORD *)&v23 + 1) = v22 + 16;
        }
        v12 = (v22 + 16) & ((unsigned __int128)-(__int128)v22 >> 64);
      }
    }
    else
    {
      v12 = 0LL;
    }
    if ( (*(_BYTE *)(v12 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
    }
    else
    {
      if ( *(_BYTE *)(v12 + 6) != 1 )
        goto LABEL_12;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v12 + 6) = 3;
        goto LABEL_12;
      }
    }
    *(_BYTE *)(v12 + 6) = 0;
    sub_14037A368(a1, (__int64)v25, (__int64 *)&v23);
    v10 = v23;
    v8 = 1;
LABEL_12:
    if ( ++v7 == v24 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v13 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    v14 = KeGetCurrentThread();
    if ( v13 - qword_140C50630 < 0x8000000000LL )
      v15 = sub_140287F30(*((_QWORD *)v14 + 23));
    else
      v15 = -1;
    _disable();
    v16 = (__int64)v14 + 1696;
    v17 = 0;
    while ( (*(_QWORD *)v16 & 0x7FFFFFFFFFFFFFFCLL) != (v13 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v16 + 18)
         || (*(_DWORD *)v16 & 1) != 0
         || *(_DWORD *)(v16 + 8) != v15 )
    {
      ++v17;
      v16 += 96LL;
      if ( v17 >= 6 )
        goto LABEL_36;
    }
    *(_BYTE *)(v16 + 18) = 0;
    if ( v16 )
    {
      if ( *(__int64 *)v16 < 0 )
      {
        *(_BYTE *)v16 |= 2u;
        _enable();
        sub_14034EE30(v16);
        _disable();
      }
      v18 = *(_DWORD *)(v16 + 88);
      *(_DWORD *)(v16 + 88) = 0;
      *(_BYTE *)(v16 + 17) = 0;
      *(_QWORD *)v16 = 0LL;
      *((_BYTE *)v14 + 792) |= 1 << *(_BYTE *)(v16 + 16);
      _enable();
      if ( v18 )
        sub_14022B568((ULONG_PTR)v14, v13, v18);
      goto LABEL_28;
    }
LABEL_36:
    if ( (*((_DWORD *)v14 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v13, v15, 0LL);
    _enable();
LABEL_28:
    v19 = KeGetCurrentThread();
    if ( (*((_WORD *)v19 + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)v19 + 19) != (struct _KTHREAD *)((char *)v19 + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
