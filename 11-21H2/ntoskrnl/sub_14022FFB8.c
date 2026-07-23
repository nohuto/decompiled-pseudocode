/*
 * XREFs of sub_14022FFB8 @ 0x14022FFB8
 * Callers:
 *     sub_14022FDA0 @ 0x14022FDA0 (sub_14022FDA0.c)
 * Callees:
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 */

_QWORD *__fastcall sub_14022FFB8(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // edi
  __int64 v6; // rsi
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *p_Next; // rbx

  v3 = *a2;
  v6 = 16LL * a3;
  while ( 1 )
  {
    v7 = (_SLIST_HEADER *)(v6 + *(_QWORD *)(a1 + 8LL * v3 + 6616));
    if ( LOWORD(v7->Alignment) )
    {
      v8 = ExpInterlockedPopEntrySList(v7);
      p_Next = &v8->Next;
      if ( v8 )
        break;
    }
    if ( v3 == a2[1] )
      return 0LL;
    v3 = a2[1];
  }
  v8[1].Next = 0LL;
  if ( v3 )
  {
    sub_1402E89B0(&v8[1], v9, v10);
  }
  else if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
  {
    sub_1405AD468(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v8[0x22000000000LL] >> 4));
  }
  *p_Next = 0LL;
  return p_Next;
}
