/*
 * XREFs of sub_14074D800 @ 0x14074D800
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D3C34 @ 0x1402D3C34 (sub_1402D3C34.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14074D9EC @ 0x14074D9EC (sub_14074D9EC.c)
 *     sub_14074E73C @ 0x14074E73C (sub_14074E73C.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 */

char __fastcall sub_14074D800(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  void *v7; // rcx
  int v8; // ecx
  void *v9; // rcx
  void *v10; // rcx
  ULONG_PTR v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    sub_14074E73C();
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    ExAcquirePushLockExclusiveEx(v3 - 16, 0LL);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    switch ( v4 )
    {
      case 2:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 4:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        goto LABEL_7;
      case 6:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
LABEL_7:
        if ( v5 )
        {
          *(_QWORD *)(v5 + 424) = 0LL;
          *(_QWORD *)(v5 + 432) = 0LL;
        }
        break;
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 - 16);
    sub_1402AFC00(v6 - 16);
    sub_1407A5A54(*(_QWORD *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v7 = *(void **)(a1 + 32);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    sub_1402D3C34(*(KSPIN_LOCK **)(a1 + 48));
  }
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 6) == 4 && (v8 & 0x400) == 0 && *(_QWORD *)(a1 + 80) )
    SeDeleteClientSecurity(a1 + 64);
  v9 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v9 = *(void **)(a1 + 24);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x63706C41u);
  v10 = *(void **)(a1 + 368);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v11 )
    sub_1407A5A54(v11);
  sub_14074D9EC(a1);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
