/*
 * XREFs of sub_1C004DB9C @ 0x1C004DB9C
 * Callers:
 *     sub_1C004F8E0 @ 0x1C004F8E0 (sub_1C004F8E0.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 */

__int64 __fastcall sub_1C004DB9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  unsigned int v8; // ebx

  v8 = -1073741637;
  if ( sub_1C0004890(a1, 8) )
  {
    return (unsigned int)sub_1C0018524(*(_QWORD *)(a1 + 24) + 336LL);
  }
  else if ( a7 )
  {
    *a7 = 0LL;
  }
  return v8;
}
