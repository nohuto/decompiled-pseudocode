/*
 * XREFs of sub_1405A44FC @ 0x1405A44FC
 * Callers:
 *     sub_140980DD8 @ 0x140980DD8 (sub_140980DD8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405A44FC(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // r14d
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rsi
  ULONG_PTR v7; // rsi
  _QWORD *v8; // r12
  unsigned __int64 v9; // r14
  _QWORD *v10; // r15
  int v11; // eax
  struct _KTHREAD *v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rbx
  unsigned int v15; // edx
  int v16; // r9d
  int v18; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD **)(a1 + 8);
  v18 = 0;
  v3 = 0;
  if ( !v1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)CurrentThread + 23);
  *(_QWORD *)(a1 + 16) = 1LL;
  --*((_WORD *)CurrentThread + 243);
  v7 = v6 + 1232;
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  do
  {
    v8 = (_QWORD *)*v1;
    if ( v3 >= 0 )
    {
      v9 = 0LL;
      if ( v1[1] )
      {
        v10 = v1 + 2;
        do
        {
          v11 = sub_1407BDB60(a1, *v10 & 0xFFFFFFFFFFE00000uLL);
          v18 = v11;
          if ( v11 < 0 )
            break;
          ++v9;
          ++v10;
        }
        while ( v9 < v1[1] );
        v3 = v11;
      }
      else
      {
        v3 = v18;
      }
    }
    ExFreePoolWithTag(v1, 0);
    v1 = v8;
  }
  while ( v8 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  v12 = KeGetCurrentThread();
  if ( v7 - qword_140C50630 >= 0x8000000000LL )
    v13 = -1;
  else
    v13 = sub_140287F30(*((_QWORD *)v12 + 23));
  _disable();
  v14 = (__int64)v12 + 1696;
  v15 = 0;
  while ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v14 + 18)
       || (*(_DWORD *)v14 & 1) != 0
       || *(_DWORD *)(v14 + 8) != v13 )
  {
    ++v15;
    v14 += 96LL;
    if ( v15 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(v14 + 18) = 0;
  if ( !v14 )
  {
LABEL_23:
    if ( (*((_DWORD *)v12 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v12, v7, v13, 0LL);
    _enable();
    goto LABEL_31;
  }
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
    sub_14022B568((ULONG_PTR)v12, v7, v16);
LABEL_31:
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
    && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
  {
    KiCheckForKernelApcDelivery();
  }
  *(_QWORD *)(a1 + 16) = -2LL;
  return (unsigned int)v3;
}
