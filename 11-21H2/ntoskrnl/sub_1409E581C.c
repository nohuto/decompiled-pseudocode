/*
 * XREFs of sub_1409E581C @ 0x1409E581C
 * Callers:
 *     sub_1409E5988 @ 0x1409E5988 (sub_1409E5988.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1409E591C @ 0x1409E591C (sub_1409E591C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E581C(__int64 a1)
{
  unsigned int v1; // edi
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = 0;
  while ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 960)) <= *(_DWORD *)(a1 + 964) )
  {
    Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(72LL, 144LL, 1098347589LL);
    v4 = Pool2;
    if ( !Pool2 )
      break;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 944), Pool2 + 6);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 928), v4 + 7);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 960));
  v5 = ExAllocatePool2(64LL, 1024LL, 1836545093LL);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1000) = v5;
    *(_DWORD *)(a1 + 992) = 0x2000;
    _m_prefetchw((const void *)(a1 + 816));
    v6 = *(_DWORD *)(a1 + 816) | 0x2000u;
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x2000u) & 0x2000) == 0 )
      sub_1409E591C(v6, 0x2000LL);
    _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x80u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
