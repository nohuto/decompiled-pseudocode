/*
 * XREFs of sub_140281620 @ 0x140281620
 * Callers:
 *     sub_140584258 @ 0x140584258 (sub_140584258.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 *     sub_14096D7DC @ 0x14096D7DC (sub_14096D7DC.c)
 * Callees:
 *     sub_140202010 @ 0x140202010 (sub_140202010.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140281620(ULONG_PTR BugCheckParameter3, int *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbp
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  bool v10; // zf
  int v12; // eax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  v5 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx(v5 + 1224, 0LL);
  *((_BYTE *)CurrentThread + 1384) |= 2u;
  if ( (*(_DWORD *)(v5 + 1124) & 0x20) != 0 )
  {
    sub_14030EA00(CurrentThread, v5);
    *a2 = -1073741558;
    return 0LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  v7 = sub_1403126F0(v6);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x1Au, 0x15000uLL, v6, BugCheckParameter3, 0LL);
  if ( !_InterlockedIncrement((volatile signed __int32 *)(v7 + 36)) )
    __fastfail(0xEu);
  --*((_WORD *)CurrentThread + 243);
  sub_14030EA00(CurrentThread, v5);
  v9 = v6 >> 12;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  *((_BYTE *)CurrentThread + 1384) |= 0x80u;
  v10 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v10 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v8 + 48) & 4) != 0 )
  {
    sub_140202010(v8);
    sub_14032E700((PVOID)v8);
    v12 = -1073741558;
    if ( (*(_DWORD *)(v5 + 1124) & 0x20) == 0 )
      v12 = -1073741664;
    *a2 = v12;
    return 0LL;
  }
  if ( v9 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
    || v9 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
  {
    sub_14032E700((PVOID)v8);
    *a2 = -1073741664;
    return 0LL;
  }
  return v8;
}
