/*
 * XREFs of sub_14095BFCC @ 0x14095BFCC
 * Callers:
 *     sub_1408264C0 @ 0x1408264C0 (sub_1408264C0.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_14095DAF0 @ 0x14095DAF0 (sub_14095DAF0.c)
 * Callees:
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_14095BFCC(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  PVOID v5; // rax
  __int64 v6; // r9
  unsigned __int16 v7; // dx
  unsigned __int64 v8; // rax
  int v10; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  v10 = 0;
  v11 = 0;
  *a2 = 0LL;
  if ( !*(_QWORD *)(a1 + 512) )
  {
    *(_WORD *)(a1 + 504) = 0;
    *(_WORD *)(a1 + 506) = 520;
    v5 = sub_1406BE560(0x208uLL);
    *(_QWORD *)(a1 + 512) = v5;
    if ( !v5 )
      return (unsigned int)-1073741670;
    v4 = sub_14077DA5C(
           *(__int64 *)&qword_140D00AC0,
           *(_QWORD *)(a1 + 24),
           7,
           *(_QWORD *)(a1 + 72),
           0LL,
           (__int64)qword_14001CDE8,
           (__int64)&v10,
           (__int64)v5,
           *(unsigned __int16 *)(a1 + 506),
           (__int64)&v11,
           0);
    if ( v4 < 0
      || v10 != 18
      || v11 <= 2
      || (v6 = *(_QWORD *)(a1 + 512), *(_WORD *)(v6 + 2 * ((unsigned __int64)v11 >> 1) - 2)) )
    {
      v4 = 0;
      **(_WORD **)(a1 + 512) = 0;
    }
    else
    {
      v7 = v11 - 2;
      *(_WORD *)(a1 + 504) = v11 - 2;
      if ( v7 > 2u )
      {
        v8 = (unsigned __int64)v7 >> 1;
        if ( *(_WORD *)(v6 + 2 * v8 - 2) == 92 )
        {
          *(_WORD *)(v6 + 2 * v8 - 2) = 0;
          *(_WORD *)(a1 + 504) -= 2;
        }
      }
    }
  }
  if ( **(_WORD **)(a1 + 512) )
    *a2 = a1 + 504;
  else
    return (unsigned int)-1073741275;
  return (unsigned int)v4;
}
