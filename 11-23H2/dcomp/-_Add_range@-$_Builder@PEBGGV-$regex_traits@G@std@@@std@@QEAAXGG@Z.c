/*
 * XREFs of ?_Add_range@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x180043638
 * Callers:
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042FE0 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Insert@?$_Buf@G@std@@QEAAXG@Z @ 0x1800418BC (-_Insert@-$_Buf@G@std@@QEAAXG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x1801500A8 (-_Add_char_to_array@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 */

void __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_range(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  _OWORD *v7; // r8
  _OWORD *v8; // rax
  _DWORD *v9; // rax

  v4 = a3;
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
  {
    v5 = (unsigned __int16)std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    v4 = (unsigned __int16)std::ctype<unsigned short>::tolower(
                             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL),
                             (unsigned __int16)v4);
  }
  else
  {
    v5 = (unsigned __int16)a2;
  }
  v6 = *(_QWORD *)(a1 + 8);
  while ( v5 <= v4 && v4 < *(_DWORD *)(a1 + 32) )
  {
    v7 = *(_OWORD **)(v6 + 40);
    if ( !v7 )
    {
      v8 = operator new(0x20uLL);
      v7 = v8;
      if ( v8 )
      {
        *v8 = 0LL;
        v8[1] = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      *(_QWORD *)(v6 + 40) = v7;
    }
    *((_BYTE *)v7 + ((unsigned __int64)v5 >> 3)) |= 1 << (v5 & 7);
    ++v5;
  }
  if ( v4 >= v5 )
  {
    if ( v4 - v5 < *(_DWORD *)(a1 + 36) )
    {
      do
      {
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_array(a1);
        ++v5;
      }
      while ( v5 <= v4 );
    }
    else
    {
      v9 = *(_DWORD **)(v6 + 56);
      if ( !v9 )
      {
        v9 = operator new(0x10uLL);
        if ( v9 )
        {
          *v9 = 0;
          v9[1] = 0;
          *((_QWORD *)v9 + 1) = 0LL;
        }
        *(_QWORD *)(v6 + 56) = v9;
      }
      std::_Buf<unsigned short>::_Insert(v9, v5);
      std::_Buf<unsigned short>::_Insert(*(unsigned int **)(v6 + 56), v4);
    }
  }
}
