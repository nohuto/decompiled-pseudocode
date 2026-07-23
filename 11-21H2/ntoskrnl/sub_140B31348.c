/*
 * XREFs of sub_140B31348 @ 0x140B31348
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_140643104 @ 0x140643104 (sub_140643104.c)
 *     sub_1406528E8 @ 0x1406528E8 (sub_1406528E8.c)
 *     sub_140A087A4 @ 0x140A087A4 (sub_140A087A4.c)
 */

__int64 __fastcall sub_140B31348(__int64 a1)
{
  __int64 result; // rax

  qword_140C10C80 = 0LL;
  result = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(result + 3704) )
  {
    result = sub_1406528E8();
    if ( (int)result >= 0 )
    {
      sub_140643104();
      return sub_140A087A4();
    }
  }
  return result;
}
