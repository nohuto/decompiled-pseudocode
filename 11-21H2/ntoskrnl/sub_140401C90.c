/*
 * XREFs of sub_140401C90 @ 0x140401C90
 * Callers:
 *     sub_140A375DC @ 0x140A375DC (sub_140A375DC.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_1403FF880 @ 0x1403FF880 (sub_1403FF880.c)
 *     sub_1404009BC @ 0x1404009BC (sub_1404009BC.c)
 *     sub_1404019F4 @ 0x1404019F4 (sub_1404019F4.c)
 *     sub_140401B84 @ 0x140401B84 (sub_140401B84.c)
 *     sub_140656B70 @ 0x140656B70 (sub_140656B70.c)
 *     sub_140656BA8 @ 0x140656BA8 (sub_140656BA8.c)
 */

__int64 __fastcall sub_140401C90(
        __int64 a1,
        const void *a2,
        size_t a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        unsigned __int64 a8,
        int a9)
{
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rax
  _WORD *v15; // rsi
  __int64 v16; // r15

  v11 = (unsigned int)sub_1403FF880(a1);
  if ( a5 <= v11 )
  {
    if ( a6 == 1 )
    {
      return 209715723;
    }
    else
    {
      if ( (unsigned int)sub_140401B84(a1) <= v11 )
        v13 = v11;
      else
        v13 = (unsigned int)sub_140401B84(a1);
      v14 = sub_140656B70(v13 + v11);
      v15 = (_WORD *)v14;
      if ( v14 )
      {
        v16 = v13 + v14;
        v12 = sub_1404019F4(a1, a4, a5, 2, a9, v13 + v14, v11, v14, v13);
        if ( !v12 )
          v12 = sub_1404009BC(a2, a3, a7, a8, v16, v11, a9, v15);
        sub_1403FDDE8((__int64)v15, v13 + v11);
        sub_140656BA8(v15);
      }
      else
      {
        return 209715727;
      }
    }
  }
  else
  {
    return 209715726;
  }
  return v12;
}
