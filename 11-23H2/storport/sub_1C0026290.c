/*
 * XREFs of sub_1C0026290 @ 0x1C0026290
 * Callers:
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 */

__int64 __fastcall sub_1C0026290(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( sub_1C0004890(a1, 7) )
    return (unsigned int)sub_1C0018524(*(_QWORD *)(a1 + 24) + 336LL);
  return v2;
}
