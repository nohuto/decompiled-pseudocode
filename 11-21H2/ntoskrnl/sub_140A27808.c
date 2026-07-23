/*
 * XREFs of sub_140A27808 @ 0x140A27808
 * Callers:
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A27808(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx

  result = sub_14042A5E0(a1, a2);
  v8 = &qword_14000ADC8;
  v9 = 3LL;
  do
  {
    v10 = 0LL;
    if ( *(_DWORD *)v8 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(*(v8 - 1) + 8 * v10);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v11 + 16) )
        {
          v12 = *(_QWORD *)a5 - *(_QWORD *)v11;
          if ( *(_QWORD *)a5 == *(_QWORD *)v11 )
            v12 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v11 + 8);
          if ( !v12 )
            break;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *(_DWORD *)v8 )
          goto LABEL_10;
      }
      result = sub_14042A5E0(a1, a2);
    }
LABEL_10:
    v8 += 3;
    --v9;
  }
  while ( v9 );
  return result;
}
