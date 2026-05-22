/*
 * XREFs of ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE1B4
 * Callers:
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE0B8 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801EE79C (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180051930 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800BC904 (--$-RAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV-$basic_string_view@GU.c)
 *     ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800BC944 (--$-RAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@AEBV-$basic_string@GU-$char_traits@G@s.c)
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BDB44 (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BDBD4 (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x1800C00D8 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

__int64 __fastcall MPCConstantManager::GetStaticConstant<unsigned long>(__int64 a1, int a2, __m128i *a3)
{
  const char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbp
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 v12; // rax
  __int64 *v13; // rbx
  __m128i v14; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v14 = *a3;
  if ( !MPCConstantManager::CheckConstantExistence(a1, a2, &v14) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCConstantManager.inl",
      v5);
  v14 = *a3;
  if ( MPCConstantManager::CheckModifiedConstantExistence(a1, v16, &v14) )
  {
    v6 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
           (__int64 *)(a1 + 72),
           (__int64)&v14,
           (__int64)&v16);
    v7 = *(_QWORD *)v6;
    v8 = *(__int64 **)(*(_QWORD *)v6 + 40LL);
    v9 = v8;
    v10 = (__int64 *)v8[1];
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( (unsigned __int8)std::less<void>::operator()<std::wstring const &,std::basic_string_view<unsigned short> const &>(
                              v7,
                              v10 + 4,
                              a3) )
      {
        v10 = (__int64 *)v10[2];
      }
      else
      {
        v9 = v10;
        v10 = (__int64 *)*v10;
      }
    }
  }
  else
  {
    v12 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
            (__int64 *)(a1 + 56),
            (__int64)&v14,
            (__int64)&v16);
    v7 = *(_QWORD *)v12;
    v8 = *(__int64 **)(*(_QWORD *)v12 + 40LL);
    v9 = v8;
    v13 = (__int64 *)v8[1];
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( (unsigned __int8)std::less<void>::operator()<std::wstring const &,std::basic_string_view<unsigned short> const &>(
                              v7,
                              v13 + 4,
                              a3) )
      {
        v13 = (__int64 *)v13[2];
      }
      else
      {
        v9 = v13;
        v13 = (__int64 *)*v13;
      }
    }
  }
  if ( *((_BYTE *)v9 + 25)
    || (unsigned __int8)std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
                          v7,
                          a3,
                          v9 + 4) )
  {
    v9 = v8;
  }
  if ( *((_BYTE *)v9 + 68) )
    std::_Throw_bad_variant_access();
  return *((unsigned int *)v9 + 16);
}
