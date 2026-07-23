/*
 * XREFs of sub_140358140 @ 0x140358140
 * Callers:
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x1402EEE50 (ExTryQueueWorkItem.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 */

__int64 __fastcall sub_140358140(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // edi

  v1 = (volatile signed __int32 *)&unk_140C23DA0;
  if ( a1 )
    v1 = (volatile signed __int32 *)(a1 + 120);
  result = sub_14035AD70((PVOID)(v1 + 16), 0);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v4 = 0LL;
    while ( 1 )
    {
      v5 = 1 << v4;
      _m_prefetchw((const void *)(v1 + 24));
      result = (unsigned int)_InterlockedOr(v1 + 24, 1 << v4);
      if ( ((unsigned int)result & (1 << v4)) == 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 4 )
        return result;
    }
    result = ExTryQueueWorkItem((__int64)&v1[8 * v4 + 28 + 2 * (unsigned int)v4], 0x30u);
    if ( !(_BYTE)result )
      _InterlockedAnd(v1 + 24, ~v5);
  }
  return result;
}
