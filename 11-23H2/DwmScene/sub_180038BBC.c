/*
 * XREFs of sub_180038BBC @ 0x180038BBC
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 * Callees:
 *     sub_18002F71C @ 0x18002F71C (sub_18002F71C.c)
 *     sub_180037F54 @ 0x180037F54 (sub_180037F54.c)
 */

void **__fastcall sub_180038BBC(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void **result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 <= a2 && *(_QWORD *)(a1 + 24) != a2 )
  {
    if ( *(_QWORD *)(a1 + 24) >= a2 )
    {
      if ( a2 < 0x10 && *(_QWORD *)(a1 + 24) >= 0x10uLL )
        return (void **)sub_180037F54((void **)a1);
    }
    else
    {
      result = sub_18002F71C((void **)a1, a2 - v2);
      *(_QWORD *)(a1 + 16) = v2;
    }
  }
  return result;
}
