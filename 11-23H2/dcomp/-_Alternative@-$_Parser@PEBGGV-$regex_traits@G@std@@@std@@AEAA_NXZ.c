/*
 * XREFs of ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C
 * Callers:
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041910 (-_CharacterClass@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041964 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_DecimalDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1800419B0 (-_DecimalDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x180041AC4 (-_Add_rep@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXHH_N@Z.c)
 *     ?_Add_str_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042C00 (-_Add_str_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180042C58 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18004348C (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180043594 (-_Is_esc@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 *     ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180043BBC (-_Wrapped_disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180043FA0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180150D2C (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative(
        __int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  char *v4; // r15
  __int64 v5; // rax
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // ax
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 *v10; // rsi
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // di
  int v15; // eax
  int v16; // esi
  int v17; // edi
  unsigned int v18; // r14d
  __int64 size_of; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edx
  unsigned __int8 v24; // bp
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = 0;
  v3 = *(unsigned int *)(a1 + 124);
  while ( (_DWORD)v3 != -1 )
  {
    if ( (_DWORD)v3 == 124 )
      return result;
    if ( (_DWORD)v3 == 41 )
    {
      if ( *(_DWORD *)(a1 + 28) )
        return result;
      v4 = (char *)(a1 + 128);
      if ( (*(_DWORD *)(a1 + 128) & 0x10000000) == 0 )
        std::_Dwm_Xregex_error(v3, 0x10000000LL);
      goto LABEL_14;
    }
    v4 = (char *)(a1 + 128);
    switch ( (_DWORD)v3 )
    {
      case '.':
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, 5);
LABEL_39:
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        break;
      case '\\':
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        if ( *v4 < 0 )
        {
          if ( *(_WORD *)(a1 + 120) == 98 )
          {
            v23 = 4;
            goto LABEL_45;
          }
          if ( *(_WORD *)(a1 + 120) == 66 )
          {
            std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(
              a1 + 64,
              4);
            *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) ^= 1u;
            goto LABEL_46;
          }
        }
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_AtomEscape(a1);
        break;
      case '[':
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClass(a1);
        if ( *(_DWORD *)(a1 + 124) != 93 )
          std::_Dwm_Xregex_error(v22, v21);
        goto LABEL_39;
      case '(':
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        v14 = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Wrapped_disjunction(a1);
        if ( *(_DWORD *)(a1 + 124) != 41 )
          std::_Dwm_Xregex_error(v13, v12);
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        if ( !v14 )
          goto LABEL_33;
        break;
      case '^':
        v23 = 2;
LABEL_45:
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, v23);
LABEL_46:
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        goto LABEL_33;
      case '$':
        v23 = 3;
        goto LABEL_45;
      default:
        if ( (_DWORD)v3 == 63 || (unsigned int)(v3 - 42) <= 1 || (_DWORD)v3 == 123 )
          std::_Dwm_Xregex_error(v3, 0x10000000LL);
        if ( (_DWORD)v3 == 125 )
        {
          if ( (*(_DWORD *)v4 & 0x10000000) == 0 )
            std::_Dwm_Xregex_error(v3, 0x10000000LL);
        }
        else
        {
LABEL_14:
          if ( (_DWORD)v3 == 93 && (*(_DWORD *)v4 & 0x10000000) == 0 )
            std::_Dwm_Xregex_error(v3, 0x10000000LL);
        }
        v5 = *(_QWORD *)(a1 + 72);
        v6 = *(_WORD *)(a1 + 120);
        if ( *(_DWORD *)(v5 + 8) != 6 || (*(_BYTE *)(v5 + 12) & 4) != 0 )
          std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_str_node(a1 + 64);
        if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
        {
          v7 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL), v6);
          goto LABEL_19;
        }
        if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
        {
          v7 = std::_Regex_traits<unsigned short>::translate(*(_QWORD *)(a1 + 88), v6);
LABEL_19:
          v6 = v7;
        }
        v8 = *(_QWORD *)(a1 + 72);
        v9 = *(_DWORD *)(v8 + 36);
        v10 = (__int64 *)(v8 + 40);
        if ( *(_DWORD *)(v8 + 32) <= v9 )
        {
          v18 = v9 + 16;
          size_of = std::_Get_size_of_n<2>(v9 + 16);
          v20 = _o_realloc(*v10, size_of);
          if ( !v20 )
            ModuleFailFastForHRESULT(2147942414LL, retaddr);
          *(_DWORD *)(v8 + 32) = v18;
          *v10 = v20;
        }
        *(_WORD *)(*v10 + 2LL * (unsigned int)(*(_DWORD *)(v8 + 36))++) = v6;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 16) )
        {
          v11 = *(_QWORD *)a1;
          if ( **(_WORD **)a1 == 92
            && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(a1) )
          {
            v11 = v25 + 2;
          }
          *(_QWORD *)a1 = v11 + 2;
        }
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(a1);
        break;
    }
    v15 = *(_DWORD *)(a1 + 124);
    v16 = 0;
    v17 = -1;
    switch ( v15 )
    {
      case '*':
        goto LABEL_48;
      case '+':
        v16 = 1;
        goto LABEL_48;
      case '?':
        v17 = 1;
LABEL_48:
        *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) |= 4u;
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        if ( (*(_DWORD *)v4 & 0x400) != 0 && *(_DWORD *)(a1 + 124) == 63 )
        {
          v24 = 0;
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        }
        else
        {
          v24 = 1;
        }
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_rep(
          (_QWORD *)(a1 + 64),
          v16,
          v17,
          v24);
        break;
      case '{':
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
        if ( !std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits(a1) )
          std::_Dwm_Xregex_error(v27, v26);
        v16 = *(_DWORD *)(a1 + 116);
        if ( *(_DWORD *)(a1 + 124) == 44 )
        {
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
          if ( *(_DWORD *)(a1 + 124) != 125 )
          {
            if ( !std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits(a1) )
              std::_Dwm_Xregex_error(v27, v26);
            v17 = *(_DWORD *)(a1 + 116);
            goto LABEL_76;
          }
        }
        else
        {
          v17 = *(_DWORD *)(a1 + 116);
LABEL_76:
          if ( *(_DWORD *)(a1 + 124) != 125 )
            goto LABEL_79;
        }
        if ( v17 != -1 && v17 < v16 )
LABEL_79:
          std::_Dwm_Xregex_error(v27, v26);
        goto LABEL_48;
    }
LABEL_33:
    v3 = *(unsigned int *)(a1 + 124);
    result = 1;
  }
  return result;
}
