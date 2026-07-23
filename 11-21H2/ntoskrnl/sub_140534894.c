/*
 * XREFs of sub_140534894 @ 0x140534894
 * Callers:
 *     sub_140533E60 @ 0x140533E60 (sub_140533E60.c)
 *     sub_1405346B0 @ 0x1405346B0 (sub_1405346B0.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1405342C0 @ 0x1405342C0 (sub_1405342C0.c)
 *     sub_1405345E8 @ 0x1405345E8 (sub_1405345E8.c)
 */

__int64 __fastcall sub_140534894(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx

  *(_BYTE *)(a2 + 72) = 0;
  for ( i = a2; ; i = v7 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(i + 24);
      if ( !v5 )
      {
        v5 = *(_QWORD *)(i + 32);
        if ( !v5 )
          break;
      }
      i = v5;
    }
    if ( i == a2 )
      break;
    sub_1405345E8((_QWORD *)i, a1);
    if ( *(_BYTE *)(i + 72) )
    {
      v6 = *(_QWORD *)(i + 64);
      if ( v6 )
      {
        if ( *(_QWORD *)(i + 40) == a1 + 80 )
        {
          *(_QWORD *)(a1 + 72) -= v6;
        }
        else
        {
          *(_QWORD *)(a1 + 56) -= *(_QWORD *)(i + 64);
          *(_QWORD *)(a1 + 64) -= *(_QWORD *)(i + 56);
        }
      }
    }
    v7 = *(_QWORD *)(i + 16);
    v8 = *(_QWORD *)(v7 + 24);
    if ( v8 == i )
    {
      sub_1403B1B5C(v6, v8);
      *(_QWORD *)(v7 + 24) = 0LL;
    }
    else
    {
      sub_1403B1B5C(v6, *(_QWORD *)(v7 + 32));
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 48));
  }
  return sub_1405342C0((__int64 *)a2, a1);
}
