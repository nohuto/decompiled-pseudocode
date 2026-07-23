/*
 * XREFs of sub_140567038 @ 0x140567038
 * Callers:
 *     sub_140554390 @ 0x140554390 (sub_140554390.c)
 *     sub_1405544E0 @ 0x1405544E0 (sub_1405544E0.c)
 *     sub_140567DA0 @ 0x140567DA0 (sub_140567DA0.c)
 *     sub_140567F5C @ 0x140567F5C (sub_140567F5C.c)
 *     sub_140A656A0 @ 0x140A656A0 (sub_140A656A0.c)
 *     sub_140A659E0 @ 0x140A659E0 (sub_140A659E0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1405529A8 @ 0x1405529A8 (sub_1405529A8.c)
 */

bool __fastcall sub_140567038(__int64 a1, int a2, _QWORD *a3)
{
  bool v3; // di
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool result; // al

  v3 = 0;
  v7 = 0LL;
  if ( (a1 & 7) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = ((unsigned __int64)(a1 & 0xFFF) + 4143) >> 12;
    if ( v9 )
    {
      while ( sub_14028FBF0(v8) )
      {
        v8 += 4096LL;
        if ( !--v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( *(_QWORD *)(a1 + 8) == *a3 )
      {
        v7 = a1;
        if ( sub_1405529A8() && (unsigned __int8)(*(_BYTE *)(a1 + 44) - 3) <= 1u )
          *(_BYTE *)(a1 + 44) = 1;
        if ( *(_BYTE *)(a1 + 44) == 1 )
        {
          v10 = *(int *)(a1 + 40);
          v11 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) == v11 + v10 + *(_QWORD *)(a1 + 24) && (_DWORD)v10 == a2 )
            v3 = sub_14028FBF0(v11) != 0;
        }
      }
    }
  }
  result = v3;
  *a3 = v7;
  return result;
}
