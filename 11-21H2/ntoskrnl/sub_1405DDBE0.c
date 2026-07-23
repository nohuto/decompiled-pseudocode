/*
 * XREFs of sub_1405DDBE0 @ 0x1405DDBE0
 * Callers:
 *     sub_1403D68F0 @ 0x1403D68F0 (sub_1403D68F0.c)
 * Callees:
 *     sub_1405DDCE4 @ 0x1405DDCE4 (sub_1405DDCE4.c)
 *     sub_1405DDEE4 @ 0x1405DDEE4 (sub_1405DDEE4.c)
 *     sub_1405DDFFC @ 0x1405DDFFC (sub_1405DDFFC.c)
 *     sub_1405DE108 @ 0x1405DE108 (sub_1405DE108.c)
 *     sub_1405DE1C4 @ 0x1405DE1C4 (sub_1405DE1C4.c)
 *     sub_1405DFA70 @ 0x1405DFA70 (sub_1405DFA70.c)
 */

__int64 __fastcall sub_1405DDBE0(__int64 a1)
{
  char v1; // bl
  int v3; // r9d
  int v4; // ecx
  _QWORD *v5; // r10
  void *v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  char v10; // [rsp+60h] [rbp+20h] BYREF
  char v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v9 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v10 = 0;
  if ( (unsigned __int8)sub_1405DE1C4() )
  {
    v5 = *(_QWORD **)(a1 + 16);
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        v4 = sub_1405DDEE4(*v5, *(_QWORD *)(a1 + 16), &v9, &v11);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 40) = v9;
          *(_BYTE *)(a1 + 48) = v11;
        }
        break;
      case 2:
        sub_1405DFA70(*(_QWORD *)(a1 + 40), 2uLL, *(_QWORD *)(a1 + 16));
        v4 = 0;
        break;
      case 3:
        v4 = sub_1405DDFFC(*v5, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 16), &v12, &v13);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 48) = v12;
          *(_QWORD *)(a1 + 56) = v13;
        }
        break;
      default:
        v6 = *(void **)(a1 + 8);
        if ( *(_DWORD *)a1 != 4 )
        {
          v7 = sub_1405DDCE4((_DWORD)v6, *(_DWORD *)a1, *(_QWORD *)(a1 + 16), v3, (__int64)&v10);
          v1 = v10;
          v4 = v7;
          goto LABEL_15;
        }
        v4 = sub_1405DE108(v6);
        break;
    }
    v1 = 1;
    goto LABEL_15;
  }
  v4 = -1073741823;
LABEL_15:
  *(_BYTE *)(a1 + 32) = v1;
  return (unsigned int)v4;
}
