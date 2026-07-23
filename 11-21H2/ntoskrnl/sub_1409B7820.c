/*
 * XREFs of sub_1409B7820 @ 0x1409B7820
 * Callers:
 *     PfxFindPrefix @ 0x1409B7900 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1409B7A00 (PfxInsertPrefix.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

__int64 __fastcall sub_1409B7820(unsigned __int16 *a1)
{
  bool v2; // di
  __int64 v3; // rsi
  _QWORD *v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // eax
  _BYTE *v11; // rax
  __int64 v12; // r9
  unsigned int v13; // edx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( !sub_1407CDA20() )
  {
    _InterlockedOr(v15, 0);
    v4 = sub_140347DB0();
    v3 = v4[151];
    v2 = *((_WORD *)v4 + 538) != 0;
  }
  v5 = *a1 - 1;
  v6 = 1;
  if ( v2 )
  {
    v7 = 0;
    if ( *a1 != 1 )
    {
      do
      {
        v8 = *(unsigned __int8 *)(v7 + *((_QWORD *)a1 + 1));
        if ( *(_WORD *)(v3 + 2 * v8) )
        {
          v9 = 2;
        }
        else
        {
          v10 = v6 + 1;
          if ( (_BYTE)v8 != 92 )
            v10 = v6;
          v6 = v10;
          v9 = 1;
        }
        v7 += v9;
      }
      while ( v7 < v5 );
    }
  }
  else if ( *a1 != 1 )
  {
    v11 = (_BYTE *)*((_QWORD *)a1 + 1);
    v12 = v5;
    do
    {
      v13 = v6 + 1;
      if ( *v11 != 92 )
        v13 = v6;
      ++v11;
      v6 = v13;
      --v12;
    }
    while ( v12 );
  }
  return v6;
}
