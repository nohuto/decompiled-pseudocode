/*
 * XREFs of sub_14099613C @ 0x14099613C
 * Callers:
 *     sub_1409962E0 @ 0x1409962E0 (sub_1409962E0.c)
 * Callees:
 *     sub_1405CB06C @ 0x1405CB06C (sub_1405CB06C.c)
 *     sub_1405CC890 @ 0x1405CC890 (sub_1405CC890.c)
 *     sub_1405D69B0 @ 0x1405D69B0 (sub_1405D69B0.c)
 *     sub_1405DF244 @ 0x1405DF244 (sub_1405DF244.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_14098C094 @ 0x14098C094 (sub_14098C094.c)
 *     sub_14098D024 @ 0x14098D024 (sub_14098D024.c)
 *     sub_1409A08A8 @ 0x1409A08A8 (sub_1409A08A8.c)
 */

void __fastcall sub_14099613C(__int16 a1, unsigned int a2, __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  int v7; // ebp
  bool v8; // bl
  int v10; // ecx
  _OWORD *i; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  int v14; // ecx
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF

  v15[0] = 0LL;
  v7 = a1 & 0x100;
  v8 = 0;
  if ( dword_140D05084 && a4 / 0x989680 >= (unsigned int)dword_140D05084 || a6 )
    v8 = (byte_140C54208 & 1) == 0 || (a1 & 1) != 0;
  if ( ((a1 & 0x80) != 0 || (a1 & 0x100) != 0 || v8) && sub_1405DF244() && (int)sub_1405CB06C(a3, v15) >= 0 )
  {
    if ( v8 )
    {
      v10 = 4;
    }
    else
    {
      if ( !v7 )
      {
LABEL_17:
        for ( i = *(_OWORD **)&v15[0]; i != v15; i = *(_OWORD **)i )
        {
          if ( v8
            || v7
            && ((sub_1405D69B0((__int64)i - 872), !sub_1405CC890((__int64)i - 872, 0LL))
              ? (v13 = (unsigned int)dword_140C0C7F0)
              : (v13 = *((unsigned int *)i + 10)),
                v12 >= v13) )
          {
            sub_14098C094((__int64)i - 872);
          }
          else
          {
            sub_1409A08A8((char *)i - 872, a2);
          }
        }
        if ( v8 )
        {
          v14 = 5;
        }
        else
        {
          if ( !v7 )
          {
LABEL_33:
            sub_14098D024(v15);
            return;
          }
          v14 = 3;
        }
        sub_140811764(v14, &a5);
        goto LABEL_33;
      }
      v10 = 2;
    }
    sub_140811764(v10, &a5);
    goto LABEL_17;
  }
}
