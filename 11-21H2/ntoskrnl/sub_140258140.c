/*
 * XREFs of sub_140258140 @ 0x140258140
 * Callers:
 *     sub_140258114 @ 0x140258114 (sub_140258114.c)
 *     sub_1403D1458 @ 0x1403D1458 (sub_1403D1458.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140258140(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD **v4; // rdi
  _QWORD *i; // rbx

  result = a2 + 16;
  v4 = (_QWORD **)(a3 + 48);
  if ( !a3 )
    v4 = (_QWORD **)(a2 + 16);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    result = sub_14042A5E0(a2, a3);
    if ( !(_BYTE)result )
      break;
  }
  return result;
}
