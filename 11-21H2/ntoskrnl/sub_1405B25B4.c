/*
 * XREFs of sub_1405B25B4 @ 0x1405B25B4
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 * Callees:
 *     sub_1405B2670 @ 0x1405B2670 (sub_1405B2670.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall sub_1405B25B4(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ebx
  void **v3; // rdi
  void *v4; // rbp
  _QWORD *v5; // rsi
  void *v6; // rcx
  void *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = 0;
  if ( word_140D05000 )
  {
    v3 = (void **)(*(_QWORD *)(a1 + 16) + 22944LL);
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = *(v3 - 4);
        *v3 = 0LL;
        if ( v5 )
        {
          *(v3 - 4) = 0LL;
          v6 = (void *)v5[38];
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          v7 = (void *)v5[18];
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
          ExFreePoolWithTag(v5, 0);
        }
        sub_1405B2670(v4);
      }
      result = (unsigned __int16)word_140D05000;
      ++v2;
      v3 += 3064;
    }
    while ( v2 < (unsigned __int16)word_140D05000 );
  }
  return result;
}
