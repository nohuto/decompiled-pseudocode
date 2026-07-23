/*
 * XREFs of sub_140641354 @ 0x140641354
 * Callers:
 *     sub_140251BDC @ 0x140251BDC (sub_140251BDC.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140641354(_DWORD *P, __int64 a2)
{
  unsigned int v2; // r13d
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  _QWORD *v15; // rax
  PVOID *v16; // rdx
  struct _KTHREAD *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // ecx
  int v20; // r9d
  bool v21; // zf
  __int64 v23; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+40h] [rbp-48h]

  v2 = 0;
  v23 = 0LL;
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v6 = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  v8 = *((unsigned __int8 *)v6 + 792);
  v9 = -1;
  if ( *((_BYTE *)v6 + 792) || (v8 = sub_14029F6A8((__int64)&qword_140C11530, (__int64)v6)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, v8);
    *((_BYTE *)v6 + 792) = v8 & ~(1 << v10);
    _enable();
    v7 = (__int64)v6 + 96 * v10 + 1696;
    if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
      v11 = -1;
    else
      v11 = sub_140287F30(*((_QWORD *)v6 + 23));
    *(_DWORD *)(v7 + 8) = v11;
    *(_QWORD *)v7 = (unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11530, 0LL) )
    sub_14029F120(&qword_140C11530, v7, (__int64)&qword_140C11530);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v12 = P[8] - 1;
  v13 = P[9] - 1;
  P[8] = v12;
  P[9] = v13;
  if ( !v13 || !v12 )
  {
    v14 = v23;
    if ( !v12 )
      v14 = 1;
    LODWORD(v23) = v14;
    if ( !v13 )
      LODWORD(v23) = v14 | 6;
    v2 = sub_14042A5E0(*((_QWORD *)P + 6), &v23);
    if ( !P[9] )
    {
      v2 = sub_14042A5E0(a2, *((_QWORD *)P + 23));
      _InterlockedAdd(&dword_140D01470, 0xFFFFFFFF);
      *((_BYTE *)P + 16) = 1;
    }
    if ( !P[8] )
    {
      v15 = *(_QWORD **)P;
      if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v16 = (PVOID *)*((_QWORD *)P + 1), *v16 != P) )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = v16;
      sub_14042A5E0(*((_QWORD *)P + 6), v16);
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C11530);
  v17 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 < 0x8000000000LL )
    v9 = sub_140287F30(*((_QWORD *)v17 + 23));
  _disable();
  v18 = (__int64)v17 + 1696;
  v19 = 0;
  while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v18 + 18)
       || (*(_DWORD *)v18 & 1) != 0
       || *(_DWORD *)(v18 + 8) != v9 )
  {
    ++v19;
    v18 += 96LL;
    if ( v19 >= 6 )
      goto LABEL_34;
  }
  *(_BYTE *)(v18 + 18) = 0;
  if ( !v18 )
  {
LABEL_34:
    if ( (*((_DWORD *)v17 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&qword_140C11530, v9, 0LL);
    _enable();
    goto LABEL_42;
  }
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
    sub_14022B568((ULONG_PTR)v17, (__int64)&qword_140C11530, v20);
LABEL_42:
  v21 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v21 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return v2;
}
