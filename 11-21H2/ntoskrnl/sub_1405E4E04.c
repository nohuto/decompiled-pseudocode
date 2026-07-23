/*
 * XREFs of sub_1405E4E04 @ 0x1405E4E04
 * Callers:
 *     sub_1405E4EC4 @ 0x1405E4EC4 (sub_1405E4EC4.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_1405E4A4C @ 0x1405E4A4C (sub_1405E4A4C.c)
 */

_SLIST_ENTRY *__fastcall sub_1405E4E04(volatile signed __int32 *SpinLock, unsigned __int16 a2)
{
  __int64 v2; // rsi
  unsigned int i; // ebx
  PSLIST_ENTRY v6; // rax
  KSPIN_LOCK v7; // rdx
  unsigned int v8; // ecx

  v2 = a2;
  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&SpinLock[4 * i + 52]);
    if ( v6 )
    {
      _InterlockedDecrement(SpinLock + 49);
      return v6 - 1;
    }
  }
  v7 = sub_1405E4A4C((KSPIN_LOCK *)SpinLock, (8 * v2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v7 )
  {
    v8 = ((((8 * (_DWORD)v2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v8 > 0x1F )
      LOWORD(v8) = 31;
    *(_WORD *)(v7 + 8) = ((_WORD)v8 << 11) | *(_WORD *)(v7 + 8) & 0x7FF;
  }
  return (_SLIST_ENTRY *)v7;
}
