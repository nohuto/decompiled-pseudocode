/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x140640800
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  struct _KTHREAD *v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // ecx
  int v16; // r9d
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  v5 = *((unsigned __int8 *)v3 + 792);
  v6 = -1;
  if ( *((_BYTE *)v3 + 792) || (v5 = sub_14029F6A8((__int64)&qword_140C11530, (__int64)v3)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, v5);
    *((_BYTE *)v3 + 792) = v5 & ~(1 << v7);
    _enable();
    v4 = (__int64)v3 + 96 * v7 + 1696;
    if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
      v8 = -1;
    else
      v8 = sub_140287F30(*((_QWORD *)v3 + 23));
    *(_DWORD *)(v4 + 8) = v8;
    *(_QWORD *)v4 = (unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11530, 0LL) )
    sub_14029F120(&qword_140C11530, v4, (__int64)&qword_140C11530);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v10 = qword_140C11540;
  if ( (__int64 *)qword_140C11540 == &qword_140C11540 )
  {
    v12 = -1073741810;
  }
  else
  {
    do
    {
      v11 = v10;
      if ( !*(_BYTE *)(v10 + 16) && *(_QWORD *)(v10 + 24) == a1 )
        break;
      v10 = *(_QWORD *)v10;
    }
    while ( (__int64 *)v10 != &qword_140C11540 );
    v12 = sub_14042A5E0(*(_QWORD *)(v11 + 184), &qword_140C11540);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C11530);
  v13 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 < 0x8000000000LL )
    v6 = sub_140287F30(*((_QWORD *)v13 + 23));
  _disable();
  v14 = (__int64)v13 + 1696;
  v15 = 0;
  while ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v14 + 18)
       || (*(_DWORD *)v14 & 1) != 0
       || *(_DWORD *)(v14 + 8) != v6 )
  {
    ++v15;
    v14 += 96LL;
    if ( v15 >= 6 )
      goto LABEL_27;
  }
  *(_BYTE *)(v14 + 18) = 0;
  if ( !v14 )
  {
LABEL_27:
    if ( (*((_DWORD *)v13 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&qword_140C11530, v6, 0LL);
    _enable();
    goto LABEL_35;
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
  *((_BYTE *)v13 + 792) |= 1 << *(_BYTE *)(v14 + 16);
  _enable();
  if ( v16 )
    sub_14022B568((ULONG_PTR)v13, (__int64)&qword_140C11530, v16);
LABEL_35:
  v17 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v17 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return v12;
}
