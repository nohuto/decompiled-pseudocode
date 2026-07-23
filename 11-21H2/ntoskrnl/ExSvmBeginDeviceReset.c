/*
 * XREFs of ExSvmBeginDeviceReset @ 0x140640500
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

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  struct _KTHREAD *v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // ecx
  int v17; // r9d
  bool v18; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  v7 = *((unsigned __int8 *)v5 + 792);
  v8 = -1;
  if ( *((_BYTE *)v5 + 792) || (v7 = sub_14029F6A8((__int64)&qword_140C11530, (__int64)v5)) != 0 )
  {
    _BitScanForward((unsigned int *)&v9, v7);
    *((_BYTE *)v5 + 792) = v7 & ~(1 << v9);
    _enable();
    v6 = (__int64)v5 + 96 * v9 + 1696;
    if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
      v10 = -1;
    else
      v10 = sub_140287F30(*((_QWORD *)v5 + 23));
    *(_DWORD *)(v6 + 8) = v10;
    *(_QWORD *)v6 = (unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11530, 0LL) )
    sub_14029F120(&qword_140C11530, v6, (__int64)&qword_140C11530);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v11 = qword_140C11540;
  if ( (__int64 *)qword_140C11540 == &qword_140C11540 )
  {
    v13 = -1073741810;
  }
  else
  {
    do
    {
      v12 = v11;
      if ( !*(_BYTE *)(v11 + 16) && *(_QWORD *)(v11 + 24) == a1 )
        break;
      v11 = *(_QWORD *)v11;
    }
    while ( (__int64 *)v11 != &qword_140C11540 );
    v13 = sub_14042A5E0(*(_QWORD *)(v12 + 184), a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C11530);
  v14 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 < 0x8000000000LL )
    v8 = sub_140287F30(*((_QWORD *)v14 + 23));
  _disable();
  v15 = (__int64)v14 + 1696;
  v16 = 0;
  while ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v15 + 18)
       || (*(_DWORD *)v15 & 1) != 0
       || *(_DWORD *)(v15 + 8) != v8 )
  {
    ++v16;
    v15 += 96LL;
    if ( v16 >= 6 )
      goto LABEL_27;
  }
  *(_BYTE *)(v15 + 18) = 0;
  if ( !v15 )
  {
LABEL_27:
    if ( (*((_DWORD *)v14 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&qword_140C11530, v8, 0LL);
    _enable();
    goto LABEL_35;
  }
  if ( *(__int64 *)v15 < 0 )
  {
    *(_BYTE *)v15 |= 2u;
    _enable();
    sub_14034EE30(v15);
    _disable();
  }
  v17 = *(_DWORD *)(v15 + 88);
  *(_DWORD *)(v15 + 88) = 0;
  *(_BYTE *)(v15 + 17) = 0;
  *(_QWORD *)v15 = 0LL;
  *((_BYTE *)v14 + 792) |= 1 << *(_BYTE *)(v15 + 16);
  _enable();
  if ( v17 )
    sub_14022B568((ULONG_PTR)v14, (__int64)&qword_140C11530, v17);
LABEL_35:
  v18 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v18 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return v13;
}
