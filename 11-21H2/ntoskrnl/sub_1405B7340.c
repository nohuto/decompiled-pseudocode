/*
 * XREFs of sub_1405B7340 @ 0x1405B7340
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14025FF00 @ 0x14025FF00 (sub_14025FF00.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059CE7C @ 0x14059CE7C (sub_14059CE7C.c)
 */

void __fastcall sub_1405B7340(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // r14
  struct _KTHREAD *v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rbx
  unsigned int v11; // edx
  int v12; // r9d
  bool v13; // zf
  _QWORD v14[12]; // [rsp+38h] [rbp-29h] BYREF

  v2 = sub_14025FF00(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 16736);
  memset(v14, 0, 0x58uLL);
  v14[3] = a1;
  v14[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 204);
  v14[5] = 0x10000LL;
  BYTE4(v14[9]) = v6 & 0xF;
  v14[8] = &v14[7];
  v14[7] = &v14[7];
  LOWORD(v14[6]) = 0;
  BYTE2(v14[6]) = 6;
  HIDWORD(v14[6]) = 0;
  --*((_WORD *)CurrentThread + 243);
  v7 = a1 + 1152;
  ExAcquirePushLockExclusiveEx(a1 + 1152, 0LL);
  sub_14059CE7C((__int64)v14, 1, 0x11u);
  KeWaitForSingleObject(&v14[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1152), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1152);
  v8 = KeGetCurrentThread();
  if ( (unsigned __int64)(v7 - qword_140C50630) >= 0x8000000000LL )
    v9 = -1;
  else
    v9 = sub_140287F30(*((_QWORD *)v8 + 23));
  _disable();
  v10 = (__int64)v8 + 1696;
  v11 = 0;
  while ( (*(_QWORD *)v10 & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v10 + 18)
       || (*(_DWORD *)v10 & 1) != 0
       || *(_DWORD *)(v10 + 8) != v9 )
  {
    ++v11;
    v10 += 96LL;
    if ( v11 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(v10 + 18) = 0;
  if ( !v10 )
  {
LABEL_12:
    if ( (*((_DWORD *)v8 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, a1 + 1152, v9, 0LL);
    _enable();
    goto LABEL_20;
  }
  if ( *(__int64 *)v10 < 0 )
  {
    *(_BYTE *)v10 |= 2u;
    _enable();
    sub_14034EE30(v10);
    _disable();
  }
  v12 = *(_DWORD *)(v10 + 88);
  *(_DWORD *)(v10 + 88) = 0;
  *(_BYTE *)(v10 + 17) = 0;
  *(_QWORD *)v10 = 0LL;
  *((_BYTE *)v8 + 792) |= 1 << *(_BYTE *)(v10 + 16);
  _enable();
  if ( v12 )
    sub_14022B568((ULONG_PTR)v8, a1 + 1152, v12);
LABEL_20:
  v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  _InterlockedExchange((volatile __int32 *)(a1 + 1144), 0);
  sub_1403606C4(*(_QWORD *)(a1 + 176));
}
