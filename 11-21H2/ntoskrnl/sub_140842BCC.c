/*
 * XREFs of sub_140842BCC @ 0x140842BCC
 * Callers:
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140842BCC(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)sub_140791084(a1, v2, (__int64)&v5, 4u) )
      return v5;
    sub_1406E0C3C(1LL, (__int64)"SdbpReadStringRef");
  }
  else
  {
    sub_14079499C(a1, v2);
    sub_1406E0C3C(1LL, (__int64)"SdbpReadStringRef");
  }
  return 0LL;
}
