/*
 * XREFs of sub_1407792B4 @ 0x1407792B4
 * Callers:
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_140779290 @ 0x140779290 (sub_140779290.c)
 * Callees:
 *     sub_1406DF8F0 @ 0x1406DF8F0 (sub_1406DF8F0.c)
 *     sub_140777C60 @ 0x140777C60 (sub_140777C60.c)
 *     sub_140777CF0 @ 0x140777CF0 (sub_140777CF0.c)
 *     sub_1407796C4 @ 0x1407796C4 (sub_1407796C4.c)
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 */

__int64 __fastcall sub_1407792B4(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  char v4; // cl
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  char v9; // al
  char v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v12 = 0LL;
  v4 = 1;
  v11 = 1;
  v6 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v6 + 20) )
  {
    if ( (unsigned int)(*(_DWORD *)(v6 + 16) - 1) <= 2 )
    {
      v7 = sub_14077D454(qword_140D00AC0, *(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 28), 0, (int)a1 + 32, (__int64)&v11);
      v3 = v7;
      if ( v7 == -1073741772 || v7 == -1073741275 )
      {
        v4 = 0;
        v11 = 0;
        v3 = 0;
      }
      else
      {
        if ( v7 < 0 )
          return v3;
        v4 = v11;
      }
    }
    if ( !v4 )
      return v3;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL) )
  {
    v8 = sub_1407796C4(a1, *(_QWORD *)(a2 + 16), &v11);
    v3 = v8;
    if ( v8 == -1073741772 )
    {
      v9 = 0;
      v3 = 0;
    }
    else
    {
      if ( v8 < 0 )
        return v3;
      v9 = v11;
    }
    if ( !v9 )
      return v3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL) & 1) == 0 || (v3 = sub_1406DF8F0(a1, a2), (v3 & 0x80000000) == 0) )
  {
    v3 = sub_140777C60(1, a2, 0LL, (__int64 *)&v12);
    if ( (v3 & 0x80000000) == 0 )
      sub_140777CF0(a1, v12);
  }
  return v3;
}
