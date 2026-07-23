/*
 * XREFs of sub_1409E92F8 @ 0x1409E92F8
 * Callers:
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406EDE54 @ 0x1406EDE54 (sub_1406EDE54.c)
 *     sub_1406EDEC8 @ 0x1406EDEC8 (sub_1406EDEC8.c)
 *     sub_1406F1DF8 @ 0x1406F1DF8 (sub_1406F1DF8.c)
 *     sub_1409E91DC @ 0x1409E91DC (sub_1409E91DC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E92F8(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rsi
  unsigned int v5; // eax
  int v6; // ebp
  __int128 *v7; // rdi
  __int64 Pool2; // rax

  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 824));
    v2 = *(_DWORD *)(a1 + 824);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 688);
      ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
      v5 = sub_1406EDE54(a1);
      v6 = v5;
      if ( v5 )
      {
        Pool2 = ExAllocatePool2(64LL, v5, 1651995717LL);
        v7 = (__int128 *)Pool2;
        if ( Pool2 )
        {
          sub_1406EDEC8(a1, Pool2, v6);
          sub_1406F1DF8(a1, (__int64)v7, v6, 0LL, 0);
        }
      }
      else
      {
        v7 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v4);
      sub_1402AFC00((ULONG_PTR)v4);
      if ( v7 )
      {
        sub_1409E91DC(v7);
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
}
