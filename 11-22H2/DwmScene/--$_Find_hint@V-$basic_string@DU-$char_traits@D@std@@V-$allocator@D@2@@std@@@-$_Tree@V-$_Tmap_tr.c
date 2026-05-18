/*
 * XREFs of ??$_Find_hint@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@PEAX@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18002EB60
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@1@@Z @ 0x18002E350 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@M@.c)
 * Callees:
 *     ??$?MDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z @ 0x18001C734 (--$-MDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA_NAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??$_Find_lower_bound@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@@std@@PEAX@std@@@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18001CA20 (--$_Find_lower_bound@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Tree@V-$_.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@PEAX@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18001CAC0 (--$_Lower_bound_duplicate@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Tree.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string const,float>>,0>>::_Find_hint<std::string>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  _QWORD *v4; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *v11; // rdx
  __int64 *v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *i; // rax
  char v18; // cl
  __int64 result; // rax
  __int64 *v20; // rsi
  char v21; // r14
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  bool v27; // zf
  __int128 v28; // xmm0
  __int128 v29; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+30h] [rbp-28h]

  v4 = (_QWORD *)*a1;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v10 = a3 + 4;
    v11 = a3 + 4;
    if ( a3 == (__int64 *)*v4 )
    {
      if ( (unsigned __int8)std::operator<<char>(a4, v11) )
      {
        *(_QWORD *)a2 = a3;
        *(_DWORD *)(a2 + 8) = 1;
        *(_BYTE *)(a2 + 16) = 0;
        return a2;
      }
      goto LABEL_37;
    }
    if ( (unsigned __int8)std::operator<<char>(a4, v11) )
    {
      v12 = (__int64 *)*a3;
      v13 = a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v12 = (__int64 *)a3[1];
        v14 = a3;
        if ( !*((_BYTE *)v12 + 25) )
        {
          v15 = a3;
          v16 = a3;
          do
          {
            v14 = v16;
            if ( v15 != (__int64 *)*v12 )
              break;
            v13 = v12;
            v12 = (__int64 *)v12[1];
            v15 = v13;
            v16 = v13;
            v14 = v13;
          }
          while ( !*((_BYTE *)v12 + 25) );
        }
        if ( *((_BYTE *)v13 + 25) )
          v12 = v14;
      }
      else
      {
        for ( i = (__int64 *)v12[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
          v12 = i;
      }
      if ( !(unsigned __int8)std::operator<<char>(v12 + 4, a4) )
        goto LABEL_37;
      v18 = *(_BYTE *)(v12[2] + 25);
      result = a2;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v18 )
      {
        *(_QWORD *)a2 = v12;
LABEL_23:
        *(_DWORD *)(a2 + 8) = 0;
        return result;
      }
      *(_QWORD *)a2 = a3;
      goto LABEL_25;
    }
    if ( !(unsigned __int8)std::operator<<char>(v10, a4) )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_44;
    }
    v20 = (__int64 *)a3[2];
    v21 = *((_BYTE *)v20 + 25);
    if ( v21 )
    {
      v20 = (__int64 *)a3[1];
      if ( *((_BYTE *)v20 + 25) )
      {
LABEL_40:
        *(_BYTE *)(a2 + 16) = 0;
        result = a2;
        if ( v21 )
        {
          *(_QWORD *)a2 = a3;
          goto LABEL_23;
        }
        *(_QWORD *)a2 = v20;
LABEL_25:
        *(_DWORD *)(a2 + 8) = 1;
        return result;
      }
      v22 = a3;
      do
      {
        v23 = (__int64 **)v20;
        if ( v22 != (__int64 *)v20[2] )
          break;
        v20 = (__int64 *)v20[1];
        v22 = (__int64 *)v23;
      }
      while ( !*((_BYTE *)v20 + 25) );
    }
    else
    {
      v24 = (__int64 *)*v20;
      if ( !*(_BYTE *)(*v20 + 25) )
      {
        do
        {
          v20 = v24;
          v24 = (__int64 *)*v24;
        }
        while ( !*((_BYTE *)v24 + 25) );
      }
    }
    if ( !*((_BYTE *)v20 + 25) && !(unsigned __int8)std::operator<<char>(a4, v20 + 4) )
      goto LABEL_37;
    goto LABEL_40;
  }
  v9 = v4 + 2;
  if ( *(_BYTE *)(v4[1] + 25LL) || (unsigned __int8)std::operator<<char>((_QWORD *)(*v9 + 32LL), a4) )
  {
    *(_QWORD *)a2 = *v9;
    *(_BYTE *)(a2 + 16) = 0;
LABEL_44:
    *(_DWORD *)(a2 + 8) = 0;
    return a2;
  }
LABEL_37:
  std::_Tree<std::_Tmap_traits<std::string,enum Spectre::Engine::ShaderProperty,std::less<std::string>,std::allocator<std::pair<std::string const,enum Spectre::Engine::ShaderProperty>>,0>>::_Find_lower_bound<std::string>(
    a1,
    (__int64)&v29,
    a4);
  v25 = v30;
  v27 = !std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::_Lower_bound_duplicate<std::string>(
           v26,
           v30,
           a4);
  result = a2;
  if ( v27 )
  {
    v28 = v29;
    *(_BYTE *)(a2 + 16) = 0;
    *(_OWORD *)a2 = v28;
  }
  else
  {
    *(_QWORD *)a2 = v25;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return result;
}
