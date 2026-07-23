/*
 * XREFs of sub_1407A2680 @ 0x1407A2680
 * Callers:
 *     sub_14066B04C @ 0x14066B04C (sub_14066B04C.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_14030F6D0 @ 0x14030F6D0 (sub_14030F6D0.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 *     sub_140883EDC @ 0x140883EDC (sub_140883EDC.c)
 */

__int64 __fastcall sub_1407A2680(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v12; // rbx
  signed __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r10d
  volatile signed __int64 *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  signed __int64 BugCheckParameter4; // rax
  __int64 result; // rax
  bool v23; // zf
  __int64 *v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) != 0LL )
  {
    if ( a1 == -1LL )
    {
      v23 = dword_140D05010 == 0;
      a7[1] = 0x1FFFFF;
      *a7 = 0;
      *a8 = 0LL;
      if ( !v23 )
        sub_1405C5EC8((__int64)a2 - 48, 1, 1u, a5);
      sub_14030F6D0((volatile signed __int64 *)a2 - 6);
      result = 0LL;
      *a6 = a2;
      return result;
    }
    if ( a1 == -2LL )
    {
      v23 = dword_140D05010 == 0;
      a7[1] = 0x1FFFFF;
      *a7 = 0;
      *a8 = 0LL;
      if ( !v23 )
        sub_1405C5EC8((__int64)CurrentThread - 48, 1, 1u, a5);
      sub_14030F6D0((volatile signed __int64 *)CurrentThread - 6);
      result = 0LL;
      *a6 = CurrentThread;
      return result;
    }
    if ( a4 )
      return 3221225480LL;
    a3 = qword_140C24F88;
    v8 = a1 ^ 0xFFFFFFFF80000000uLL;
  }
  --*((_WORD *)CurrentThread + 242);
  if ( (v8 & 0x3FC) == 0 || (v12 = (signed __int64 *)sub_140733340((unsigned int *)a3, v8)) == 0LL )
  {
LABEL_28:
    sub_1402AC800((__int64)CurrentThread);
    return 3221225480LL;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v12);
      v13 = *v12;
      if ( (*v12 & 1) != 0 )
        break;
      if ( !v13 )
        goto LABEL_28;
      sub_1407ED9FC(a3, v12, v13);
    }
  }
  while ( v13 != _InterlockedCompareExchange64(v12, v13 - 1, v13) );
  v14 = *v12;
  v15 = *((_DWORD *)v12 + 2);
  v16 = v15 & 0x1FFFFFF;
  v17 = (volatile signed __int64 *)((*v12 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( *(_DWORD *)(a3 + 4) && (v24 = (__int64 *)sub_140883EDC(a3), v14 = *v12, v15 = *((_DWORD *)v12 + 2), v24) )
    v18 = *v24;
  else
    v18 = 0LL;
  v19 = (v14 >> 17) & 7;
  *a8 = v18;
  v20 = v19 | 8;
  if ( (v15 & 0x2000000) == 0 )
    v20 = v19;
  *a7 = v20;
  a7[1] = v16;
  BugCheckParameter4 = _InterlockedIncrement64(v17);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v17 + 6), 0x10uLL, BugCheckParameter4);
  _InterlockedExchangeAdd64(v12, 1uLL);
  _InterlockedOr(v25, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
  sub_1402AC800((__int64)CurrentThread);
  if ( dword_140D05010 )
    sub_1405C5EC8((__int64)v17, 1, 1u, a5);
  *a6 = (struct _KTHREAD *)(v17 + 6);
  return 0LL;
}
