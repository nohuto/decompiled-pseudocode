/*
 * XREFs of sub_1406DF940 @ 0x1406DF940
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 *     sub_1402A3F70 @ 0x1402A3F70 (sub_1402A3F70.c)
 */

__int64 __fastcall sub_1406DF940(__int64 a1, signed __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    sub_1402A3A14(a1, 5, &v4);
  }
  else
  {
    result = sub_1402A3A60(a1, &v4);
    if ( (int)result < 0 )
      return result;
  }
  return sub_1402A3F70(v4, 5u, a2);
}
