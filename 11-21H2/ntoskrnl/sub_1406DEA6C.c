/*
 * XREFs of sub_1406DEA6C @ 0x1406DEA6C
 * Callers:
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068D0DC @ 0x14068D0DC (sub_14068D0DC.c)
 *     sub_14068E154 @ 0x14068E154 (sub_14068E154.c)
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 *     sub_1409221F4 @ 0x1409221F4 (sub_1409221F4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

_UNKNOWN **__fastcall sub_1406DEA6C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // edi
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = 1023;
    if ( a4 < 0x400 )
      v5 = a4;
    while ( a3 <= v5 )
    {
      v8 = *(_QWORD *)(a2 + 8LL * a3);
      if ( v8 )
      {
        result = (_UNKNOWN **)sub_14042A5E0(v8, 12288LL);
        *(_QWORD *)(a2 + 8LL * a3) = 0LL;
      }
      ++a3;
    }
  }
  return result;
}
