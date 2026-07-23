/*
 * XREFs of sub_14024E0F0 @ 0x14024E0F0
 * Callers:
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     sub_14024E2A0 @ 0x14024E2A0 (sub_14024E2A0.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406355B0 @ 0x1406355B0 (sub_1406355B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14024E0F0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v6; // ecx
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r9d

  KeRemoveQueueDpcEx(a1 + 1192, 0LL);
  if ( *(_DWORD *)(a1 + 1168) && (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    v4 = a1 + 1144;
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    sub_1406355B0(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1144);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)(v4 - qword_140C50630) >= 0x8000000000LL )
      v6 = -1;
    else
      v6 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v7 = (char *)CurrentThread + 1696;
    v8 = v4 & 0x7FFFFFFFFFFFFFFCLL;
    v9 = 0LL;
    while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != v8
         || !v7[18]
         || (*(_DWORD *)v7 & 1) != 0
         || *((_DWORD *)v7 + 2) != v6 )
    {
      v9 = (unsigned int)(v9 + 1);
      v7 += 96;
      if ( (unsigned int)v9 >= 6 )
        goto LABEL_25;
    }
    v7[18] = 0;
    if ( v7 )
    {
      if ( *(__int64 *)v7 < 0 )
      {
        *v7 |= 2u;
        _enable();
        sub_14034EE30(v7, v9, v8);
        _disable();
      }
      v10 = *((_DWORD *)v7 + 22);
      *((_DWORD *)v7 + 22) = 0;
      v7[17] = 0;
      *(_QWORD *)v7 = 0LL;
      *((_BYTE *)CurrentThread + 792) |= 1 << v7[16];
      _enable();
      if ( v10 )
        sub_14022B568((ULONG_PTR)CurrentThread, a1 + 1144, v10);
      goto LABEL_28;
    }
LABEL_25:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 1144, v6, 0LL);
    _enable();
LABEL_28:
    _InterlockedExchange((volatile __int32 *)(a1 + 1168), 0);
  }
  v2 = *(void **)(a1 + 1160);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 1152);
  if ( !v3 || (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    sub_14024E2A0(a1);
  else
    ExFreePoolWithTag(v3, 0);
}
