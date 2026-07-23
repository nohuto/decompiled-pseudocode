/*
 * XREFs of sub_1406F6A30 @ 0x1406F6A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F60E8 @ 0x1406F60E8 (sub_1406F60E8.c)
 *     sub_1406F6C24 @ 0x1406F6C24 (sub_1406F6C24.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_1406F6A30(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax
  __int64 v10; // r9
  ULONG_PTR v11; // rcx
  void *v12; // rcx
  volatile signed __int64 *v13; // rdi
  _OWORD v15[3]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  memset(v15, 0, sizeof(v15));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( v3 )
  {
    sub_1407A6A34(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v3 + 52) - 1;
    *(_DWORD *)(v3 + 52) = v8;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v9 = *(_DWORD *)(v3 + 48);
      if ( (v9 & 1) != 0 )
      {
        *(_QWORD *)(v3 + 80) = 0LL;
        v1 = *(_QWORD *)(v3 + 72);
        if ( v1 )
        {
          sub_1406F60E8(*(_QWORD *)(v3 + 72), v5, v6, v7);
        }
        else if ( !v8 )
        {
          *(_DWORD *)(v3 + 48) = v9 & 0xFFFFFFFE;
        }
      }
    }
    sub_1407B0F40(v3);
    sub_1406F6C24(*(_QWORD *)(a1 + 24), a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      sub_14026D048(*(_QWORD *)(a1 + 40), 1);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 32);
      if ( v4 != v11 )
        sub_14030D5C0(v11, 0LL, (__int64)v15, v10);
      v12 = *(void **)(a1 + 56);
      if ( v12 )
        MmUnsecureVirtualMemory(v12);
      sub_1406F8D30(*(_QWORD *)(a1 + 32));
      if ( v4 != *(_QWORD *)(a1 + 32) )
        sub_1402D0930((__int64)v15, 0LL);
    }
    if ( v1 )
      sub_1407A5A54(v1);
    sub_1407A5A54(*(_QWORD *)(a1 + 16));
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 2048LL, 0LL);
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v13 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 32) + 2048LL);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    sub_1402AFC00((ULONG_PTR)v13);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
