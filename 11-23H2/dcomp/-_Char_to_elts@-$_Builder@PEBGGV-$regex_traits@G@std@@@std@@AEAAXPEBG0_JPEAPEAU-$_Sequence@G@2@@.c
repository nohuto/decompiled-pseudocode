/*
 * XREFs of ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x1801504B8
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x1801501D0 (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x1801505B8 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ?_Insert@?$_Buf@G@std@@QEAAXG@Z @ 0x1800418BC (-_Insert@-$_Buf@G@std@@QEAAXG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
        __int64 a1,
        __int16 *a2,
        __int16 *a3,
        unsigned int a4,
        __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbx

  v5 = a5;
  v9 = *a5;
  if ( !*a5 )
    goto LABEL_7;
  result = *a5;
  while ( 1 )
  {
    v9 = result;
    if ( a4 >= *(_DWORD *)result )
      break;
    v5 = (__int64 *)(result + 24);
    v9 = *(_QWORD *)(result + 24);
    result = v9;
    if ( !v9 )
      goto LABEL_7;
  }
  if ( a4 != *(_DWORD *)result )
  {
LABEL_7:
    result = (__int64)operator new(0x20uLL);
    if ( result )
    {
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = 0;
      *(_QWORD *)(result + 16) = 0LL;
      *(_DWORD *)result = a4;
    }
    *v5 = result;
    *(_QWORD *)(result + 24) = v9;
  }
  v11 = *v5;
  while ( a2 != a3 )
    result = std::_Buf<unsigned short>::_Insert((unsigned int *)(v11 + 8), *a2++);
  return result;
}
