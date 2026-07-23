/*
 * XREFs of sub_14027FE9C @ 0x14027FE9C
 * Callers:
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_140273EE0 @ 0x140273EE0 (sub_140273EE0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_14027FE9C(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 v5; // si
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v5 = sub_1402F2700(a1);
    *a2 = v5;
  }
  else
  {
    v7 = 0;
    v5 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v7);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  sub_140274508(a1, 1LL, a3);
  sub_140273EE0(a1, v5);
  return a1;
}
