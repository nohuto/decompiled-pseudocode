/*
 * XREFs of ?_Else_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@0@Z @ 0x180086CD4
 * Callers:
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Else_if(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 i; // rax
  _DWORD *v8; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(v6 + 16) = a3;
  for ( i = *(_QWORD *)(v3 + 40); i; i = *(_QWORD *)(i + 40) )
    v3 = i;
  v8 = operator new(0x30uLL);
  if ( v8 )
  {
    v8[3] = 0;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    *(_QWORD *)v8 = &std::_Node_if::`vftable';
    v8[2] = 16;
    *((_QWORD *)v8 + 4) = a3;
  }
  *(_QWORD *)(v3 + 40) = v8;
  *((_QWORD *)v8 + 2) = v5;
  result = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(v5 + 24) = result;
  return result;
}
