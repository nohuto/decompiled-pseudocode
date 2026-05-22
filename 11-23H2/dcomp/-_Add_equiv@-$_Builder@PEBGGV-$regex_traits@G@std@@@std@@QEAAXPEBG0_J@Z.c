/*
 * XREFs of ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x1801501D0
 * Callers:
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x1801505B8 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x18014EA40 (--$transform_primary@PEAG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$transform_primary@PEBG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBG0@Z @ 0x18014EB6C (--$transform_primary@PEBG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x1801504B8 (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_equiv(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int v5; // r12d
  int v6; // r15d
  unsigned int v8; // edi
  unsigned __int64 v9; // r14
  _QWORD *v10; // rcx
  char *v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  unsigned __int16 v14; // r8
  signed __int64 v15; // rax
  bool v16; // cc
  unsigned __int16 v17; // r8
  char v18; // bl
  int v19; // ecx
  _OWORD *v20; // rdx
  _OWORD *v21; // rax
  __int16 v23; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v24[6]; // [rsp+32h] [rbp-37h] BYREF
  __int64 v25; // [rsp+38h] [rbp-31h]
  _QWORD v26[4]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v27[32]; // [rsp+60h] [rbp-9h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a3;
  v25 = a4;
  v6 = (int)a2;
  std::_Regex_traits<unsigned short>::transform_primary<unsigned short const *>(
    *(_QWORD **)(a1 + 24),
    (__int64)v26,
    a2,
    a3);
  v8 = 0;
  v9 = 0LL;
  do
  {
    v10 = *(_QWORD **)(a1 + 24);
    v23 = v8;
    v11 = (char *)std::_Regex_traits<unsigned short>::transform_primary<unsigned short *>(v10, (__int64)v27, &v23, v24);
    v12 = (char *)v26;
    if ( v26[3] >= 8uLL )
      v12 = (char *)v26[0];
    v13 = *((_QWORD *)v11 + 2);
    if ( *((_QWORD *)v11 + 3) >= 8uLL )
      v11 = *(char **)v11;
    if ( v13 != v26[2] )
      goto LABEL_13;
    if ( v13 )
    {
      v14 = *(_WORD *)v11;
      if ( *(_WORD *)v11 >= *(_WORD *)v12 )
      {
        v15 = v11 - v12;
        v16 = v14 <= *(_WORD *)v12;
        do
        {
          if ( !v16 )
            break;
          if ( v13 == 1 )
            goto LABEL_18;
          v12 += 2;
          --v13;
          v17 = *(_WORD *)&v12[v15];
          v16 = v17 <= *(_WORD *)v12;
        }
        while ( v17 >= *(_WORD *)v12 );
      }
LABEL_13:
      v18 = 0;
      goto LABEL_14;
    }
LABEL_18:
    v18 = 1;
LABEL_14:
    std::wstring::_Tidy_deallocate((__int64)v27);
    if ( v18 )
    {
      v20 = *(_OWORD **)(v4 + 40);
      if ( !v20 )
      {
        v21 = operator new(0x20uLL);
        v20 = v21;
        if ( v21 )
        {
          *v21 = 0LL;
          v21[1] = 0LL;
        }
        else
        {
          v20 = 0LL;
        }
        *(_QWORD *)(v4 + 40) = v20;
      }
      v19 = *((unsigned __int8 *)v20 + (v9 >> 3)) | (1 << (v8 & 7));
      *((_BYTE *)v20 + (v9 >> 3)) = v19;
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 0x100 );
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
    v19,
    v6,
    v5,
    v25,
    v4 + 72);
  return std::wstring::_Tidy_deallocate((__int64)v26);
}
