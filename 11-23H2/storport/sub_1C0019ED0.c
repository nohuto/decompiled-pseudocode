/*
 * XREFs of sub_1C0019ED0 @ 0x1C0019ED0
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 *     sub_1C00203B0 @ 0x1C00203B0 (sub_1C00203B0.c)
 *     sub_1C0034B20 @ 0x1C0034B20 (sub_1C0034B20.c)
 *     sub_1C00382A0 @ 0x1C00382A0 (sub_1C00382A0.c)
 *     sub_1C0039708 @ 0x1C0039708 (sub_1C0039708.c)
 *     sub_1C003AC60 @ 0x1C003AC60 (sub_1C003AC60.c)
 *     sub_1C003D540 @ 0x1C003D540 (sub_1C003D540.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 * Callees:
 *     sub_1C0019FDC @ 0x1C0019FDC (sub_1C0019FDC.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0019ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bp
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *j; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int128 i; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]

  v2 = 0LL;
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 904) )
  {
    do
    {
      v5 = (void *)(*(_QWORD *)(a1 + 896) + 320 * v2);
      v12 = 0LL;
      v13 = 0;
      for ( i = 0LL;
            ;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v7 + 648))(
              *(_QWORD *)(v7 + 640),
              v6 - 120,
              &i,
              0LL) )
      {
        v6 = sub_1C0019FDC(v5);
        if ( !v6 )
          break;
        v7 = *(_QWORD *)(*(_QWORD *)(v6 - 120 + 184) + 32LL);
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 904) );
  }
  if ( !v3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v8 = (_QWORD *)(a1 + 144);
  for ( j = *(_QWORD **)(a1 + 144); j != v8; j = (_QWORD *)*j )
  {
    LOBYTE(a2) = 1;
    sub_1C001A194(j - 7, a2);
  }
  if ( !v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
