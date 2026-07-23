/*
 * XREFs of sub_1405C6550 @ 0x1405C6550
 * Callers:
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 * Callees:
 *     sub_14035FAE8 @ 0x14035FAE8 (sub_14035FAE8.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405C6550(__int64 a1, signed int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 Pool2; // rax
  _SLIST_ENTRY *v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // rbx

  v3 = a2;
  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), a2) > *(_DWORD *)(a1 + 88) )
  {
    result = 3221225773LL;
LABEL_5:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), -(int)v3);
    return result;
  }
  v7 = ((a2 - 32) / a3) & 0xFFFFFFF0;
  Pool2 = ExAllocatePool2(*(_QWORD *)(a1 + 72), a2, *(unsigned int *)(a1 + 68));
  v9 = (_SLIST_ENTRY *)Pool2;
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_5;
  }
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 28) = 0;
  *(_DWORD *)(Pool2 + 16) = a3;
  v10 = Pool2 + v3;
  *(_DWORD *)(Pool2 + 24) = v3;
  v11 = Pool2 + 32;
  *(_DWORD *)(Pool2 + 20) = v7;
  while ( v11 + v7 <= v10 )
  {
    sub_14035FAE8(a1, v11, v7, 0, 0);
    v11 += (unsigned int)v7;
  }
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 48), v9);
  return 0LL;
}
