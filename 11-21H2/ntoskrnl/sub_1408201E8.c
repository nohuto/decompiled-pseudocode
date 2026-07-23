/*
 * XREFs of sub_1408201E8 @ 0x1408201E8
 * Callers:
 *     sub_14081FF7C @ 0x14081FF7C (sub_14081FF7C.c)
 * Callees:
 *     sub_140821B98 @ 0x140821B98 (sub_140821B98.c)
 */

__int64 __fastcall sub_1408201E8(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  __int64 v7; // rbx
  _DWORD **v8; // rcx
  _DWORD *v9; // rdx
  __int64 result; // rax
  __int64 i; // rcx
  __int64 v12; // r8

  if ( a2 )
  {
    v4 = a4;
    v5 = a2;
    v7 = a1 + 32;
    do
    {
      v8 = (_DWORD **)(*(_QWORD *)v7 + 40LL);
      *(_QWORD *)(*(_QWORD *)v7 + 16LL) = v8;
      v9 = *v8;
      if ( v4 )
      {
        for ( i = 0LL; (unsigned int)i < v9[5]; i = (unsigned int)(i + 1) )
        {
          v12 = *(_QWORD *)&v9[2 * i + 6];
          if ( *(_BYTE *)(v12 + 8) )
          {
            if ( *v9 == 1 )
              *(_DWORD *)(v12 + 84) |= 1u;
          }
        }
      }
      LOBYTE(a4) = 1;
      result = sub_140821B98(v9 + 6, (unsigned int)v9[5], a3, a4);
      v7 += 64LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
