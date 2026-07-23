/*
 * XREFs of sub_140236F54 @ 0x140236F54
 * Callers:
 *     sub_140236EC0 @ 0x140236EC0 (sub_140236EC0.c)
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

struct _KTHREAD *__fastcall sub_140236F54(__int64 a1, int a2)
{
  int v4; // r14d
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *v12; // rdi
  unsigned int v13; // ecx
  char *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // r9d
  struct _KTHREAD *result; // rax
  __int64 v20; // rcx
  __int128 v21; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-89h] BYREF
  int v23; // [rsp+60h] [rbp-71h]
  int v24; // [rsp+64h] [rbp-6Dh]
  __int64 v25; // [rsp+68h] [rbp-69h]
  _BYTE v26[136]; // [rsp+70h] [rbp-61h] BYREF

  memset(v26, 0, 0x80uLL);
  v24 = 8;
  v22[1] = 0LL;
  v22[2] = 0LL;
  v25 = 0LL;
  v4 = 0;
  v22[0] = v26;
  v5 = 0;
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v7 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v8 = *(_QWORD *)(a1 + 448);
  v21 = 0LL;
  if ( !v8 )
    goto LABEL_2;
  while ( !*(_BYTE *)(v8 + 3) )
    v8 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)&v21 = v8;
  *((_QWORD *)&v21 + 1) = v8 + 8;
  while ( 1 )
  {
    if ( v4 )
    {
      sub_14037CCE8(a1 + 448, v5, v22);
      sub_14037C45C(v20, &v21, v22);
      v8 = v21;
      v4 = 0;
    }
    if ( !v8 )
      break;
    v9 = *((_QWORD *)&v21 + 1) + 8LL;
    v10 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
    *((_QWORD *)&v21 + 1) = v9;
    if ( v9 >= v8 + 8 * v10 )
    {
      v11 = *(_QWORD *)(v8 + 8);
      if ( v11 )
      {
        v8 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)&v21 = v11;
        *((_QWORD *)&v21 + 1) = v11 + 16;
      }
      v9 = (v11 + 16) & -(__int64)(v11 != 0);
    }
    if ( !v9 )
      break;
    if ( *(unsigned __int16 *)(v9 + 4) == a2 )
    {
      v5 = *(_DWORD *)v9;
      *(_BYTE *)(v9 + 6) = 0;
      sub_14037A368(a1, v22, &v21);
      v4 = 1;
LABEL_2:
      v8 = v21;
      continue;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v12 = KeGetCurrentThread();
  if ( v7 - qword_140C50630 < 0x8000000000LL )
    v13 = sub_140287F30(*((_QWORD *)v12 + 23));
  else
    v13 = -1;
  _disable();
  v14 = (char *)v12 + 1696;
  v15 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  v16 = 0LL;
  while ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) != v15
       || !v14[18]
       || (*(_DWORD *)v14 & 1) != 0
       || *((_DWORD *)v14 + 2) != v13 )
  {
    v16 = (unsigned int)(v16 + 1);
    v14 += 96;
    if ( (unsigned int)v16 >= 6 )
      goto LABEL_31;
  }
  v14[18] = 0;
  if ( v14 )
  {
    if ( *(__int64 *)v14 < 0 )
    {
      *v14 |= 2u;
      _enable();
      sub_14034EE30(v14, v16, v15);
      _disable();
    }
    v17 = *((_DWORD *)v14 + 22);
    *((_DWORD *)v14 + 22) = 0;
    v14[17] = 0;
    *(_QWORD *)v14 = 0LL;
    *((_BYTE *)v12 + 792) |= 1 << v14[16];
    _enable();
    if ( v17 )
      sub_14022B568((ULONG_PTR)v12, v7, v17);
    goto LABEL_27;
  }
LABEL_31:
  if ( (*((_DWORD *)v12 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, v7, v13, 0LL);
  _enable();
LABEL_27:
  result = KeGetCurrentThread();
  if ( (*((_WORD *)result + 243))++ == 0xFFFF )
  {
    result = (struct _KTHREAD *)((char *)result + 152);
    if ( *(struct _KTHREAD **)result != result )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
